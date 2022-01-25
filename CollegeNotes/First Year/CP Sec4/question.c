#include <stdio.h>
int main() {
  int k;
  int num = 30;
  k = num > 5 ? (num <= 10 ? 100:200):500;
  printf ( "k = %d\n", k );
return 0;
}
