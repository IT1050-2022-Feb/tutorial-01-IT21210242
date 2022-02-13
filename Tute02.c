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

#include <stdio.h> //This includes headerfiles

int main() { //Main function
  int distance; //Initialize the variables

  printf( "Enter distance tarvelled (in km): " ); //Prompt
  scanf( "%d" ,&distance ); //Get distance

  if ( distance <= 30 ) printf( "Amount to pay: %.2f" ,50.00*distance ); //Display cost for distance less than 30
  else printf( "Amount to pay: %.2f" ,30*50.00 + 40.00*(distance-30) ); //Display cost for distance greater than 30
  
  return 0;
}
