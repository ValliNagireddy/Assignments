#include<stdio.h>
int main()
{  int age,credit;
float income ;
printf("enter age,credit and income values");
scanf("%d%d%f",&age,&credit,&income);
if (age<21||age>60)
 printf("Loan rejected : Age not in 21 to 60");
 else if (income<25000)
 printf("Loan rejected : income below 25000");
 else if ( credit<700)
 printf("Loan rejected : credit below 700");
 else
 printf("Loan approved");
 }
