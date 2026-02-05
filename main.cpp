//
//  main.cpp
//  Die.cpp
//
//  Created by Navon M on 1/15/26.


#include "Die.h"
#include <cstdlib>

Die::Die() {
    sides = 6;
}

Die::Die(int s) {
    if (s >= 2)
        sides = s;
    else
        sides = 6;
}

int Die::roll() {
    return rand() % sides + 1;
}

int Die::getSides() const {
    return sides;
}
