#include <iostream>
using namespace std;
long long Fact(long long n)
{
	long long result = 1;
	if (n > 1)
	{
		result = n * Fact(n - 1);
	}
	return result;
}
int main()
{
	long long N;
	cin >> N;
	cout << Fact(N);

	return 0;
}