#include<stdio.h>
void main ()
{
    float amount;
    float discount;
    float total_bill;

    printf("Enter total amount \n");
    scanf("%f",&amount);

    printf("Enter total discount \n");
    scanf("%f",&discount);
    discount=amount*discount/(100);
   total_bill =amount-discount;
          
    printf("total discount : %f\n",discount);
    printf("After discount total bill : %f",total_bill);
    

}