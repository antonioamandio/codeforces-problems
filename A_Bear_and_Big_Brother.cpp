#include <iostream>

using namespace	std;

int	main(void)
{
	int	a;
	int	b;
	int	y;

	y = 1;
	cin >> a >> b;
	while (1)
	{
		a *= 3;
		b *= 2;
		if (a > b)
			break ;
		y++;
	}
	cout << y;
	return (0);
}
