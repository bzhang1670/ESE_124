/****************
Design a program in C whose task is to compute the values of the following two functions of angle θ specified in degrees over two user-specified contiguous θ zones:

F1 = sin(θ) + 2cos(2θ) for θ_1 <= θ <= θ_2 and
F2 = sin(2θ) - cos(θ) for θ_2 < θ <= θ_3
 ****************/

#include <stdio.h>
#include <math.h>

float toRadians(int degAng){ //Converts an angle in degrees to radians
  return degAng * (3.141592653/180.0);
}

float f1(float ang) { //Evaluates Function F1 of an angle
  return sinf(toRadians(ang)) + (2*cosf(2*toRadians(ang)));
}

float f2(float ang) { //Evaluates Function F2 of an angle
  return sinf(2*toRadians(ang)) - cosf(2*toRadians(ang));
}


int main() {
  int pie, cake, crepes, gingerbread; //θ1, θ2, θ3, ∆θ (in order)
  int theta = 0;
  printf("\nEnter your value for θ1: \n");
  scanf("%d", &pie);
  printf("Enter your value for θ2: \n");
  scanf("%d", &cake);
  printf("Enter your value for θ3: \n");
  scanf("%d,", &crepes);
  printf("Enter your value for ∆θ: \n");
  scanf("%d", &gingerbread);
  printf("Here are your entered values: θ1=%d, θ2=%d, θ3=%d, ∆θ=%d\n", pie, cake, crepes, gingerbread);
  theta=pie;

  printf("\t\t|---------------|---------------|---------------|---------------|\n");
  printf("\t\t|Angle (Degrees)|Angle (Radians)|F1             |F2             |\n");
  while(theta<=crepes){
    if(theta<=cake){
      printf("\t\t|%d             |%.2f         |%.2f             |%.2f             |\n",theta,toRadians(theta),f1(toRadians(theta)),0.0);
    } else { 
      printf("\t\t|%d             |%.2f         |%.2f             |%.2f             |\n",theta,toRadians(theta),0.0,f2(toRadians(theta)));
    }
    theta+=gingerbread;
  }
  printf("\t\t|---------------|---------------|---------------|---------------|\n");
 
  getchar();
  return 0;
}
