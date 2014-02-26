#include<stdio.h>

int main() {
  int a,b,c;

  printf("Please input a value for a: ");
  scanf("%d",&a);
  printf("Please input a value for b: ");
  scanf("%d",&b);

  c=a%b;
  printf("%d modulus %d = %d\n",a,b,c);

  return 0;

}
