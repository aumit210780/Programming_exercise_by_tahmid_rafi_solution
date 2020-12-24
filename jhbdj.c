#include<stdio.h>
int main()
{
    int d,r=0,rem;
    scanf("%d",&d);
    while(d!=0)
    {
        rem=d%10;
        r+=rem;
        d=d/10;
    }
    printf("%d\n",r);
}
