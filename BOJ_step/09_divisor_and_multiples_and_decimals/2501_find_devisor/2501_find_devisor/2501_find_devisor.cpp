// 2501 약수 구하기

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, K;
	vector<int> arr;

	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			arr.push_back(i);
		}
	}

	/*for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}*/

	if (arr.size() < K)
	{
		cout << 0;
	}
	else
	{
		cout << arr[K - 1];
	}

	return 0;
}