# include <iostream>

using namespace std;

int main()
{
  int T, A, B, result;
  cin >> T;
  for (int i = 1; i < T + 1; i++)
  {
    cin >> A >> B;

    result = A + B;

    cout << "Case #" << i << ": " << result << endl;
  }
  return 0;
}