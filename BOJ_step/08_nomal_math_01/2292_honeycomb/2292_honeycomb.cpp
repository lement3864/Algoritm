#include <iostream>

using namespace std;

int main ()
{
   int N;
   cin >> N;

   int i = 1;
   int cnt = 1;

   while (N > i)
   {
    i += (6 * cnt);
    cnt ++;
   }

   cout << cnt;

  return 0;
}
