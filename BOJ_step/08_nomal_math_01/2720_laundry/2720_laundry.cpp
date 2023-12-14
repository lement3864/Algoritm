# include <iostream>

using namespace std;

// 거스름돈을 걸러준다
// 쿼터 = 25센트, 다임 = 10센트, 니켈 = 5센트, 페니 = 1센트
// 각각 필요한 동전의 개수를 공백으로 구분하여 출력

int main()
{
  int T, C;
  cin >> T;

  while (T--)
  {
    int Q = 0, D = 0, N = 0, P = 0;
    cin >> C;

    while (C)
    {
      if (C >= 25)
      {
        Q++;
        C -= 25;
      }
      else if (C >= 10)
      {
        D++;
        C -= 10;
      }
      else if (C >= 5)
      {
        N++;
        C -= 5;
      }
      else
      {
        P++;
        C -= 1;
      }
    }
    cout << Q << " " << D << " " << N << " " << P << "\n";
  }
    
  return 0;
}