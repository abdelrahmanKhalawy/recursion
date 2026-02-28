#include <iostream>
using namespace std;

void printEvenReverse(long long arr[], int n, int index)
{
	if (index >= n)
		return;
	printEvenReverse(arr, n, index + 2);

	cout << arr[index] << " ";
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
	printEvenReverse(arr, N, 0);

	return 0;
}