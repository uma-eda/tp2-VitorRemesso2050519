#include <iostream>

using namespace std;

int factorial(int n)
{
   if (n == 1)
      return 1;
   else 
      return n * factorial(n - 1);
 }

int factorialnovo(int m)
{
    int r = 1;
    while (m >= 1) {
        r = r * m;
        m--;
    }
return r;
}

int main() {
    for (int i = 1; i <= 10; i = i + 1)
        cout << factorial(i) << "|" << factorialnovo(i) << endl;
    return 0;
}
