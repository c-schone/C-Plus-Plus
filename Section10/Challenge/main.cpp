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
  for (int i{0}; i < inputMessage.length(); ++i)
  {
    // zuerst buchstaben aus satz in alphabet finden
    //  dann position in key anwenden
    //  buchstabe aus key in encryptedMessage hinzufügen
    size_t position = alphabet.find(inputMessage.at(i));
    encryptedMessage.push_back(key.at(position));
  }

  cout << encryptedMessage << endl;
}