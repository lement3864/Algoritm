#include <iostream>

using namespace std;

// B진법 수 N을 10진법으로 출력

int main() 
{
  string B_num;
  int N, result = 0;
  cin >> B_num >> N;

  for (int i = 0; i < B_num.length(); i++)
  {
    if ('0' <= B_num[i] && B_num[i] <= '9')
    {
      result = result * N + (B_num[i] - '0');
    }
    else
    {
      result = result * N + (B_num[i] - 'A' + 10);
    }
  }

  cout << result;

  return 0;
}