#include<stdio.h>
#include<math.h>

int main() {
  
  int i, runmode, numres, res, try;
  float sum =0;
  printf("Enter a integer for runmode (0 for series, 1 for parallel): \n");
  while(try < 1) {
    scanf("%d",&runmode);

    if(runmode == 0) { //Series

      printf("You have selected series. Enter the number of resistances you want to find the sum for: \n");
      scanf("%d", &numres);

      for(i=0; i<numres; i++) {
	printf("Enter resistance[%d]:\n", i+1);
	scanf("%d", &res);
	sum += (float) res;
	
      } //end forloop

      try++;

    } else if(runmode == 1) { //Parallel
   
      printf("You have select parallel. Enter the number of resistances you want to find the sum for: \n");
      scanf("%d", &numres);

      for(i=0; i<numres; i++) {
	printf("Enter resistance[%d]:\n", i+1);
	scanf("%d", &res);
	sum += 1.0 / ((float) res);
	
      } //end forloop
      sum = 1/sum;
      
      try++;
      
    } else {
      
      printf("You have entered an invalid runmode (You entered: %d). Try again: \n", runmode);
      
    }
    
  } //end while loop

  printf("The total resistances of your circuit is %.5f Ohms \n", sum);

  getchar();
  return 0;
}
