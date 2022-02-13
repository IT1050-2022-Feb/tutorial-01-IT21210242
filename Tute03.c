/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h> //This includes headerfiles
int main() { //Main function
  int num, i, sum=0; //Initialize the variables

  printf( "Enter a number: " ); //Prompt
  scanf( "%d" ,&num ); //Get number

  for( i = 1; i <= num; i++ ) //Beginning of for loop
  {
    sum += i; //Add each number
  }
  printf( "Sum = %d" ,sum ); //Display sum
  
  return 0;
}

