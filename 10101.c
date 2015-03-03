#include<stdio.h>
#include<string.h>
int main()
{
    long long int T,a,i,j,num,temp,str[20],x;
    a=1;
    while(scanf("%lld",&num)!=EOF)
    {
    x=1;
    i=1;
    temp=num;
    if(num==0)
    {
        printf("%4d. 0\n",a);
    }
    else
    {
      while(temp!=0)
    {
        if(i==2||i==6)
        {
            str[i]=temp%10;
            temp=temp/10;
        }
        else
            {
                str[i]=temp%100;
                temp=temp/100;

            }
            i++;
    }
    printf("%4d.",a);
    for(j=i-1;j>=1;j--)
    {
      //if(str[j]==0&&(j==6||j==5)&&x==1){printf("kuti ");x++;}
      //else if(str[j]==0&&(j!=5||j!=6)){}
      //else
       //{
        //    printf("%d ",str[j]);
         //   if(j==9||j==5){printf("kuti ");}
          //  else if(j==8||j==4){printf("lakh ");}
           // else if(j==7||j==3){printf("hajar ");}
            //else if(j==6||j==2){printf("shata ");}
       //}
       if(str[j]==0)
       {
           if(j==5)
           {
               printf(" kuti");
           }
           else{}
       }
       else
       {
        if((j==9||j==5)){printf(" %lld kuti",str[j]);}
        else if(j==8||j==4){printf(" %lld lakh",str[j]);}
        else if(j==7||j==3){printf(" %lld hajar",str[j]);}
        else if(j==6||j==2){printf(" %lld shata",str[j]);}
        else{printf(" %lld",str[j]);}
       }

    }
    printf("\n");
   }
    a++;
    }
    return 0;
}
