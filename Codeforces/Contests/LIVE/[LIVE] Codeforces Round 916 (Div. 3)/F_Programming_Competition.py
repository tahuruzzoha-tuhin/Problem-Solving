def dfs(node, graph, visited, team_count):
    visited[node] = True
    subtree_size = 1

    for neighbor in graph[node]:
        if not visited[neighbor]:
            neighbor_subtree_size = dfs(neighbor, graph, visited, team_count)
            subtree_size += neighbor_subtree_size
            team_count[0] += neighbor_subtree_size * (n - neighbor_subtree_size)

    return subtree_size

def max_teams(graph, n):
    visited = [False] * (n + 1)
    team_count = [0]

    dfs(1, graph, visited, team_count)

    return team_count[0]

t = int(input())  # Number of test cases

for _ in range(t):
    n = int(input())  # Number of employees

    # Construct the graph
    graph = {i: [] for i in range(1, n + 1)}
    superiors = list(map(int, input().split()))

    for i, superior in enumerate(superiors, start=2):
        graph[superior].append(i)

    result = max_teams(graph, n)
    print(result)
