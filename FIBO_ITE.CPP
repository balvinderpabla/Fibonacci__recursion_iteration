#include <iostream.h>
void fib_iteration(int n) {
   cout << "\nFirst 100 Fibonacci series using Iteration: \n" ;
   int x = 0, y = 1, z = 0;
   for (int i = 0; i < n; i++) {
      cout << x << " ";
      z = x + y;
      x = y;
      y = z;
   }
}