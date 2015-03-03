#include<stdio.h>
#include<string.h>
#include<string>
#include<cstdio>
using namespace std;
int arr[100000000]={0},k=0;


int main()
{
    int i,j;
    k=-1;
    char str[10];
    for(i=1;k<100000000;i++)
    {
        sprintf(str,"%d",i);
        for(j=0;str[j]!='\0';j++)
        {
            k++;
            arr[k]=str[j]-'0';
            //k++;
        }
    }
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",arr[n-1]);
    }
    return 0;
}
