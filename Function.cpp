#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int update_balance(string command, float dollars, float &balance);

int main()
{
	float balance = 10000, amount;
	string com;
	cout << "Exit with 0" << endl;
	cout << "Your balance = " << "10,000.00\n";
	do {
		cout << "Input command (1 or withdraw, 2 deposit) : ";
		cin >> com;
		if (com == "0")
		{
			break;
		}
		cout << "Input amount : ";
		cin >> amount;
		update_balance(com, amount, balance);
		cout << "Your balance : " << fixed << setprecision(2) << balance << endl;
	} while (com != "0");
	return (0);
}

int update_balance(string command, float dollars, float &balance)
{
	if (command == "1")
	{
		balance = balance - dollars;
	}
	else
	{
		balance = balance + dollars;
	}
	return(balance);
}