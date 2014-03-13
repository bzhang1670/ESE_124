/****************
Brian Zhang
ESE 124
HW 4 
Due: 3/13/14

Assignment: Design a program that takes userinput for runmode for a circuit (series or parallel), and then evaluates the equivalent resistance for that circuit.

 **************/


#include<stdio.h>
#include<math.h>

int main() {
  
  int i, runmode, numres, res, try;
  float Req=0;
  printf("Enter a integer for runmode (0 for series, 1 for parallel): \n");
  while(try < 1) {
    scanf("%d",&runmode);

    if(runmode == 0) { //Series

      printf("You have selected series. Enter the number of resistors you want to find the resistance for: \n");
      scanf("%d", &numres);

      for(i=0; i<numres; i++) {
	printf("Enter resistance[%d]:\n", i+1);
	scanf("%d", &res);
	if (res >= 0)
	  Req += (float) res;
	
      } //end forloop

      try++;

    } else if(runmode == 1) { //Parallel
   
      printf("You have selected parallel. Enter the number of resistors you want to find the resistance for: \n");
      scanf("%d", &numres);

      for(i=0; i<numres; i++) {
	printf("Enter resistance[%d]:\n", i+1);
	scanf("%d", &res);
	if(res >= 0)
	  Req += 1.0 / ((float) res);
	
      } //end forloop
      Req = 1/Req;
      
      try++;
      
    } else {
      
      printf("You have entered an invalid runmode (You entered: %d). Try again: \n", runmode);
      
    }
    
  } //end while loop

  printf("The total resistance of your circuit is %.5f Ohms \n", Req);

  getchar();
  return 0;
}
