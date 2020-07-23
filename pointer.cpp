/*
 * =====================================================================================
 *
 *       Filename:  pointer.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  07/23/2020 09:14:53 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <iostream>

using namespace std;
void update(int *a,int *b)
{
    // Complete this function
    int diff;
    int sum;
    if (*b > *a)
    {
        sum = *a + *b;
        diff = *b - *a;
    }else {
        sum = *a + *b;
        diff = *a - *b;
    }
    *a = sum;
    *b = diff;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

