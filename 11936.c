#include<stdio.h>
int main()
{
    int n,l[3],i,j,a,c;
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        scanf("%d %d %d",&l[0],&l[1],&l[2]);
        for(i=0;i<2;i++)
        {
            for(j=i+1;j<3;j++)
            {
                if(l[i]>l[j])
                {
                    c=l[i];
                    l[i]=l[j];
                    l[j]=c;
                }
            }
        }
            if(l[0]+l[1]>l[2]){printf("OK\n");}
            else{printf("Wrong!!\n");}
        }
    }
