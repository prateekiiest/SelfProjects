#include<stdio.h>
#include<math.h>

int main()
{
  int n;  // Enter the number
  scanf("%d",&n);
  int i;
  int fact = 1;
for(i=1;i<=n;i++)
  {
   fact = (fact*i);
}
                                      
 printf("Factorial of the Number using loop %d\n",fact);
return 0;

}
