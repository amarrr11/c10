//sum of all numbers from 1 to n using while loop
#include<stdio.h>
int main()
{
int n,i=1,sum=0;
printf("Enter n= ");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("Sum of 1 to %d= %d",n,sum);
return 0;
}
