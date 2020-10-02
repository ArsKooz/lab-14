#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "Vvedite znachenie A B\n";
	cin >> a >> b;
	while (a >= b)
	{
		a -= b;
	}
	cout << a;
}