//This is chpater 2 in the book "C programming for the absolute beginner" Third editon by Keith Davenport and Michael Vine

// 4/14/2020 11:49PM

#include <stdio.h>
#include <stdlib.h>
// Givern the formula: a = 5, b = 1, x = 10 and y = 5,
// Create a program that outputs the result of the formula f (a - b) (x - y);

int main()
{


  // Givern the formula: a = 5, b = 1, x = 10 and y = 5,
  // Create a program that outputs the result of the formula f (a - b) (x - y);

/*

printf("This was the first exercise\n")

int a = 5;
int b = 1;
int x = 10;
int y = 5;
int f = (a - b) *  (x - y);

printf("The result is of this formula is, f = %d \n", f);

*/

//Second ecercise, make a program that prints out the this formula, a, b, x, and y. However, prompt the user for the values.

/*
int secondA = 0;
int secondB = 0;
int secondX = 0;
int secondY = 0;

printf("Second excercise\n");
printf("f = (a - b)(x - y)\n");
printf("Please enter the value for a\n");
scanf("%d", &secondA);
printf("Please enter the value for b\n");
scanf("%d", &secondB);
printf("Please enter the value for x\n");
scanf("%d", &secondX);
printf("Please enter the value for y\n");
scanf("%d", &secondY);
printf("So here is the formula with the values uncovered %d, %d, %d, %d\n", secondA, secondB, secondX, secondY);
*/

//Third excercise, make a program that requests your name and greets you with it.

/*  char letter1 = '\0';
  char letter2 = '\0';
  char letter3 = '\0';
  char letter4 = '\0';
  char letter5 = '\0';

  printf("What's your name?\n");
  scanf("%c%c%c%c%c", &letter1, &letter2, &letter3, &letter4, &letter5);
  printf("Hello %c%c%c%c%c\n", letter1, letter2, letter3, letter4, letter5);

*/

//Fourth excercise, make a program that prompts the user for the numbers to determine the total revenue given the formula: Total Revenue = Price * Quantity.

/*
float price_money, quantity_set;

printf("What is the price per item?\n");
scanf("%f", &price_money);
printf("Okay the price of each item is %f\n", price_money);
printf("How many items will you give me?\n");
scanf("%f", &quantity_set);
printf("Okay so given the price you told me for each item, your total revenue is %f\n", quantity_set * price_money);
*/

//Fifth and last exercise, build a shop commision program that prompts the user for data to determine the commision for a merchent selling gear.
  float commission_order, salesPrice, cost_fee, rate_charge;

  printf("How would you rate our employees?\n");
  scanf("%f", &rate_charge);
  printf("Okay, you rated our employees with %f stars\n", rate_charge);
  printf("I would also ask, what is the sales price?\n");
  scanf("%f", &salesPrice);
  printf("Alright, I have to ask what is the cost?\n");
  scanf("%f", &cost_fee);
  printf("Yeah, I feel you. Fair enough.\n");
  printf("Okay so the commission for the merchent is %f", commission_order = rate_charge*(salesPrice - cost_fee));

//Finished 5/7/2020 7:52PM


}
