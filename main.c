#include <stdio.h>
#include <stdlib.h>
/* Snack Bar
   Author:Elias Orwa*/

int main()
{int item;
int quantity;
float paid;
printf("Welcome To Snack Bar\n");
printf("\tToday's Menu\n");
printf("1.Hamburger KES 60\n");
printf("2.Kebab KES 80\n");
printf("3.Fries KES 150\n");
printf("Enter item no.:");
scanf("%d",&item);
printf("enter item quantity: ");
scanf("%d",&quantity);
switch (item)
{
case 1:
    printf("======= Item added to cart ========= \n");
    int total = 50 * quantity;
    printf("Sub total: %d\n",total);
    printf("VAT at 16 percent: %lf \n", total * 0.16);
    printf("Total amount: %lf \n",total + total * 0.16);
    printf("Enter amount tendered for payment: ");
    scanf("%d",&paid);
    printf("change is: %f",paid - total + total * 0.16 );
    printf("THANKS WELCOME AGAIN");
    break;
case 2:
    printf("====== Item added to cart ========\n");
    int totall = 80 * quantity;
    printf("Sub total: %d \n", totall);
    printf("VAT AT 16 PERCENT: %lf \n",totall * 0.16);
    printf("total amount: %lf \n", totall + totall * 0.16);
    printf("Enter amount tendred for payment: ");
    scanf("%d",&paid);
    printf("change is: %f",paid - total1 + total1 * 0.16);
    printf("THANKS WELCOME AGAIN");
    break;
case 3:
    printf("===== Item added to cart ======\n");
    int total2 = 100 * quantity;
    printf("Sub total: %d\n",total2);
    printf("VAT at 16 percent: %lf \n",total2 * 0.16);
    printf("Total amount: %lf \n",total2 + total2 * 0.16);
    printf("enter amount tendered for payment: ");
    scanf("%d",&paid);
    printf("change is :%f",paid - total2 + total2 * 0.16 );
    printf("THANKS WELCOME AGAIN");
    break;

default:printf("INVALID CHOICE"); menu();
    break;
    }


    return item;


    int main() {
    menu();
    };
