#include <iostream>
#include <cctype>

int	main(void)
{
	int n; int i = 0; char w; int a = 0; int d = 0;
	std::cin >> n;
	while (i < n)
	{
		std::cin >> w;
		w = std::toupper(w);
		if (w == 'A')
			a++;
		else if (w == 'D')
			d++;
		i++;
	}
	if (a > d)
		std::cout << "Anton";
	else if (d > a)
		std::cout << "Danik";
	else
		std::cout << "Friendship";
	return (0);
}
