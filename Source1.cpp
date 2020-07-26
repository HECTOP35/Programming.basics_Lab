#include <iostream>

using namespace std;

int main() {
    double value = 0;


    cout << "input value: ";        //Диалог: введите число

    while (!(cin >> value)) {        //пока не будет введено нормальное число, выполняем цикл
        cout << "error\n";          //сообщаем об ошибке ввода
        cin.clear();                //сбрасываем коматозное состояние cin
        fflush(stdin);              //очищаем поток ввода
    }

    cout << "value = " << value << '\n';
    cin.get();
}