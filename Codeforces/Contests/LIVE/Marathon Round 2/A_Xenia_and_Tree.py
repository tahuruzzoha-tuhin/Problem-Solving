import sys
from collections import Counter, deque

def get_subtree_size(node, parent):
    subtree_size[node] = 1
    for child in adj[node]:
        if child != parent and not is_removed[child]:
            subtree_size[node] += get_subtree_size(child, node)
    return subtree_size[node]

def get_centroid(node, tree_size, parent):
    for child in adj[node]:
        if child != parent and not is_removed[child]:
            if subtree_size[child] * 2 > tree_size:
                return get_centroid(child, tree_size, node)
    return node

def get_dists(node, centroid, parent, cur_dist):
    for child in adj[node]:
        if child != parent and not is_removed[child]:
            cur_dist += 1
            get_dists(child, centroid, node, cur_dist)
            cur_dist -= 1
    if node == centroid:
        ancestors[node].append((centroid, 0))
    else:
        ancestors[node].append((centroid, cur_dist))

def build_centroid_decomp(root):
    stack = [(root, -1)]
    while stack:
        node, parent = stack.pop()
        if parent == -2:
            subtree_size[node] = 1
            for child in adj[node]:
                if not is_removed[child]:
                    subtree_size[node] += subtree_size[child]
            continue
        if node >= 0:
            stack.append((node, -2))
            stack.extend((child, node) for child in adj[node] if not is_removed[child])
            continue
        centroid = get_centroid(parent, subtree_size[parent], -1)
        is_removed[centroid] = True
        for child in adj[centroid]:
            if not is_removed[child]:
                get_dists(child, centroid, centroid, 1)
        for child in adj[centroid]:
            if not is_removed[child]:
                stack.append((child, centroid))

def paint(node):
    for ancestor, dist in ancestors[node]:
        min_dist[ancestor] = min(min_dist[ancestor], dist)
    min_dist[node] = 0

def query(node):
    ans = min_dist[node]
    for ancestor, dist in ancestors[node]:
        if dist == 0:
            continue
        ans = min(ans, dist + min_dist[ancestor])
    print(ans)

if __name__ == "__main__":
    N, M = map(int, input().split())

    adj = [[] for _ in range(N)]
    for _ in range(N - 1):
        a, b = map(int, input().split())
        a -= 1
        b -= 1
        adj[a].append(b)
        adj[b].append(a)

    subtree_size = [0] * N
    ancestors = [[] for _ in range(N)]
    is_removed = [False] * N
    build_centroid_decomp(0)

    min_dist = [float('inf')] * N
    paint(0)
    for _ in range(M):
        t, v = map(int, input().split())
        v -= 1
        if t == 1:
            paint(v)
        else:
            query(v)
