
#include <stdio.h>
#include <stdbool.h>

int main()
{
   /*

       int age = 17;
       int year = 2008;
       int quantity = 1;

       printf("You are %d years old\n", age);
       printf("You was born in %d\n", year);
       printf("I have only %d toy", quantity);
   */
   /*
   float grade = 7.8;
      float price = 19.99;
      float temperature = 10.53;

      printf("Your grade is %.1f\n", grade);
      printf("The price is $R%.2f\n", price);
      printf("The temperature is %.2fºC", temperature);

   */
   /*
   double pi = 3.14159265358979;

   printf("The pi is %.15lf", pi);
      */
   /*
      char grade = 'S';
      char symbol = '&';
      char name[] = "Anthoni!";

      printf("Your grade is %c\n", grade);
      printf("That's a symbol %c\n", symbol);
      printf("My name is %s\n", name);
   */
   bool isEmployed = false;

   printf("%d\n", isEmployed);

   if (isEmployed)
   {
      printf("You are employed");
   }
   else
   {
      printf("You are NOT employed");
   }

   return 0;
}
