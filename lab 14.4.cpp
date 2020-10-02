#include <iostream>;

using namespace std;

int main()
{
	int k ;
	float p, s;
	cout << "Vvedite chislo P\n";
	cin >> p;
	s = 1000;
	k = 0;
	while (s <= 1100)
	{
		s = (100 + p)/100* s ;
		k++;
	}
	cout <<"S="<< s<<"\nK="<<k;
}