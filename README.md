# Introduction-to-C-programming
The first programming course I took in university. The objective of the course is to teach you the basics of programming in the C language.

## ex_1_1
The purpose of this exercise is to introduce you to authoring programs in the C language. The following is a program in C. Your task is to rewrite the program.

```
#include <stdio.h>
/* This is a fine program */

int main(void){
  int number;
  printf("Enter a number:");
  scanf("%d", &number);
  printf("The number was: %d\n",number);
  return 0;
} 
```

## ex_2_1
Write a functioning program in C that, upon execution, prints the following on the screen: "Hello everybody!", followed by a newline character \n after the exclamation point. After printing, the program closes itself.

## ex_2_2
Write a program that prompts the user for an integer, calculates the square and prints the result on the screen (also print out a newline character \n after the result). After printing, the program closes itself.

## ex_3_1
Write a program that first asks the user for an integer and after that, a floating-point number. Finally, the program prints both numbers on the screen. The floating-point number shall be printed with two decimal places of precision.

## ex_3_2
Write a program that prompts the user for an amount in Finnish markka and converts it to euro. Finally, the program prints the amount on the screen in euro with two decimal places of precision. The euro conversion factor is 5.94573.

## ex_4_1
Write a program that prompts the user for two integers and prints the sum, difference and product of the numbers on the screen.

## ex_4_2
Write a program that prompts the user for an integer and checks whether it is even or odd. If the number is even, print the value 0, and if it is odd, print the value 1.

## ex_5_1
Write a program that prompts the user for an integer and checks whether it is even or odd. If the number is even, print "Number 2 is even.", if it is odd, print "Number 1 is odd.".

## ex_5_3
Write a simple calculator program that calculates the difference, sum or product of two numbers. First, the program asks which calculation to perform. After this, the program prompts for the numbers, performs the calculation and prints the result. The selection within the program has to be done using a switch() statement.

## ex_6_1
Write a program that prompts the user for an integer n (n>0) and prints the numbers 1,2,3...n on the screen one below the other. Write the program using the FOR statement.

## ex_6_2
Write a program that prompts the user for an integer n (n>0) and prints the factorial of the number on the screen. For example, the factorial of n is designated n!, which means the number calculated as follows: 1*2*3...*n