#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "Vvedite znachenie A B\n";
	cin >> a >> b;
	while (!(a == 0 || b == 0))
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	if (a == 0)
	{
		cout << b;
	}
	if (b == 0)
	{
		cout << a;
	}
}