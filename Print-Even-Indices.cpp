#include <iostream>
using namespace std;
void toBinary(long long n)
{
	if (n == 0)
		return;

	toBinary(n / 2);

	cout << n % 2;
}

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		long long N;
		cin >> N;

		if (N == 0)
			cout << 0;
		else
			toBinary(N);

		cout << endl;
	}

	return 0;
}