//
//  main.cpp
//  Lab 1 Data Strc
//
//  Created by Navon M on 1/15/26.
//

#include <iostream>
#include "Die.h"

int main()
{
    Die d6;          // default: 6-sided
    Die d20(20);     // 20-sided (valid)
    Die badDie(1);   // invalid => defaults to 6

    std::cout << "d6 sides: " << d6.sides()
              << ", current value: " << d6.value() << "\n";

    std::cout << "Rolling d6 five times:\n";
    for (int i = 0; i < 5; ++i)
    {
        int v = d6.roll();
        std::cout << " roll " << (i + 1) << ": " << v << "\n";
    }

    std::cout << "\nd20 sides: " << d20.sides() << "\n";
    std::cout << "Rolling d20 three times:\n";
    for (int i = 0; i < 3; ++i)
    {
        std::cout << " " << d20.roll() << "\n";
    }

    std::cout << "\n'badDie' sides (should be 6): "
              << badDie.sides() << "\n";

    std::cout << "Rolling badDie twice:\n";
    std::cout << " " << badDie.roll() << "\n";
    std::cout << " " << badDie.roll() << "\n";

    return 0;
}
