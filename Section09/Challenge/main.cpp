#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> vec{};
  bool shouldRun{true};

  do
  {
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;

    cout << "Enter your choice: ";
    char choice;
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 'p':
    case 'P':
      if (vec.size() == 0)
      {
        cout << "[] - the list is empty\n"
             << endl;
      }
      else
      {
        cout << "[ ";
        for (auto val : vec)
        {
          cout << val << " ";
        }
        cout << "]\n"
             << endl;
      }

      break;

    case 'a':
    case 'A':
      cout << "Enter a number: ";
      int number;
      cin >> number;
      cout << endl;
      vec.push_back(number);
      cout << number << " added\n"
           << endl;
      break;

    case 'm':
    case 'M':
      if (vec.size() == 0)
      {
        cout << "Unable to calculate the mean - no data\n"
             << endl;
      }
      else
      {
        double total{0};
        double mean{0.0};
        for (auto val : vec)
        {
          total += val;
        }
        mean = total / vec.size();
        cout << mean << "\n"
             << endl;
      }
      break;

    case 's':
    case 'S':
      if (vec.size() == 0)
      {
        cout << "Unable to determine the smallest number - the list is empty\n"
             << endl;
      }
      else
      {
        int smallestNumber{vec.at(0)};
        for (auto val : vec)
        {
          if (val < smallestNumber)
          {
            smallestNumber = val;
          }
        }
        cout << "The smallest number is " << smallestNumber << "\n"
             << endl;
      }
      break;

    case 'l':
    case 'L':
      if (vec.size() == 0)
      {
        cout << "Unable to determine the largest number - the list is empty\n"
             << endl;
      }
      else
      {
        int largestNumber{vec.at(0)};
        for (auto val : vec)
        {
          if (val > largestNumber)
          {
            largestNumber = val;
          }
        }
        cout << "The largest number is " << largestNumber << "\n"
             << endl;
      }
      break;

    case 'q':
    case 'Q':
      shouldRun = false;
      break;
    default:
      break;
    }
  } while (shouldRun);

  return 0;
}