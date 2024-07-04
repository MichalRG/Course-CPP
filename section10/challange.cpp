#include<iostream> 
#include <string>

using namespace std;

int main() {
  string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
  string secret_message {};
  string encrypted_message {};
  string decrypted_message {};
  cout << "Enter your secret message: ";
  getline(cin, secret_message);
  
  cout << "Encrypting message..." << endl;
  for(int i{0}; i<secret_message.length(); i++) {
    size_t position = alphabet.find(secret_message[i]);
    if(position != string::npos) {
      encrypted_message += key.at(position);
    } else {
      encrypted_message += secret_message.at(i);
    }
  }
  cout << "Encrypted message: " << encrypted_message << endl;
  cout << "Decrypting message..." << endl;
  for (int i{0}; i<encrypted_message.length(); i++) {
    size_t position = key.find(encrypted_message[i]);
    if(position != string::npos) {
      decrypted_message += alphabet.at(position);
    } else {
      decrypted_message += encrypted_message.at(i);
    }
  }
  cout << "Decrypted message: " << decrypted_message << endl;

  return 0;
}