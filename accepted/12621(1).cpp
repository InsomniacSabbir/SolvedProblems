#include<stdio.h>
#include<math.h>
#include<string.h>

int calore[25001],N,P;
int course_item[110];
int maximum;
void make()
{
    int i,j,k;

    for(i=0;i<P;i++)
    {
        for(j=25000;j>=0;j--)
        {
            if(calore[j]==1)
            {
                if((course_item[i]+j)<=25000)
                calore[course_item[i]+j]=1;
                if(course_item[i]+j>maximum){maximum=course_item[i]+j;}
                //printf("%d\n",course_item[i]+j);
            }
        }
    }
}

int main()
{
    int tCase,nCase,i,j,k,flag,temp;
    scanf("%d",&tCase);
    for(nCase=1;nCase<=tCase;nCase++)
    {
        flag=0;
        N=0;P=0;
        temp=0;
        memset(calore,0,sizeof(calore));
        memset(course_item,0,sizeof(course_item));
        calore[0]=1;
        scanf("%d",&N);
        N=N/10;
        scanf("%d",&P);
        for(i=0;i<P;i++)
        {
            scanf("%d",&temp);
            course_item[i]=temp/10;
        }
        make();

        //printf("%d\n",calore[30126]);
        for(j=N;j<=maximum;j++)
        {
            if(calore[j]==1)
            {
                flag=1;
                temp=j;
                break;
            }
        }
        //printf("%d\n",flag);
        if(flag==1)
        {
            printf("%d\n",temp*10);
        }
        else if(flag==0)
        {
            printf("NO SOLUTION\n");
        }
    }

    return 0;
}
