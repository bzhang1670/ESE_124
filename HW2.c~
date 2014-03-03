/*********************************
 @Brian_Zhang
 ESE 124 HW 2
 27 February 2014
 
 Program 1: 
 Design a program in C which, when executed, will do the following in the 
 indicated sequence:
  1. Ask the user to enter on the keyboard a value of a positive integer 
     number n
  2. The program will then compute for one time only the value of what is called     here zNumber, defined as the sum of the series 
       zNumber(n) = 13 + 23 + 33 + 43 + … + N3
  3. The program is then to display on the console the computed value of zNumber     in the following sample format:
       The zNumber of 3 is zNumber(3) = 36

 Program 2:
 Modify your Program 1 above so that, when executed, it will do the following in the indicated sequence:
  1. Ask the user to enter on the keyboard a starting value nstart of a positive     integer number n.
  3. Ask the user to enter on the keyboard the ending value nstop of n.
  4. Ask the user to enter on the keyboard the increment nstep in n from one 
     value to the next.
  5. The program is then to display on the console a table consisting of two 
     columns, one displaying values of n starting at n1 and the other displaying     the corresponding zNumber values. Make sure that your display includes 
     suitable headers for the two columns. 

 NOTE:
  1. For programs 1 and 2, use looping with the WHILE statement to compute the z     Numbers.
  2. For program 2, for generating your output, use the values nstart=2, 
     nstop=7, nstep=2.

 *********************************/

#include <stdio.h>
#include <math.h>


int main() {
  int input, nstart, nstop;

  printf("Enter an integer to calculate the zNumber of: \n");
  scanf("%d", &input);
  printf("The zNumber of  %d + is zNumber(%d) = %d: \n ", input, input, zNumber(input));
  
  printf("\nEnter the start integer of the interval to calculate the zNumber for: \n");
  scanf("%d", &nstart);
  printf("\nNow enter the stop integer: \n");
  scanf("%d", &nstop);
  printf("\nzNumber2(%d,%d) = %d \n", nstart, nstop, zNumber2(nstart,nstop));

  getchar();
  return 0;
}
//Program 1
int zNumber(int input) {
  int answer = 0;
  int i;

  for(i = 1; i <= input; i++){
    answer += pow(i,3);
  }

  return answer;
}

//Program 2 (Modified Program 1)
int zNumber2(int nstart, int nstop) {
  int answer = 0;
  int j;

  for(j = nstart; j <= nstop; j++){
    answer += pow(j,3);
  }

  return answer;
}
