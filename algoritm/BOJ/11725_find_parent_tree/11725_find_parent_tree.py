from collections import deque
# 각 노드의 부모를 구해서 출력

N = int(input())

graph = [[] for _ in range(N + 1)]
for _ in range(N - 1):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)


# DFS로 풀기
# visited = [0] * (N + 1)

# def dfs(start):
#     for i in graph[start]:
#         if visited[i] == 0:
#             visited[i] = start
#             dfs(i)

# dfs(1)

# for i in range(2, N + 1):
#     print(visited[i])


# BFS로 풀기
queue = deque()
queue.append(1)

ans = [0] * (N + 1)

def bfs():
    while queue:
        now = queue.popleft()
        for next in graph[now]:
            if ans[next] == 0:
                ans[next] = now
                queue.append(next)

bfs()

result = ans[2:]

for i in result:
    print(i)