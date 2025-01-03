#include<stdio.h>
int main()
{
int n,sum=0,i=1;
printf("enter the  number");
scanf("%d",&n);
while(i<=n)
{
sum += i;
i++;
}
printf("sum=%d",sum,n)
return 0;
}
