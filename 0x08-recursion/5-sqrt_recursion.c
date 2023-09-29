#include "main.h"

/**
 *_sqrt_recursion - function return nuture root
 *@n: input number
 *Return: the result of root
*/

int _sqrt_recursion(int n) {
  if (n < 0) {
    return -1;
  } else if (n == 0 || n == 1) {
    return n;
  } else {
    
    int approx = _sqrt_recursion(n / 2);

   
    if (approx * approx == n) {
      return approx;
    } else {
     
      return _sqrt_recursion((approx + n / approx) / 2);
    }
  }
}
