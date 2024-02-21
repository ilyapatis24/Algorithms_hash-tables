#include <iostream>
using namespace std;

int hashString(string& word)
{
    int hash = 0;
    for (int i = 0; i < word.length(); ++i)
    {
        hash += static_cast<int>(word[i]);
    }

    return hash;
}

int main(int argc, char** argv) {
    system("chcp 1251");
    string input = "";

    while (input != "exit")
    {
        cout << "Введите строку: ";
        cin >> input;

        cout << "Наивный хэш строки " << input << " = " << hashString(input) << endl;
    }

    return 0;
}