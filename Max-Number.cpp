#include <iostream>
using namespace std;
int maxNum(int arr[], int n)
{
	if (n == 1)
	{
		return arr[0];
	}
	int maxRest = maxNum(arr, n - 1);

	return (arr[n - 1] > maxRest) ? arr[n - 1] : maxRest;
}
int main()
{
	int N;
	cin >> N;
	int arr[1000];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	cout << maxNum(arr, N);

	return 0;
}