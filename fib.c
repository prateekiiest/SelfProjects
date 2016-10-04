#include<stdio.h>
#include<math.h>

int main()
{
   int n,i;
printf("Enter the number for fibonacci sequence: ");
scanf("%d",&n);  // Given Number

int a[n];

a[0] = 1;
a[1] = 1;

for(i=2;i<n;i++)
{
a[i] = (a[i-1] + a[i-2]);
}


for(i=0;i<n;i++){
printf("%d ",a[i]);

}

return 0;

}



