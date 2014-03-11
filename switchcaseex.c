#include <stdio.h>
#include <math.h>

int main() {
  int userinput;//Always declare your variables!
  printf("Enter an int value or some shit here: \n");
  scanf("%d", &userinput); //Standard scan/print statements

  int positiveinput= abs(userinput); //abs(int number) is the absolute value function in the math library

  switch(positiveinput) {//switch(variable): Basically, the variable you want to check
                     //switch statement is basically glorified "if" statements
  case(1):                             //Checks to see if userinput is equal to 1
    printf("That shit's abs. value is 1\n");
    break;                             /*You should have this after every case statement. Breaks out of loop
                                       If not, then your code will run until it reaches a break or the
                                       end of the entire switch statement*/
  case(2):
    printf("That shit's abs. value is 2\n");
    break;
    
  case(3):
    printf("That shit's abs. value is 3\n");
    break;
    
    //Enter as many cases as you want between here and default.
    
  default:                             //Does this if our variable doesn't do anything else 
    printf("I can't count that high\n");
    break;
  }
  return 0; //Our main function is an int function. Hence, it needs to return an integer
            //Any function with a type besides void must return something
            //Additionally, undeclared functions are always assumed to be int functions
}
