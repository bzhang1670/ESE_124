#include<stdio.h>
#include<math.h>
/**********
Brian Zhang
ESE 124
HW 6
 *********/
//constants:
float pi = 3.141592;

/************
Program 1:
 
************/
/*
void volSphere(float a) {
  printf("\nvolSphere = %.2f", (4 / 3) * pi * pow(a, 3));
}

void areaSphere(float a) {
  printf("\nareaSphere = %.2f", 4 * pi * pow(a,2));
}

void volCube(float a) {
  printf("\nvolCube = %.2f",8 * pow(a,3));
}

void areaCube(float a) {
  printf("\nareaCube = %.2f",24 * pow(a,2));
}

int main() {
  int runmode;
  float a;
  while(1) {

    printf("\nEnter a runmode: ");
    scanf("%d", &runmode);

    printf("\nEnter a radius: \n");
    scanf("%f", &a);

    if(a == 0) {
      break;
    }
    switch(runmode) {
    case 1:
      volSphere(a);
      break;
    case 2:
      areaSphere(a);
      break;
    case 3:
      volCube(a);
      break;
    case 4:
      areaCube(a);
      break;
    default:
      printf("\nYou have entered an incorrect runmode.");
      break;
    } //end switch
  } //end while
  printf("\nThe process has been terminated\n");
  getchar();
  return 0;
}
*/
/*********
Program 2:


*********/

/*
float volSphere(float a) {
 return (4 / 3) * pi * pow(a, 3);
}

float areaSphere(float a) {
  return  4 * pi * pow(a,2);
}

float volCube(float a) {
  return 8 * pow(a,3);
}

float areaCube(float a) {
  return 24 * pow(a,2);
}

int main() {
  int runmode;
  float a;
  while(1) {

    printf("\nEnter a runmode: ");
    scanf("%d", &runmode);

    printf("\nEnter a radius: \n");
    scanf("%f", &a);

    if(a == 0) {
      break;
    }
    switch(runmode) {
    case 1:
      printf("\n volSphere = %.2f", volSphere(a));
      break;
    case 2:
      printf("\n areaSphere = %.2f", areaSphere(a));
      break;
    case 3:
      printf("\n volCube = %.2f", volCube(a));
      break;
    case 4:
      printf("\n areaCube = %.2f",areaCube(a));
      break;
    default:
      printf("\nYou have entered an incorrect runmode.");
      break;
    } //end switch
  } //end while
  printf("\nThe process has been terminated\n");
  getchar();
  return 0;
}
*/

/***********
Program 3:

***********/

//All implementation done after main.
/*
float volSphere(float a);
float areaSphere(float a);
float volCube(float a);
float areaCube(float a);

int main() {
  int runmode;
  float a;
  while(1) {

    printf("\nEnter a runmode: ");
    scanf("%d", &runmode);

    printf("\nEnter a radius: \n");
    scanf("%f", &a);

    if(a == 0) {
      break;
    }
    switch(runmode) {
    case 1:
      printf("\n volSphere = %.2f", volSphere(a));
      break;
    case 2:
      printf("\n areaSphere = %.2f", areaSphere(a));
      break;
    case 3:
      printf("\n volCube = %.2f", volCube(a));
      break;
    case 4:
      printf("\n areaCube = %.2f",areaCube(a));
      break;
    default:
      printf("\nYou have entered an incorrect runmode.");
      break;
    } //end switch
  } //end while
  printf("\nThe process has been terminated\n");
  getchar();
  return 0;
}

float volSphere(float a) {
 return (4 / 3) * pi * pow(a, 3);
}

float areaSphere(float a) {
  return  4 * pi * pow(a,2);
}

float volCube(float a) {
  return 8 * pow(a,3);
}

float areaCube(float a) {
  return 24 * pow(a,2);
}
*/
/**********
Program 4:

**********/

//Some implementation done after main.
float volSphere(float a){
  return (4 / 3) * pi * pow(a, 3);
}
float volCube(float a){
  return 8 * pow(a,3);
}
float areaSphere(float a);
float areaCube(float a);

int main() {
  int runmode;
  float a;
  while(1) {

    printf("\nEnter a runmode: ");
    scanf("%d", &runmode);

    printf("\nEnter a radius: \n");
    scanf("%f", &a);

    if(a == 0) {
      break;
    }
    switch(runmode) {
    case 1:
      printf("\n volSphere = %.2f", volSphere(a));
      break;
    case 2:
      printf("\n areaSphere = %.2f", areaSphere(a));
      break;
    case 3:
      printf("\n volCube = %.2f", volCube(a));
      break;
    case 4:
      printf("\n areaCube = %.2f",areaCube(a));
      break;
    default:
      printf("\nYou have entered an incorrect runmode.");
      break;
    } //end switch
  } //end while
  printf("\nThe process has been terminated\n");
  getchar();
  return 0;
}

float areaCube(float a) {
  return 24 * pow(a,2);
}

float areaSphere(float a) {
  return  4 * pi * pow(a,2);
}

