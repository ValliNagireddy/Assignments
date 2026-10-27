#include<stdio.h>
int main()
{  int id,password;
printf("enter the id");
scanf("%d",&id);
if (id!=101)
{ 
 printf("User not found");
}
else
{
printf("enter the password");
scanf("%d",&password);
if (password ==4321)
    printf("Login successful");
    else 
    printf("Incorrect password");
 }   
 }