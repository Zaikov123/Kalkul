#include "Arifmetic.h"
#include <iostream>
#include <limits>

int main()
{
    double x, y, res;
    char op;
    Arifmetic obj;

    while (true) {
        std::cout << "Enter arithmetic operation: ";
        if (!(std::cin >> x >> op >> y)) {
            std::cout << "Invalid input. Please enter a valid arithmetic operation." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        res = obj.doThing(x, op, y);
        std::cout << "Result: " << res << std::endl;
    }
    return 0;
}
