/****************
Design a program in C whose task is to compute the values of the following two functions of angle θ specified in degrees over two user-specified contiguous θ zones:

F1 = sin(θ) + 2cos(2θ) for θ_1 <= θ <= θ_2 and
F2 = sin(2θ) - cos(θ) for θ_2 < θ <= θ_3
 ****************/

//Libraries that give us functionality we need to write the program. You can probably look these up somewhere.
#include <stdio.h> 
#include <math.h>

float toRadians(int degAng){ //Converts an angle in degrees to radians
  return degAng * (3.141592653/180.0);
}

float f1(float ang) { //Evaluates Function F1 of an angle
  return (sinf( toRadians(ang) ) + (2 * cosf(2 * toRadians( ang ) ) ));
}

float f2(float ang) { //Evaluates Function F2 of an angle
  return sinf(2 * toRadians(ang)) - cosf(2 * toRadians(ang));
}


int main() {
  int jellybeans;
  int  counter = 0;
  int pie, cake, crepes, gingerbread; //declares 4 variables: θ1, θ2, θ3, ∆θ (in the order that they appear)

  int theta[4] = {0}; //Declares an empty array of length 4, where 4 is the length of the array. "{}" means that the array is empty, but we can initialize it with stuff in one line if we want to.

  for (int i = 0; i < 4; i++) { //loops5ever. Basically, I'm looping through this because I have so many parallel statements (tons of printf/scans)

    printf("\nEnter your value for theta[%d]\n",i); //Prints a statement. %d is an integer in the string, and refers to the i right after. 
    scanf("%d", &theta[i]); //theta ranges from 0 to theta.length. The for loop goes through all of them.

  }

  pie = theta[0]; cake=theta[1]; crepes=theta[2]; gingerbread=theta[3]; // because unusual names are swag

  printf("Here are your entered values: θ1=%d, θ2=%d, θ3=%d, ∆θ=%d\n", pie, cake, crepes, gingerbread); //Prints a statement, the %d's refer to variables after the string
  theta = (float) pie; // (float) is how you cast some value into a float. This is useful in some cases, like now.

  printf("\t\t|---------------|---------------|---------------|---------------|\n"); //Print statement. \t are tabs, and \n is newline
  printf("\t\t|Angle (Degrees)|Angle (Radians)|F1             |F2             |\n"); //Same as previous line

  while(theta<=crepes) { //Using a while loop to evaluate all the f1's and f2's. Checks to see if theta <= creeps, and keeps running until that is false
    if(theta<=cake) { //Checks to see if theta is less than or equal to cake. 
      printf("\t\t|%-7.2f        |%-7.2f        |%-7.2f        |%-7.2f        |\n",theta,toRadians(theta),f1(theta),0.0); //Executes if the above is true.
    } else { //Does the following if the condition in the "if" statement before was false
      printf("\t\t|%-7.2f        |%-7.2f        |%-7.2f        |%-7.2f        |\n",theta,toRadians(theta),0.0,f2(theta)); //Another print statement. Look up "formatter" 
    }
    counter+=gingerbread; //increments theta, our counter, by gingerbread (delta angle)
  } //end while loop

  printf("\t\t|---------------|---------------|---------------|---------------|\n"); //Another print statement.

  //getchar();
  return 0; //the main function is an "int" function, which means it's supposed to return an integer. We have this here just for that sake.
}
