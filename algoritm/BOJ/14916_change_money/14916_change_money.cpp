#include <iostream>

using namespace std;

int main ()
{
  int change, result = 0;
  cin >> change;

  while (true)
  {
    if (change % 5 == 0)
    {
      result += change / 5;
      break;
    }
    else 
    {
      change -= 2;
      result += 1;
    }

    if (change < 0)
    {
      break;
    }
  }

  if (change < 0)
  {
    cout << -1;
  } 
  else
  {
    cout << result;
  }
  

  return 0;
}