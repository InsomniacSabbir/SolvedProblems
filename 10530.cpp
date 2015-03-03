#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int low=0,high=11,N;
    char guess[10];
    while(scanf("%d",&N)==1&&N!=0)
    {
        getchar();
        gets(guess);
        if(strcmp(guess,"right on")==0)
        {
            if(N>low&&N<high){printf("Stan may be honest\n");}
            else {printf("Stan is dishonest\n");}
            low=0;
            high=11;
        }
        else
        {
            if(strcmp(guess,"too high")==0)
            {
                if(N<high){high=N;}
            }
            else if(strcmp(guess,"too low")==0)
            {
                if(N>low){low=N;}
            }
        }
    }
    return 0;
}
