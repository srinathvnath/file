#include <stdio.h>

int i;
int main()
{
    int s;
    scanf("%d",&s);
    for(i=1;i<=s;i++)
    {
        f=f*i;
    }
    printf("Factorial of number %d is %d",s,f);
    return 0;
}

