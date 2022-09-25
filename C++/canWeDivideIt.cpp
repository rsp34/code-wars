#include <iostream>
using namespace std;

bool isDivideBy(int number, int a, int b)
{
  return ( number % a == 0 & number % b == 0 );
}

int main()
{
   cout << isDivideBy(10,3,2);
}