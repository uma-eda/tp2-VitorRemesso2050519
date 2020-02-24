#include <iostream>

using namespace std;

double factorial(int n)
{
   if (n == 1)
      return 1;
   else 
      return n * factorial(n - 1);
 }

double factorialnovo(int m)
{
    double r = 1;
    while (m >= 1) {
        r = r * m;
        m--;
    }
return r;
}

int main() {
    for (int i = 1; i <= 30; i = i + 1) {
        cout << factorial(i) << "|" << factorialnovo(i) << endl;
    }
    cout << "Caracteres Int:" << sizeof(int) << endl;
    cout << "Caracteres Long Long:" << sizeof(long long) << endl;
    cout << "Caracteres Double:" << sizeof(double) << endl;
    cout << "INT_MIN " << INT_MIN << " INT_MAX " << INT_MAX << endl;
    cout << "UINT_MIN " << 0 << " INT_MAX " << UINT32_MAX << endl;
    cout << "DBL_MAX " << DBL_MAX << endl;
    return 0;
}
