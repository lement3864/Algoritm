#include <iostream>

using namespace std;

// 낮에 A미터 올라가고 밤에 B미터 미끄러진다
// 며칠이 걸리는지 출력
// 반복문을 쓰니깐 시간 초과 -> 반복문을 안쓰고 해결해야 함

// int main ()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(NULL);
//   cout.tie(NULL);

//   int A, B, V, cnt = 0, day = 0;

//   cin >> A >> B >> V;

//   // 달팽이가 올라간 거리가 나무 막대 길이와 같아지면 반복 종료
//   while (cnt != V)
//   {
//     ++day;
//     cnt += A;
//     if (cnt >= V)
//     {
//       break;
//     }
//     cnt -= B;
//   }

//   cout << day << "\n";

//   return 0;
// }




// 반복문 안쓰고 문제 풀기

int main ()
{
  int A, B, V;
  cin >> A >> B >> V;

  cout << (V - B - 1) / (A - B) + 1;

  return 0;
}