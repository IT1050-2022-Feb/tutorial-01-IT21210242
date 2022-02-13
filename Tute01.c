/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h> //This includes headerfiles

int main() { //Main function
  int mark1, mark2; //Initialize the variables
  float total; //Initialize the variables

  printf( "Enter marks 1: " ); //Prompt
  scanf( "%d", &mark1 ); //Get mark 1
  printf( "Enter marks 2: " ); //Prompt
  scanf( "%d", &mark2 ); //Get mark2

  total = mark1 + mark2; //Calculate total

  printf( "Average = %.2f" ,total/2 ); //Display average

  return 0;
}

