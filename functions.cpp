/*
 * =====================================================================================
 *
 *       Filename:  functions.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  07/22/2020 03:39:17 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int checkWhoseGreater (int a, int b)
{
    int greater;
    if (a > b)
    {
        greater = a;
    }
    else
    {
        greater = b;
    }
    return greater;
}
int max_of_four (int a, int b, int c, int d)
{
    int answer ;
    answer = checkWhoseGreater( checkWhoseGreater( checkWhoseGreater(a, b), c), d);
    return answer;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
