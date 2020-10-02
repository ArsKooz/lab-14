#include <iostream>

using namespace std;

int main()
{
	int a, b, n;
	cout << "Vvedite znachenie A B\n";
	cin >> a >> b;
	for (a;a <= b;a++)
	{
		for (n = 1;n <= a;n++)
		{
			cout << a;
		}
	}
}