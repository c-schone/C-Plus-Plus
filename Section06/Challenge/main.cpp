#include <iostream>

using namespace std;

int main()
{

  cout << "Hello and welcome to Chris' Carpet Cleaning Service!" << endl;
  double chargeSmallRoom{25};
  double chargeLargeRoom{35};
  double taxRate{0.19};
  int estimationValidInDays{30};

  cout << "Our charges are:\n"
       << chargeSmallRoom << "€ per small room\n"
       << chargeLargeRoom << "€ per large room\nSales tax rate is "
       << taxRate * 100 << "%\nEstimates are valid for "
       << estimationValidInDays << " days.\n\n"
       << endl;

  cout << "How many small rooms do you want to have cleaned?" << endl;
  int smallRooms{0};
  cin >> smallRooms;

  cout << "How many large rooms do you want to have cleaned?" << endl;
  int largeRooms{0};
  cin >> largeRooms;

  cout << "Estimate for carpet cleaning service\n";
  cout << "Number of small rooms: " << smallRooms << endl;
  cout << "Number of large rooms: " << largeRooms << endl;
  cout << "Price per small room: " << chargeSmallRoom << "€" << endl;
  cout << "Price per large room: " << chargeLargeRoom << "€" << endl;
  double totalSmallRooms = smallRooms * chargeSmallRoom;
  double totalLargeRooms = largeRooms * chargeLargeRoom;
  double cost = totalSmallRooms + totalLargeRooms;
  cout << "Cost: " << cost << "€" << endl;
  double totalTax = cost * taxRate;
  cout << "Tax: " << totalTax << endl;
  cout << "=========================" << endl;
  double total = cost + totalTax;
  cout << "Total estimate: " << total << endl;
  cout << "This estimation is valid for " << estimationValidInDays << " days." << endl;
}