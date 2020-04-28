#include<stdio.h>
int main()
{
    long long n,S,set;
    scanf("%lld %lld",&n,&S);
    set=S/n;
    if(S%n==0)
    {
        printf("%lld",set);
    }
    else
    {
    printf("%lld",set+1);
    }
}