#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
char s[50];
int i,flag=0;
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if((s[i]>='0') && (s[i]<='9'))
{
continue;
}
else if((s[i]>='a') && (s[i]<='z')||(s[i]>='A') && (s[i]<='Z'))
{       
continue;
}
else
{
flag++;
}
}
if(flag>=1)
{
printf("no");
}
else
{
printf("yes");
}
getch();
return 0;
}
