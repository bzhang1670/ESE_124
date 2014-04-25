/****************
Brian Zhang
ESE 124
HW 7
 ****************/

#include<stdio.h>
#include<math.h>

float equivRSeries() {
  float sum = 0;
  float res = 1;
  int counter = 0;
  while(res != 0) {
    printf("Please enter resistance[%d], or 0 to terminate the process. \n",counter);
    scanf("%f", &res);
    
    if(res == 0)
      break;
    
    sum += res;
    counter++;
  }

  return sum;
}

float equivRParallel() {
  float sum = 0;
  float res = 1;
  int counter = 0;
  while(res != 0) {
    printf("Please enter resistance[%d], or 0 to terminate the process. \n",counter);
    scanf("%f", &res);

    if(res == 0)
      break;
    
    sum += 1 / res;
    counter++;
  }

  return 1/ sum;
}

int main() {
  int runmode;

  printf("Please enter a runmode(1 for series or 2 for parallel): \n");
  scanf("%d", &runmode);
  
  switch(runmode) {

  case 1: //series
    printf("You have entered 1 for series circuit \n");
    printf ("The equivalent resistance is: %.2f \n", equivRSeries());
    break;

  case 2: //parallel
    printf("You have entered 2 for parallel circuit \n");
    printf("The equivalent resistance is: %.2f \n", equivRParallel());
    break;

  default:
    printf("Unrecognized runmode. Please restart the program. \n");
    break;

  }

  getchar();
  return 0;
}
