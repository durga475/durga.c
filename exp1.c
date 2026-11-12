#include<stdio.h>
int main()
{
ibt a,b,choice,res;
printf("=====OPERATORS AND EXPRESSIONS=====\n");
printf("Enter the second number:");
scanf("%d",&b);
printf("\n-----MENU-----\n");
printf("1.Addition\n");
printf("2.Subtaction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5.Modulus\n");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
  res=a+b;
  printf("Result=%d",res);
  break;
case 2:
  res=a-b;
  printf("Result=%d",res);
  brak;
case 3:
  res=a*b;
  printf("Result=%d",res);
  break;
case 4:
  if(b!=0)
  {
   res=a/b;
   printf("Result=%d",res);
  }
  else
  {
  printf("Division by zero is not possible.");
  }
case 5:
  if(b!=0)
  {
   res=a%b;
   printf("Result=%d",res);
  }
  else
  {
  printf("Modulus by zero is not possible.");
  }
  break;
default:
  printf("Invalid choice.");
}
 return 0;
}
