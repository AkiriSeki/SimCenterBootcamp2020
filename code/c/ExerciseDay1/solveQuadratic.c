// program to solve quadratic equation
//        ax^2 + bx + c = 0
//
// soln: x = -b/2a +/- sqrt(b^2-4ac)/2a
//
// write a program to take 3 inputs and output the soln
// deal with possible errors in input, i.e. b^2-4ac negative

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

  if (argc != 4) {
    printf("Usage: appName a b c\n");
    exit(-1);
  }

  float a = atof(argv[1]);
  float b = atof(argv[2]);
  float c = atof(argv[3]);

  float x1, x2;
  x1=x2=0;
  if(a != 0 && b!=0){
    if(b*b>(4*a*c)){
      x1 = -b+sqrt(b*b-4*a*c)/(2*a);
      x2 = -b-sqrt(b*b-4*a*c)/(2*a);
      printf("The answer is %e and %e", x1, x2);
    }
    else{
      printf("No real solution");
    }
  }
  else if(a == 0 && b != 0){
    x1 = -b/c;
    printf("Linear Eq. X %e \n", x1);
  }
  else{
    printf("No quadratic solution");
  }

  printf("Have a Nice Day!\n");
  return 0;
}

