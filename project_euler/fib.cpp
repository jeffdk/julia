#include <iostream>

long int fib (int n) {
  if( n < 2) {
    return 1;
  }   else {
    return fib(n -1 ) + fib (n-2);
  }
}

int main() {
  int i = 49;
  std::cout << "fib " << i << ": " << fib(i) << std::endl;
  return 0;
}
