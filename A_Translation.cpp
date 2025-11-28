#include <iostream>
#include <algorithm>
using namespace std;

int	main(void)
{
	int len = 0; string s1, s2;
	cin >> s1 >> s2;
	if (s1.size() == s2.size())
		len = s1.size();
	else
	{
		cout << "NO";
		return (0);
	}
	for (int i = 0, j = len - 1; i < len; i++, j--)
	{
		if (s1[i] != s2[j])
		{
			cout << "NO" << endl;
			return (0);
		}
	}
	cout << "YES" << endl;
	return (0);
}
