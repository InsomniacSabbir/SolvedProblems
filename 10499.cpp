#include<stdio.h>
int main()
{
    long long int n;
    char ch='%';
    while(scanf("%lld",&n)==1&&n>0)
    {
        if(n==1)
        {
            printf("0");
        }
        else
            printf("%lld",(25*n));
        printf("%c\n",ch);
    }
    return 0;
}
