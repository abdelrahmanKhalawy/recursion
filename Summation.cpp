#include <iostream>
using namespace std;
long long SUMS(long long arr[], int n)
{
	if (n == 1)
	{
		return arr[0];
	}
	return arr[n - 1] + SUMS(arr, n - 1);
}
int main()
{
	int N;
	cin >> N;
	long long arr[1000];
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	cout << SUMS(arr, N);

	return 0;
}