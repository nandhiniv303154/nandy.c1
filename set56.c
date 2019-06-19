#include<stdio.h>
int main()
{
int i,n,sum=0,a[5];
printf("Enter the value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum+=a[i];
}
printf("%d",sum/n);
getch();
}
