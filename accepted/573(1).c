#include<stdio.h>
int main()
{
    double H,U,D,F,distcount;
    int a,i,j,b,dcount,flag;
    while(scanf("%lf %lf %lf %lf",&H,&U,&D,&F)==4&&H!=0&&U!=0&&D!=0&&F!=0)
    {
        a=1;
        flag=1;
        dcount=0;distcount=0;
        F=(F/100.00)*U;
        while(a!=0)
        {
            dcount++;
            distcount=distcount+U;
            if(distcount>H){a=0;flag=1;}
            if((U-F)<0){}
            else
            {U=U-F;}
            distcount=distcount-D;
            if(distcount<0){a=0;flag=0;}
        }
        if(flag==0){printf("failure on day %d\n",dcount);}
        else if(flag==1){printf("success on day %d\n",dcount);}
    }
    return 0;
}
