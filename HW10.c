/******************
 Brian Zhang 109310183
 ESE 124
 HW 10
 ******************/

#include<stdio.h>
#include<math.h>

//Program A:
/*
double equivRparallel(float *rptr, int numres); //Returns an equivalent resistance for a parallel circuit for numres resistors.


int main() {
  int numres, i;
  float req;
  float *rptr;
  while(1) {
  printf("Please enter the number of resistors you'd like to connect in parallel\n");
  scanf("%d", &numres);

  float resArray[numres];
  rptr = resArray;

  for(i = 0; i < numres; i++) {
    printf("Please enter a R[%d] \n", i);
    scanf("%f", &resArray[i]);
      }
  
  req = equivRparallel(resArray, numres);

  printf("The equivalent resistance of your %d resistor(s) is %.4f \n", numres, req);
  getchar();
  return 0;
  }
}

double equivRparallel(float *rptr, int numres) {
  float Req = 0;
  for(int i = 0; i < numres; i++) {
    printf("%f\n", *(rptr+i));
    Req += (1 / *(rptr+i));
  }
  return 1 / Req;
}
*/

//Program B:

void equivRparallel(float *rptr, int numres); //Returns an equivalent resistance for a parallel circuit for numres resistors.

void powerParallel(float *rptr, float *pptr, int numres);

void currentParallel(float *rptr, float *cptr, int numres);


int main() {
  int numres, i;
  float req, voltage;
  float *rptr, *cptr, *pptr;
  while(1) {
  printf("Please enter the number of resistors you'd like to connect in parallel\n");
  scanf("%d", &numres);

  float resArray[numres];
  rptr = resArray;

  float curArray[numres];
  cptr = curArray;

  float powArray[numres];
  pptr = powArray;
  
  printf("Now enter a voltage for the power source \n");
  scanf("%f", &voltage);

  for(i = 0; i < numres; i++) {
    printf("Please enter a R[%d] \n", i);
    scanf("%f", &resArray[i]);
    curArray[i] = (voltage / resArray[i]);
    powArray[i] = (curArray[i] * curArray[i] * resArray[i]);
      }
  
  equivRparallel(resArray, numres);
  powerParallel(resArray, powArray, numres);
  currentParallel(resArray, curArray, numres);
  getchar();
  return 0;
  }
}

void equivRparallel(float *rptr, int numres) {
  float Req = 0;
  for(int i = 0; i < numres; i++) {
    printf("%f\n", *(rptr+i));
    Req += (1 / *(rptr+i));
  }
  printf("The equivalent resistance is %.2f \n",1/Req);
}

void powerParallel(float *rptr, float *pptr, int numres) {
  for(int i = 0; i < numres; i++)
    printf("Resistance: %.4f, Power: %.4f \n",*(rptr+i),*(pptr+i));
}

void currentParallel(float *rptr, float *cptr, int numres) {
  for(int i = 0; i < numres; i++)
    printf("Resistance: %.4f, Current: %.4f \n", *(rptr+i), *(cptr+i));
}


