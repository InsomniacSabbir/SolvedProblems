#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int num1,num2,a,v,c,d,b,str1[100],str2[100],n,temp[100],num,w;
    while(scanf("%d %d",&num1,&num2)!=EOF)
    {
        num=0;
        memset(str1,0,sizeof(str1));
        memset(str2,0,sizeof(str2));
        memset(temp,0,sizeof(temp));
        n=num1;
        for(a=0;n!=0;a++)
        {
            str1[a]=n%2;
            n=n/2;
            //printf("%d ",str1[a]);
        }
       // printf("\n");
        n=num2;
        for(b=0;n!=0;b++)
        {
            str2[b]=n%2;
            n=n/2;
          //  printf("%d ",str2[b]);
        }
       // printf("\n");
        if(a>b){v=a;}
        else{v=b;}
        for(c=0;c<v;c++)
        {
            if(str1[c]==1&&str2[c]==1){temp[c]=0;}
            else{temp[c]=str1[c]+str2[c];}
           // printf("%d ",temp[c]);
        }
        //printf("\n");
        for(v=v;v>=0;v--)
        {
            w=pow(2,v);
            num=num+(temp[v])*(w);
            //printf("%d ",num);
        }
        printf("%d\n",num);
    }
}
