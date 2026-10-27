#include<stdio.h>
int main()
{  float finalamount,amount,discount=0,delivery=0;
 int type;
  printf("enter the amount");
  scanf("%f",&amount);
  printf("enter membership type(1.Premium,0.Regular)");
  scanf("%f",&type);
if (amount >=500)
  {
      if (type==1)
     {
       discount= amount *10/100;
     }
  }    
else
    { delivery = 50;}
    finalamount= amount-discount+ delivery;
    printf("%.2f",finalamount);
 }   
     