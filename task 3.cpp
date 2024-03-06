#include <iostream>
#include<string>

using namespace std;
string encryptVigenere(const string& message, const string& keyword) {
    string code = message;
    int keywordLength = keyword.length();

    for (int i = 0; i < message.length(); ++i) {
        char messageCharacter = message[i];
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

    cout << "Enter the message: ";
    getline(cin, message);

    cout << "Enter the keyword: ";
    getline(cin, keyword);

    string code = encryptVigenere(message, keyword);

    cout << "\nEncrypted Message: " << code << endl;

    return 0;
}