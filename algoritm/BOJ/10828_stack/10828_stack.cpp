#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main ()
{
  int N;
  cin >> N;

  stack<int> st;
  string text;

  for (int i = 0; i < N; i++)
  {
    cin >> text;

    if (text == "push")
    {
      int num;
      cin >> num;
      st.push(num);
    }

    else if (text == "pop")
    {
      if (!st.empty())
      {
        cout << st.top() << "\n";
        st.pop();
      }
      else
      {
        cout << "-1" << "\n";
      }
    }

    else if (text == "size")
    {
      cout << st.size() << "\n";
    }

    else if (text == "empty")
    {
      if (st.empty())
      {
        cout << "1" << "\n";
      }
      else
      {
        cout << "0" << "\n";
      }
    }

    else if (text == "top")
    {
      if (!st.empty())
      {
        cout << st.top() << "\n";
      }
      else
      {
        cout << "-1" << "\n";
      }
    }

  }

  return 0;
}