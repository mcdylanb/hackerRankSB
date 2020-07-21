/*
 * =====================================================================================
 *
 *       Filename:  dataTypes.cpp
 *
 *    Description: Basic Data Types sandbox
 *
 *        Version:  1.0
 *        Created:  07/19/2020 10:08:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dylan Balagtas,
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int number;
    long longNumber;
    char varChar;
    float varFloat;
    double varDouble;

    scanf("%d %ld %c %f %lf", &number, &longNumber, &varChar, &varFloat, &varDouble);
    printf("%d \n%ld \n%c \n%0.3f \n%0.9lf\n", number, longNumber, varChar, varFloat, varDouble);
    return 0;
}

