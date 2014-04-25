/***********
@Brian_Zhang
ESE 124
Homework 9
 ***********/

#include<stdio.h>
#include<math.h>

//Program A
/*
int main() {
  int numres, i;
  float res, req = 0;
  printf("Please enter the number of resistors you'd like to connect in parallel\n");
  scanf("%d", &numres);

  float resArray[numres];
  for(i = 0; i < numres; i++) {
    printf("Please enter a R[%d] \n", i);
    scanf("%f", &res);
    resArray[i] = res;
    req += 1 / res;
  }
  req = 1/req;
  printf("\tR[N] ||R    \n");
  printf("\t------------\n");
  for(i = 0; i < numres; i++)
    printf("\tR[%d] ||%-.3f Ω \n",i, resArray[i]);
  printf("The equivalent resistance of your %d resistors is %.4f\n", numres, req);
  getchar();
  return 0;
}
*/

//Program B
/*
void printReq(float resArray[], int numres) {
  float Req = 0;
  for(int i = 0; i < numres; i++)
    Req += (1 / resArray[i]);
  Req = 1 / Req;

  printf("The equivalent resistance of your %d resistors is: %.2f Ω\n", numres, Req);
}

int main() {
  int numres, i;
  float res;
  printf("Please enter the number of resistors you'd like to connect in parallel\n");
  scanf("%d", &numres);
  float resArray[numres];

  for(i = 0; i < numres; i++) {
    printf("Please enter a R[%d] \n", i);
    scanf("%f", &res);
    resArray[i] = res;
  }
  
  printf("\n\tR[N] || R    \n");
  printf("\t------------\n");
  for(i = 0; i < numres; i++)
    printf("\tR[%d] || %-.3f Ω \n",i, resArray[i]);

  printReq(resArray, numres);
  printf("\n");
  getchar();
  return 0;
}
*/

//Program C
/*
void printReq(float resArray[], int numres) {
  float Req = 0;
  for(int i = 0; i < numres; i++)
    Req += (1 / resArray[i]);
  Req = 1 / Req;

  printf("The equivalent resistance of your %d resistors is: %.2f Ω\n", numres, Req);
}

int main() {
  int numres, i;
  float res;
  while(1) {
  printf("Please enter the number of resistors you'd like to connect in parallel\n");
  scanf("%d", &numres);
  float resArray[numres];

  for(i = 0; i < numres; i++) {
    printf("Please enter a R[%d] \n", i);
    scanf("%f", &res);
    resArray[i] = res;
  }
  
  printf("\n\tR[N] || R    \n");
  printf("\t------------\n");
  for(i = 0; i < numres; i++)
    printf("\tR[%d] || %-.3f Ω \n",i, resArray[i]);

  printReq(resArray, numres);
  printf("Program restarting..\n");
  printf("\n");
  }
  getchar();
  return 0;
}
*/

//Program D
float getReq(float resArray[], int numres) {
  float Req = 0;
  for(int i = 0; i < numres; i++)
    Req += (1 / resArray[i]);
  return 1/Req;
}

int main() {
  int numres, i;
  float res;
  while(1) {
  printf("Please enter the number of resistors you'd like to connect in parallel\n");
  scanf("%d", &numres);
  float resArray[numres];

  for(i = 0; i < numres; i++) {
    printf("Please enter a R[%d] \n", i);
    scanf("%f", &res);
    resArray[i] = res;
  }
  
  printf("\n\tR[N] || R    \n");
  printf("\t------------\n");
  for(i = 0; i < numres; i++)
    printf("\tR[%d] || %-.3f Ω \n",i, resArray[i]);

  printf("The equivalent resistance of your %d resistors is %.4f \n", numres, getReq(resArray, numres));
  printf("Program restarting..\n");
  printf("\n");
  }

  getchar();
  return 0;
}
