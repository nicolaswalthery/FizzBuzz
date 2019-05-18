#include <stdio.h>
#include <math.h>

int main()
{
   int number,
       times,
       fizz=0,
       buzz=0;
   char again;

   printf("Here is a classic BuzzFizz program in C code. \nI choose to not use any modulo as a little challenge. :\)\n\n");

   do
   {
      printf("For how many times do you want the program to play \"FizzBuzz\"? ");
      scanf("%d", &times);

      for (number=0;number<times;number++)
      {
         if (number == 3+fizz
           &&number == 5+buzz)
         {
            printf("FizzBuzz |");
            fizz = fizz+3;
            buzz = buzz+5;
         }
         else
         {
            if (number == 3+fizz)
            {
             printf("Fizz     |");
             fizz = fizz + 3;
            }
            else
            {

               if (number == 5+buzz)
               {
                  printf("Buzz     |");
                  buzz = buzz+5;
               }
                  else
                  printf("%d       |",number);
            }
         }
      }
      printf("\nPress \'o\' to play it again.");
      scanf(" %c", &again);
   }while(again=='o');
}
