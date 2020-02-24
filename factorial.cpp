#include <iostream>

using namespace std;

int factorial(int n)
{
   if (n == 1)
      return 1;
   else 
      return n * factorial(n - 1);
 }

int main() {
    for (int i = 1; i <= 10; i=i+1)
        cout << factorial(i) << endl;
    return 0;
}
