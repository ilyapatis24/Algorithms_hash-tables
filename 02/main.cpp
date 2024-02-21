#include <iostream>
#include <tgmath.h>

using namespace std;

int realStringHash(string& word, int primeNumber, int module)
{
    int hash = 0;
    for (int i = 0; i < word.length(); ++i)
    {
        hash += static_cast<int>(word[i]) * static_cast<int>(pow(primeNumber, i));
    }

    return hash % module;
}

int main(int argc, char** argv) {
    system("chcp 1251");
    int primeNumber = 1;
    int module = 1;
    string input = "";

    cout << "Введите p: ";
    cin >> primeNumber;
    cout << "Введите n: ";
    cin >> module;

    while (input != "exit")
    {
        cout << "Введите строку: ";
        cin >> input;

        cout << "Хэш строки " << input << " = " << realStringHash(input, primeNumber, module) << endl;
    }

    return 0;
}