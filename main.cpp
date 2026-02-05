//  main.cpp
//  Lab 1 Data Strc
//
//  Created by Navon M on 1/15/26.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Die.h"

using namespace std;

// Converts numeric score to letter grade
char getGrade(int score)
{
    if (score >= 90)
        return 'A';
    else if (score >= 80)
        return 'B';
    else if (score >= 70)
        return 'C';
    else if (score >= 60)
        return 'D';
    else
        return 'F';
}

int main()
{
    // seed random generator
    srand((unsigned) time(0));

    // Die with 100 sides (for scores 1–100)
    Die scoreDie(100);

    cout << "Testing grades using Die class:\n\n";

    for (int i = 0; i < 10; i++)
    {
        int score = scoreDie.roll

