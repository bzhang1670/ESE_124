/******************
Brian Zhang
ESE 124
HW 5

Design a C program which, when executed, will do the following in the indicated sequence:
1. Ask the user to type on the keyboard a value of the radius of the sphere a.
2. Ask the user to type on the keyboard a value for the runmode operator wihich will determine which computation will be performed. The following values of the runmode operator and the corresponding computations are to be used:
i) runmode 1: compute the volume of the sphere, vsphere = (4πa^3)/3, and output to the console
ii) runmode 2: compute the surface area of the sphere, asphere = 4πa^2, and output to the console
iii) runmode = 3: compute the volume of the cube, vcube = 8a^3, and output to the console
iv) runmode = 4: compute the surface area of the cube, acube = 24a^2, and output to the console

3. Keep running the above sequence until the user inputs a value of 0 for a, after which the whole process is terminated
 ******************/

#include <stdio.h>
#include <math.h>
double pi = 3.141592653;

double runReturn(int runmode, int a) { //Returns some calculation according to runmode
  if (runmode > 0 && runmode < 5){ //Only runs if the runmode is correct
  switch(runmode){
  case(1):
    printf("The volume of the sphere (vsphere) is: ");
    return (pow(a, 3) * pi) * (4 / 3);
  case(2):
    printf("The surface area of the sphere (asphere) is: ");
    return (pow(a, 2) * pi) * 4;
  case(3):
    printf("The volume of the cube (vcube) is: ");
    return (pow(a, 3) * 8);
  case(4):
    printf("The surface area of the cube (acube) is: ");
    return (pow(a, 2) * 24);
  default:
    printf("Enter in one of the correct runmode choices: ");
    return runReturn(runmode, a);
  } } else {
    printf("You have entered an incorrect runmode. Error: ");
    return -1;
  }

}

int main() {

  float a;
  int runmode; //declare variables

  while (1) {
    printf("\nEnter a spherical radius, or \'0\' to exit the program:");
    scanf("%f", &a);
    if (a == 0)
      break;
    printf("\nNow enter a runmode(1 for vsphere, 2 for asphere, 3 vcube, 4 acube):");
    scanf("%d", &runmode);
    if (a != 0) //Only prints out a result if a valid value of a is given.
      printf("\n%lf", runReturn(runmode, a));
  }
  
  printf("Exiting Program. \n");
  getchar();
  return 0;

}
