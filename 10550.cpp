#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int fir,sec,thi,base,temp,dif;
    while(scanf("%d%d%d%d",&base,&fir,&sec,&thi)==4)
    {
        if(base==0&&fir==0&&sec==0&&thi==0){break;}
        else
        {
            temp=720+360;
            dif=base-fir;
            if(dif<0){dif+=40;}
            //printf("dif=%d\n",dif);
            temp+=(dif*9);
            dif=sec-fir;
            if(dif<0){dif+=40;}
            //printf("dif=%d\n",dif);
            temp+=(dif*9);
            dif=sec-thi;
            if(dif<0){dif+=40;}
            //printf("dif=%d\n",dif);
            temp+=(dif*9);
            printf("%d\n",temp);
        }
    }
    return 0;
}
