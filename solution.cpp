#include <iostream>
using namespace std;

/*
1 dollar = 100 cents
1 quarter = 25 cents
1 dime = 10 cents
1 nickel = 5 cents
1 penny = 1 cent
*/

int main(){
	cout << "Enter an amount in cents: ";
	int cent {0};
	cin >> cent;

	int dollar {0};
	int quarter {0};
	int dime {0};
	int nickel {0};
	int penny {0};

	while (cent > 0)
	{
		while (cent >= 100)
		{
			cent -= 100;
			++dollar;
		}
		while (cent >= 25 && cent <= 99)
		{
			cent -= 25;
			++quarter;
		}
		while (cent >= 10 && cent < 25)
		{
			cent -= 10;
			++dime;
		}
		while (cent >= 5 && cent < 10)
		{
			cent -= 5;
			++nickel;
		}
		while (cent > 0 && cent < 5)
		{
			cent -= 1;
			++penny;
		}
	}

	cout << "Dollars  : " << dollar << endl;
	cout << "Quarters : " << quarter << endl;
	cout << "Dimes    : " << dime << endl;
	cout << "Nickels  : " << nickel << endl;
	cout << "Pennies  : " << penny << endl;

	return 0;
}
