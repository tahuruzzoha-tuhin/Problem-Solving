def is_bipartite(graph):
    colors = {}
    for node in graph:
        colors[node] = None
    
    queue = []

    start_node = list(graph.keys())[0]
    colors[start_node] = 0
    queue.append(start_node)

    while queue:
        current_node = queue.pop(0)

        for neighbor in graph[current_node]:
            if colors[neighbor] is None:
                colors[neighbor] = 1 - colors[current_node]  
                queue.append(neighbor)
            elif colors[neighbor] == colors[current_node]:
                return False 

    return True  


while True:
    n = int(input())
    if n == 0:
        break

    l = int(input())
    graph = {i: [] for i in range(n)}

    for _ in range(l):
        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)

    if is_bipartite(graph):
        print("BICOLORABLE.")
    else:
        print("NOT BICOLORABLE.")
