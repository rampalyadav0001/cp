from collections import deque

def find_minimum_clicks(N, links, start_page, end_page):
    # Create a graph as an adjacency list
    graph = {}
    for i in range(1, N + 1):
        graph[i] = links[i - 1]

    # Initialize the BFS queue and visited set
    queue = deque([(start_page, 0)])  # Each element is a tuple (page, clicks)
    visited = set()

    while queue:
        current_page, num_clicks = queue.popleft()

        if current_page == end_page:
            return num_clicks

        visited.add(current_page)

        for neighbor in graph[current_page]:
            if neighbor not in visited:
                queue.append((neighbor, num_clicks + 1))

    return -1  # If end page cannot be reached

# Input
N = int(input())
links = [list(map(int, input().split())) for _ in range(N)]
start_page, end_page = map(int, input().split())

# Find and print the minimum clicks
result = find_minimum_clicks(N, links, start_page, end_page)
print(result)