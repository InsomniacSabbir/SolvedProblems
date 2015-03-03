#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int counter,i,j,n;
    float arr[200],sum;
    arr['W']=1.00;
    //printf("%f\n",arr['W']);
    arr['H']=1.00/2.00;
    //printf("%f\n",arr['H']);
    arr['Q']=1.00/4.00;
    //printf("%f\n",arr['Q']);
    arr['E']=1.00/8.00;
    //printf("%f\n",arr['E']);
    arr['S']=1.00/16.00;
    //printf("%f\n",arr['S']);
    arr['T']=1.00/32.00;
    //printf("%f\n",arr['T']);
    arr['X']=1.00/64.00;
    //printf("%f\n",arr['X']);
    char str[10000];
    while(gets(str)&&strcmp(str,"*")!=0)
    {
        counter=0;
        n=strlen(str);
        for(i=1;i<n;i++)
        {
            sum=0.00;
            while(str[i]!='/')
            {
                sum+=arr[str[i]];
                //printf("sum=%lf\n",sum);
                i++;
            }
            //printf("sum=%lf\n",sum);
            //printf("%c\n",str[i]);
            if(sum==1.00)
            {
                counter++;
            }
        }
        printf("%d\n",counter);
    }

    return 0;
}
