/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  //get Input
  float distance;

  printf("enter the distance the van travelled:");
  scanf("%f",&distance);

  // calculate

  float amount,rem;
  if(distance<=30)
   {
    amount=distance*50;
   }
   else
   {
     rem=distance-30.0;
     amount=(rem*40)+(30*50);
   }
  //output
  printf("full amount is: %.2f",amount);

  return 0;
}
