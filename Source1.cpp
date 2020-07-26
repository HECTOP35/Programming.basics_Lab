#include <iostream>
#include <fstream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

void randomF() {
    int leght = 30;
    int max_number = 100;
    fstream f;
    f.open("input.txt", ios::out);
    for (int i = 0; i < leght; i++) {
        f << 1 + rand() % ((max_number + 1) - 1) << " ";
    }

}

int main()
{
    randomF();
    int* array;
    fstream f;
    f.open("input.txt", ios::in);
    int i;
    int size = 0;

    while (!f.eof() && f >> i)
    {
        size++;
    }
    array = new int[size];
    f.close();

    f.open("input.txt", ios::in);
    for (int i = 0; i < size; i++)
    {
        f >> array[i];
    }
    f.close();

    sort(array, array + (size));
    f.open("output.txt", ios::out);
    for (int i = 0; i < size; i++)
    {
        f << array[i] << " ";
    }

    f.close();
    delete[]array;

    return 0;
}