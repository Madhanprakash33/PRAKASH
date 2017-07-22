#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,p;
scanf("%s",&a);
p=strlen(a);
for(i=p;i>='\0';i--)
    {
    printf("%c",a[i]);

    }
return 0;
}
