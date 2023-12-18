#include <iostream>
#include <vector>
#include <queue>


using namespace std;

#define MAX 100001

int N;
int arr[MAX];
bool visited[MAX];
vector<int> graph[MAX];

// dfs
void dfs(int k)
{
  visited[k] = true;
  for (int i = 0; i < graph[k].size(); i++)
  {
    int next = graph[k][i];
    if (!visited[next])
    {
      arr[next] = k;
      dfs(next);
    }
  }
}


// bfs
void bfs() 
{
  queue<int> q;
  visited[1] = true;
  q.push(1);

  while (!q.empty())
  {
    int parent = q.front();
    q.pop();

    for (int i = 0; i < graph[parent].size(); i++)
    {
      int child = graph[parent][i];
      if (!visited[child])
      {
        arr[child] = parent;
        visited[child] = true;
        q.push(child);
      }
    }
  }
}


int main ()
{
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    int x, y;
    cin >> x >> y;
    graph[x].push_back(y);
    graph[y].push_back(x);
  }


  // dfs로 풀기
  // dfs(1);

  // for (int i = 2; i <= N; i++)
  // {
  //   cout << arr[i] << "\n";
  // }

  // bfs로 풀기
  bfs();

  for (int i = 2; i <= N; i++)
  {
    cout << arr[i] << "\n";
  }

  return 0;
}