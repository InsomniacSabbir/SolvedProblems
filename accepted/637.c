#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char ch=0;
    int a,b,c,d,e,f,g,h,n,row,sum,x,sheet;
    while(scanf("%d",&n)==1&&n!=0)
    {
        if(n==1){printf("Printing order for 1 pages:\nSheet 1, front: Blank, 1\n");}
        else
        {
        x=0;
        sheet=1;
        a=n/2;
        if(a*2<n){a++;}
        if(a%2==0){}
        else{a++;}
        row=(a-1);
        char arr[a][2];
        memset(arr , 110 , sizeof(arr));
        x=1;
        for(b=0;b<=row;b++)
        {
            if(b%2==0){arr[b][1]=x;}
            else{arr[b][0]=x;}
            x++;
        }
        for(d=row;d>=0;d--)
        {
             if(d%2==0)
                {
                    if(x>n){break;}
                    arr[d][0]=x;
                }
            else
                {
                    if(x>n){break;}
                    else{arr[d][1]=x;}
                }
            x++;

        }
        sheet=1;
        printf("Printing order for %d pages:\n",n);
        for(b=0;b<=row;b++)
        {
            if(b%2==0)
             {
                 printf("Sheet %d, front: ",sheet);sum=1;
             }
             else{printf("Sheet %d, back : ",sheet);sum=0;}
             if(sum==0){sheet++;}
            for(c=0;c<2;c++)
            {
             if(c==0)
             {
                 if(arr[b][c]==110)
                 {
                     printf("Blank, ");
                 }
                 else
                 {
                     printf("%d, ",arr[b][c]);
                 }
             }
             else
             {
                 if(arr[b][c]==110)
                 {
                     printf("Blank\n");
                 }
                 else
                 {
                     printf("%d\n",arr[b][c]);
                 }
             }
            }
        }

        }

    }
    return 0;
}

