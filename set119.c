#include<stdiuo.h>
int main()
{

int n,m,l,b,h;
printf("Enter the l,b,h values:\n");
scanf("%d %d %d",&l,&b,&h);
m=((2*l*b)+(2*l*h)+(2*b*h));
n=l*b*h;
printf("%d %d",m,n);
getch();
return 0;
}
