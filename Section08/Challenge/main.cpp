#include <iostream>

using namespace std;

int main()
{

  cout << "Enter an amount in Cents: " << endl;

  int amountInput;
  cin >> amountInput;

  cout << "This would be provided as follows:" << endl;

  int amountEuro = amountInput / 100;
  cout << amountEuro << " Euros" << endl;

  int balance = amountInput % 100;
  int amount50Cents = balance / 50;
  cout << amount50Cents << " 50 Cent coins" << endl;

  balance %= 50;
  int amount20Cents = balance / 20;
  cout << amount20Cents << " 20 Cent coins" << endl;

  balance %= 20;
  int amount10Cents = balance / 10;
  cout << amount10Cents << " 10 Cent coins" << endl;

  balance %= 10;
  int amount5Cents = balance / 5;
  cout << amount5Cents << " 5 Cent coins" << endl;

  balance %= 5;
  int amount2Cents = balance / 2;
  cout << amount2Cents << " 2 Cent coins" << endl;

  balance %= 2;
  int amount1Cents = balance % 2;
  cout << amount1Cents << " 1 Cent coins" << endl;
}