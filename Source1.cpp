#include <iostream>

using namespace std;

int main() {
    double value = 0;


    cout << "input value: ";        //������: ������� �����

    while (!(cin >> value)) {        //���� �� ����� ������� ���������� �����, ��������� ����
        cout << "error\n";          //�������� �� ������ �����
        cin.clear();                //���������� ���������� ��������� cin
        fflush(stdin);              //������� ����� �����
    }

    cout << "value = " << value << '\n';
    cin.get();
}