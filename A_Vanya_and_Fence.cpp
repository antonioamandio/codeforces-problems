#include <iostream>
using namespace std;

int	main(void)
{
	int number_of_pleople;
	int height;
	int person_height;
	int width = 0;
	int i = 0;

	cin >> number_of_pleople >> height;
	while (i < number_of_pleople) {
		cin >> person_height;
		if (person_height > height)
			width += 2;
		else
			width += 1;
		i++;
	}
	cout << width;
	return (0);
}
