#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int tCase,nCase,i,j,k,n;
    char arr[1000],decoded[1000],ch=0;
    for(i=0;i<=200;i++)
    {
        if(ch=='0'||ch=='O')
        {
            decoded[ch]='O';
            //decoded['O']=ch;
        }
        else if(ch=='1'||ch=='I')
        {
            decoded[ch]='I';
            //decoded['I']=ch;
        }
        else if(ch=='2'||ch=='Z')
        {
            decoded[ch]='Z';
            //decoded['Z']=ch;
        }
        else if(ch=='3'||ch=='E')
        {
            decoded[ch]='E';
            //decoded['E']=ch;
        }
        else if(ch=='4'||ch=='A')
        {
            decoded[ch]='A';
            //decoded['A']=ch;
        }
        else if(ch=='5'||ch=='S')
        {
            decoded[ch]='S';
            //decoded['S']=ch;
        }
        else if(ch=='6'||ch=='G')
        {
            decoded[ch]='G';
            //decoded['G']=ch;
        }
        else if(ch=='7'||ch=='T')
        {
            decoded[ch]='T';
            //decoded['T']=ch;
        }
        else if(ch=='8'||ch=='B')
        {
            decoded[ch]='B';
            //decoded['B']=ch;
        }
        else if(ch=='9'||ch=='P')
        {
            decoded[ch]='P';
            //decoded['P']=ch;
        }
        else
        {
            decoded[ch]=ch;
        }
        ch++;
    }

    scanf("%d",&tCase);
    getchar();
    for(nCase=1;nCase<=tCase;nCase++)
    {
        while(gets(arr)&&!strcmp(arr,"\0")==0)
        {
            n=strlen(arr);
            for(i=0;i<n;i++)
            {
                printf("%c",decoded[arr[i]]);
            }
            printf("\n");
        }
        if(nCase<tCase)
        {
            printf("\n");
        }
    }

    return 0;
}
