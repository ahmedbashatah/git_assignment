#include <iostream>
#include<string>

using namespace std;
string encryptVigenere(const string& message, const string& keyword) {
    string code = message;
    int keywordLength = keyword.length(); #check the keyword length

    for (int i = 0; i < message.length(); ++i) {
        char messageCharacter = message[i]; #check the message length
        char keyCharacter = keyword[i % keywordLength];

        if (isalpha(messageCharacter)) {
            char base = isupper(messageCharacter) ? 'A' : 'a';
            code[i] = (messageCharacter + keyCharacter - 2 * base) % 26 + base;
        }
    }

    return code;
}

int main() {
    string message, keyword;

    cout << "Enter the message: "; #insert the message to encrypt
    getline(cin, message);

    cout << "Enter the keyword: "; #enetr a keyword to encrypt
    getline(cin, keyword);

    string code = encryptVigenere(message, keyword);

    cout << "\nEncrypted Message: " << code << endl; #show the message after encrypting

    return 0;
}
