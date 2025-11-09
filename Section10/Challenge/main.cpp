#include <iostream>
#include <string>

using namespace std;

int main()
{

  string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key{"zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA"};

  cout << "Message to encrypt:";
  string inputMessage{};
  getline(cin, inputMessage);

  string encryptedMessage{};
  for (char c : inputMessage)
  {
    size_t position = alphabet.find(c);
    if (position != string::npos)
    {
      encryptedMessage += key.at(position);
    }
    else
    {
      encryptedMessage += c;
    }
  }

  cout << encryptedMessage << endl;
}