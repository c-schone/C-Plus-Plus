#include <iostream>
#include <vector>

using namespace std;

void displayMenu();
char checkUserInput();
void printNumbers(const vector<int> &numbers);
void addNumber(vector<int> &numbers);
void displayMean(const vector<int> &numbers);
void displaySmallestNumber(const vector<int> &numbers);
void displayLargestNumber(const vector<int> &numbers);
void quitApp(bool &shouldRun);
void showUnknownSelection();
void executeChoice(const char &choice, vector<int> &vec, bool &shouldRun);

void displayMenu()
{
  cout << "P - Print numbers" << endl;
  cout << "A - Add a number" << endl;
  cout << "M - Display mean of the numbers" << endl;
  cout << "S - Display the smallest number" << endl;
  cout << "L - Display the largest number" << endl;
  cout << "Q - Quit" << endl;

  cout << "Enter your choice: ";
}

char checkUserInput()
{
  char choice;
  cin >> choice;
  cout << endl;
  choice = toupper(choice);

  return choice;
}

void printNumbers(const vector<int> &numbers)
{
  if (numbers.size() == 0)
  {
    cout << "[] - the list is empty\n"
         << endl;
  }
  else
  {
    cout << "[ ";
    for (auto val : numbers)
    {
      cout << val << " ";
    }
    cout << "]\n"
         << endl;
  }
}

void addNumber(vector<int> &numbers)
{
  cout << "Enter a number: ";
  int number;
  cin >> number;
  cout << endl;
  numbers.push_back(number);
  cout << number << " added\n"
       << endl;
}

void displayMean(const vector<int> &numbers)
{
  if (numbers.size() == 0)
  {
    cout << "Unable to calculate the mean - no data\n"
         << endl;
  }
  else
  {
    int total{0};
    for (auto val : numbers)
    {
      total += val;
    }

    cout << static_cast<double>(total) / numbers.size() << "\n"
         << endl;
  }
}

void displaySmallestNumber(const vector<int> &numbers)
{
  if (numbers.size() == 0)
  {
    cout << "Unable to determine the smallest number - the list is empty\n"
         << endl;
  }
  else
  {
    int smallestNumber{numbers.at(0)};
    for (auto val : numbers)
    {
      if (val < smallestNumber)
      {
        smallestNumber = val;
      }
    }
    cout << "The smallest number is " << smallestNumber << "\n"
         << endl;
  }
}

void displayLargestNumber(const vector<int> &numbers)
{
  if (numbers.size() == 0)
  {
    cout << "Unable to determine the largest number - the list is empty\n"
         << endl;
  }
  else
  {
    int largestNumber{numbers.at(0)};
    for (auto val : numbers)
    {
      if (val > largestNumber)
      {
        largestNumber = val;
      }
    }
    cout << "The largest number is " << largestNumber << "\n"
         << endl;
  }
}

void quitApp(bool &shouldRun)
{
  cout << "Bye!" << endl;
  shouldRun = false;
}

void showUnknownSelection()
{
  cout << "Unknown selection!\n"
       << endl;
}

void executeChoice(const char &choice, vector<int> &vec, bool &shouldRun)
{
  switch (choice)
  {
  case 'P':
    printNumbers(vec);
    break;

  case 'A':
    addNumber(vec);
    break;

  case 'M':
    displayMean(vec);
    break;

  case 'S':
    displaySmallestNumber(vec);
    break;

  case 'L':
    displayLargestNumber(vec);
    break;

  case 'Q':
    quitApp(shouldRun);
    break;
  default:
    showUnknownSelection();
  }
}

int main()
{
  vector<int> vec{};
  bool shouldRun{true};

  do
  {
    displayMenu();
    char choice = checkUserInput();
    executeChoice(choice, vec, shouldRun);

  } while (shouldRun);

  return 0;
}