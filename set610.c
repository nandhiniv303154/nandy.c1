#include <stdio.h>
#include <conio.h>
int main()
{
int i,n,sum=0;
printf("Ener the value:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);
getch();
return 0;
}
