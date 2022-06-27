#include <iostream>
#include <cmath>

using namespace std;

int main()
{  
int n = 1; int m = -1;
cout << "Part a: ";
if (n < -m) { cout << n << endl; } else { cout << m << endl; }

cout << "Part b: ";
if (-n >= m) { cout << n << endl; } else { cout << m << endl; }

double x = 0; double y = 1;
cout << "Part c: ";
if (abs(x - y) < 1) { cout << x << endl; } else { cout << y << endl; }

x = sqrt(2); y = 2;
cout << "Part d: ";
if (x * x == y) { cout << x; } else { cout << y; }

   return 0;
}