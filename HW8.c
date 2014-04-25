/****************
Brian Zhang
ESE 124
HW 8
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

float equivCSeries() {
  float sum = 0;
  float cap = 1;
  int counter = 0;
  while(cap != 0) {
    printf("Please enter capacitance[%d], or 0 to terminate the process. \n",counter);
    scanf("%f", &cap);

    if(cap == 0)
      break;
    
    sum += 1 / cap;
    counter++;
  }

  return 1/ sum;
}

float equivCParallel() {
  float sum = 0;
  float cap = 1;
  int counter = 0;
  while(cap != 0) {
    printf("Please enter capacitance[%d], or 0 to terminate the process. \n",counter);
    scanf("%f", &cap);

    if(cap == 0)
      break;
    
    sum += cap;
    counter++;
  }

  return sum;
}

float equivLSeries() {
  float sum = 0;
  float ind = 1;
  int counter = 0;
  while(ind != 0) {
    printf("Please enter inductance[%d], or 0 to terminate the process. \n",counter);
    scanf("%f", &ind);
    
    if(ind == 0)
      break;
    
    sum += ind;
    counter++;
  }

  return sum;
}

float equivLParallel() {
  float sum = 0;
  float ind = 1;
  int counter = 0;
  while(ind != 0) {
    printf("Please enter inductance[%d], or 0 to terminate the process. \n",counter);
    scanf("%f", &ind);

    if(ind == 0)
      break;
    
    sum += 1 / ind;
    counter++;
  }

  return 1/ sum;
}

int main() {
  int runmode; //Used for both deciding between Resistance, Capacitance, and Inductance, as well as parallel or series.
  float equiv;
  printf("Enter a runmode. Resistance (1), Capacitance(2), or Inductance(3)? Enter: \n");
  scanf("%d", &runmode);

  switch(runmode) {
 
  case 1:
    printf("You have chosen to calculate Resistance. Series (1) or Parallel (Anything else)? Enter: \n");
    scanf("%d", &runmode); //This time, runmode used to denote series or parallel.
    if(runmode == 1)
      equiv = equivRSeries();
    else
      equiv = equivRParallel();
    printf("The equivalent Resistance is %f \n", equiv);
    break;

  case 2:
    printf("You have chosen to calculate Capacitance. Series (1) or Parallel (Anything else)? Enter: \n");
    scanf("%d", &runmode); //This time, runmode used to denote series or parallel.
    if(runmode == 1)
      equiv = equivCSeries();
    else
      equiv = equivCParallel();
    printf("The equivalent Capacitance is %f \n", equiv);
    break;

  case 3:
    printf("You have chosen to calculate Inductance. Series (1) or Parallel (Anything else)? Enter: \n");
    scanf("%d", &runmode); //This time, runmode used to denote series or parallel.
    if(runmode == 1)
      equiv = equivLSeries();
    else
      equiv = equivLParallel();
    printf("The equivalent Inductance is %f \n", equiv);
    break;
    
  default:
    printf("Unrecognized runmode. Please restart the program. \n");
    break;
  }


  getchar();
  return 0;
}
