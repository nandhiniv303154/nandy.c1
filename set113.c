#include <stdio.h>
#include<conio.h>
int main()
{
int a[30],sum=0,i,n;
printf("Enter the value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("%d",sum);
getch();
return 0;
}
