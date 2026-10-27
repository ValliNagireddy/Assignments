#include<stdio.h>
int main()
{   
    float l,b,area,perimeter;
    printf("enter the values of length & breadth");
    scanf("%f%f",&l,&b);
    area= l*b;
    printf("%.2f\n",area);
    perimeter=2*(l+b);
    printf("%.2f\n",perimeter);
}    