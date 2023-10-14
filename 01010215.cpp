#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	system("chcp 1251 > nul");

	double verst, km;

	cout << "Введіть кількість верст: ";
	cin >> verst;

	km = verst * 1.067;

	cout << fixed << setprecision(3) << km << "Км";
	return 0;
}
