/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  //create variable
  float x,y;
  

 // get input
  printf("enter mark1-");
  scanf("%f",&x);

  printf("enter mark2-");
  scanf("%f",&y);
  
  //Calculate
  
  float avg;
  avg=(x+y)/2.0;

  printf("average is: %.2f\n",avg);
  return 0 ;
}

