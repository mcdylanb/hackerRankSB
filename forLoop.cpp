/*
 * =====================================================================================
 *
 *       Filename:  forLoop.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  07/21/2020 09:10:51 PM
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

bool ifNumberLess (int n)
{
  bool answer;
  if (n >= 1 && n <= 9)
  {
    answer = true;
  }
  else
  {
    answer = false;
  }
  return answer;
}

string convertNumber (int n)
{
  string answer;

  if (n == 1)
  {
    answer = "one";
  }
  else if (n == 2)
  {
    answer = "two";
  }
  else if (n == 3)
  {
    answer = "three";
  }
  else if (n == 4)
  {
    answer = "four";
  }
  else if (n == 5)
  {
    answer = "five";
  }
  else if (n == 6)
  {
    answer = "six";
  }
  else if (n == 7)
  {
    answer = "seven";
  }
  else if (n == 8)
  {
    answer = "eight";
  }
  else if (n == 9)
  {
    answer = "nine";
  }
  return answer;
}
string ifEvenOrOdd (int n)
{
  string answer;
  if(n%2 == 0)
  {
    answer = "even";
  }
  else
  {
    answer = "odd";
  }
  return answer;
}

int main()
{
  // Complete the code.
  int a, b;

  cin >> a >> b ;

  for (int n = a; n < b + 1; n++){
    if (ifNumberLess(n)){
      cout << convertNumber(n) << endl;
    }else {
      cout << ifEvenOrOdd(n) << endl;
    }
  }


  return 0;
}

