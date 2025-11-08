#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> vector1;
  vector<int> vector2;

  vector1.push_back(10);
  vector1.push_back(20);
  cout << "Vector1 with size " << vector1.size() << " having elements: " << vector1.at(0) << ", " << vector1.at(1) << endl;

  vector2.push_back(100);
  vector2.push_back(200);
  cout << "Vector2 with size " << vector2.size() << " having elements: " << vector2.at(0) << ", " << vector2.at(1) << endl;

  vector<vector<int>> vector2d{};

  vector2d.push_back(vector1);
  vector2d.push_back(vector2);
  cout << "Vector2d with size " << vector2d.size() << " having elements: " << vector2d.at(0).at(0) << ", " << vector2d.at(0).at(1) << ", " << vector2d.at(1).at(0) << ", " << vector2d.at(1).at(1) << endl;

  vector1.at(0) = 1000;
  cout << "Vector2d with size " << vector2d.size() << " having elements: " << vector2d.at(0).at(0) << ", " << vector2d.at(0).at(1) << ", " << vector2d.at(1).at(0) << ", " << vector2d.at(1).at(1) << endl;
  cout << "Vector1 with size " << vector1.size() << " having elements: " << vector1.at(0) << ", " << vector1.at(1) << endl;
}