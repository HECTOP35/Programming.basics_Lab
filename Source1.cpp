#include <iostream>
using namespace std;


int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    string text, word;
    cout << "������� �����\n";
    cin >> text;
    cout << "������� ���������� �����\n";
    cin >> word;
    string::size_type pos = text.find(word);
    while (pos != string::npos)
    {
        text.replace(pos, 4, "***");
        pos = text.find(word);
    }
    cout << "\n" << text;
    return 0;
}