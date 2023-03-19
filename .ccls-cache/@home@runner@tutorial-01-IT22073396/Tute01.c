/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1,mark2,average;

  printf("Enter marks for first mark");
  scanf("%f",&mark1);

  printf("Enter marks for second mark");
  scanf("%f",&mark2);

  average = (mark1+mark2)/2.0;

  printf("Average mark is %.2f\n",average);
  
  return 0;
}

