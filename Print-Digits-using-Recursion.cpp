#include <iostream>
using namespace std;
void printDigit(int n)
{
	if (n < 10)
	{
		cout << n << " ";
		return;
	}
	printDigit(n / 10);
	cout << n % 10 << " ";
}
int main()
{
	int T;
	cin >> T;
	for (T; T > 0; T--)
	{
		int N;
		cin >> N;
		printDigit(N);
		cout << "\n";
	}

	return 0;
}