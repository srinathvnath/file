#include <stdio.h>
int fact(int x)
{
    int i,y=1;
    for(i=1;i<=x;i++)
    {
        y=y*i;
    }
    return y;
}
int main()
{
    int s,f;
    scanf("%d",&s);
    f=fact(s);
    printf("Factorial of number %d is %d",s,f);
    return 0;
}

