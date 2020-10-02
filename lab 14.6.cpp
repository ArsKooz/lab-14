#include <iostream>

using namespace std;

int main()
{
	int n, k, Fk, fk1, fk2;
	cout << "Vvedite chislo fibonachi\n";
	cin >> n;
	k = 2;	Fk = 1;
	fk1 = 1;	fk2 = 1;
	while (n != Fk)
	{
		fk2 = fk1;
		fk1 = Fk;
		Fk = fk2 + fk1;
		k++;
	}
	cout <<"K="<< k;
}