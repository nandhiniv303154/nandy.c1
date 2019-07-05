#include <stdio.h>
#include <conio.h>
int main()
{
int n,m;
printf("Enter the value:\n");
scanf("%d %d",&n,&m);
if((n*m)%2==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
return 0;
}
