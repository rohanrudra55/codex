from collections import deque

def navigate_maze(maze, start, target):
    R, C = len(maze), len(maze[0])
    visited = [[0] * C for _ in range(R)]
    visited[start[0]][start[1]] = 1
    queue = deque([(start[0], start[1], 0, 0, 0)])  # (x, y, distance, blocks with value 2, blocks with value 3)

    while queue:
        x, y, distance, blocks_with_two, blocks_with_three = queue.popleft()

        if x == target[0] and y == target[1]:
            return distance

        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            new_x, new_y = x + dx, y + dy

            if 0 <= new_x < R and 0 <= new_y < C and not visited[new_x][new_y]:
                new_distance = distance + 1
                value = maze[new_x][new_y]

                if value == 1:  # Obstacle
                    continue
                elif value == 2 and blocks_with_two >= 2:  # Limit on blocks with value 2
                    continue
                elif value == 3 and blocks_with_three >= 1:  # Limit on blocks with value 3
                    continue

                visited[new_x][new_y] = 1
                queue.append((new_x, new_y, new_distance, blocks_with_two + (value == 2), blocks_with_three + (value == 3)))

    return -1  # Path not found

# Given input
maze_input = [
    [0, 3, 0],
    [0, 0, 2],
    [1, 0, 0]
]
start_input = (0, 0)
target_input = (0, 2)

# Find the shortest distance to reach the target block
shortest_distance = navigate_maze(maze_input, start_input, target_input)

if shortest_distance == -1:
    print("STUCK")
else:
    print(f"Shortest distance to reach target: {shortest_distance}")
