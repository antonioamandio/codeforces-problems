#include <iostream>

using namespace	std;

int	main(void)
{
	int	number;

	cin >> number;
	if (number % 2 == 0 && number != 2)
		cout << "YES";
	else
		cout << "NO";
	return (0);
}
