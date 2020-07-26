#include <iostream>
using namespace std;
 
int main() {
    double x, y;
    for (;;) {
    cout << "Enter two numbers\n";
    while (!(std::cin >> x >> y)) {
        std::cin.clear();
        std::cin.get();
        cout << "Error\n Repeat the enter two numders\n";
    }
    cout << "The sum of the numbers = " << x + y << '\n';
    std::cin.clear();
    std::cin.get();
}
}