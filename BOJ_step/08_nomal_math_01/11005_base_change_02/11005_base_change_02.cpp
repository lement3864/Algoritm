#include <iostream>
#include <algorithm>

using namespace std;

int main () 
{
  int N, B;
  cin >> N >> B;

  string B_num;
  while (N != 0)
  {
    int temp = N % B;
    if (temp > 9)
    {
      temp = temp - 10 + 'A';
      B_num += temp;
    }
    else
    {
      B_num += ('0' + temp);
    }
    N /= B;
  }

  reverse(B_num.begin(), B_num.end());

  cout << B_num;

  return 0;
}