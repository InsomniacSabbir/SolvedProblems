#include<stdio.h>
#include<math.h>

int main()
{
    int marr[100000],narr[100000],t,time,number,waste,low,i,j,k,l,temp,mlen,nlen,maxi,m,n,flag,low_number;
    while(scanf("%d%d%d",&m,&n,&t)==3)
    {
        low=999999;
        waste=0;
        flag=0;
        maxi=0;
        for(i=0;1;i++)
        {
            marr[i]=m*i;

            if(marr[i]<=t){mlen=i;}
            else{break;}
            //printf("arr=%d\tlen=%d\n",marr[i],mlen);
        }
        for(i=0;1;i++)
        {
            narr[i]=n*i;
            if(narr[i]<=t){nlen=i;}

            else{break;}
            // printf("arr=%d\tlen=%d\n",narr[i],nlen);
        }
        if(m<n)
        {
            i=mlen;
            while(i>=0)
            {
                j=0;
                while(j<=nlen)
                {
                    time=marr[i]+narr[j];

                    if(time==t)
                    {
                       // printf("%d\n",time);
                       // printf("shoman\n");
                        if((i+j)>maxi)
                        {
                            number=i+j;
                            flag=1;
                            maxi=number;
                        }
                        else{}
                    }
                    else if(time<t)
                    {
                       // printf("kom\n");
                        waste=t-time;
                        if(waste<low){low=waste;low_number=i+j;}
                    }
                    else{j=nlen+1;}
                   // printf("time=%d\tnumber=%d\tflag=%d\n",time,number,flag);
                    j++;
                }
                i--;
            }
        }
        else
        {
            i=nlen;
            while(i>=0)
            {
                j=0;
                while(j<=mlen)
                {
                    time=narr[i]+marr[j];

                    if(time==t)
                    {
                       // printf("%d\n",time);
                       // printf("shoman\n");
                        if((i+j)>maxi)
                        {
                            number=i+j;
                            flag=1;
                            maxi=number;
                        }
                        else{}
                    }
                    else if(time<t)
                    {
                       // printf("kom\n");
                        waste=t-time;
                        if(waste<low){low=waste;low_number=i+j;}
                    }
                    else{j=mlen+1;}
                   // printf("time=%d\tnumber=%d\tflag=%d\n",time,number,flag);
                    j++;
                }
                i--;
            }
        }
        if(flag==1){printf("%d\n",number);}
        else{printf("%d %d\n",low_number,low);}
    }
    return 0;
}
