/*
// My initial solution
#include <iostream>
using namespace std;

int	main(void) {
	int	n, total = 0, petya, vasya, tonya;

	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++) {
		petya = 0;
		vasya = 0;
		tonya = 0;
		cin >> petya;
		cin >> vasya;
		cin >> tonya;
		if (petya && vasya || petya && tonya || vasya && petya || vasya && tonya || tonya &&  petya || tonya && vasya)
			total++;
		cout << endl;
	}
	cout << total;
	return (0);
}*/
#include <iostream>
using namespace std;

int main(void)
{
	int	n, petya, vasya, tonya, total = 0;

	cin >> n;
	while (n--) {
		cin >> petya >> vasya >> tonya;
		if ((petya + vasya + tonya) >= 2)
			total++;
	}
	cout << total;
	return (0);
}
