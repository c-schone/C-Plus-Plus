#include <iostream>
#include <string>

using namespace std;

int main()
{

  cout << "Enter characters that should be used for displaying a tree:";
  string treeCharacters{};
  getline(cin, treeCharacters);

  // this is for the lines
  for (int i{0}; i < treeCharacters.length(); ++i)
  {
    // this is for the whitespaces before the chars
    for (int j{0}; j < treeCharacters.length() - i; ++j)
    {
      cout << " ";
    }
    // this is for the chars
    // need to start at treecharacters(0) -> linenumber (i)
    // then treecharacters(010) -> linenumber-1, linenumber, linenumber-1
    // then treecharacters(01210) -> linenumber-2, linenumber-1, linenumber, linenumber-1, linenumber-2

    for (int k{0}; k <= i; ++k)
    {
      cout << treeCharacters.at(k);
    }
    for (int l{i - 1}; l > -1; --l)
    {
      cout << treeCharacters.at(l);
    }
    cout << endl;
  }
}