#include<stdio.h>
#include<math.h>

int factorial (int num) {
  if (num == 0 || num == 1)
    return 1;
  else
    return num * factorial(num - 1);
}


int main() {
  printf("%d\n",factorial(5));
  getchar();
  return 0;
}
