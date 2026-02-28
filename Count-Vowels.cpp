#include <iostream>
#include <string>
using namespace std;

int countVowels(string s, int index)
{
	if (index == s.length())
		return 0;

	char c = s[index];
	if (c == 'a' || c == 'e' || c == 'i' ||
			c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' ||
			c == 'O' || c == 'U')
	{
		return 1 + countVowels(s, index + 1);
	}

	return countVowels(s, index + 1);
}
int main()
{
	string S;
	getline(cin, S);

	cout << countVowels(S, 0);

	return 0;
}