#include<stdio.h>
#include<math.h>
#include<string.h>
#include<string>

using namespace std;

int main()
{
    int grid[101][101],X,Y,tempX,tempY,fX,fY,lost,i,j,n,a,z,block;
    memset(grid,0,sizeof(grid));
    scanf("%d%d",&X,&Y);
    char tempDir,fDir,ch,ins[10000];
    while(scanf("%d %d %c\n",&tempX,&tempY,&tempDir)!=EOF)
    {

        lost=0;
        block=0;
        scanf("%s",&ins);
        n=strlen(ins);
        for(i=0;i<n;i++)
        {
            if(lost==0)
            {
                if(ins[i]=='R')
                {
                    if(tempDir=='N')
                    {
                        tempDir='E';
                    }
                    else if(tempDir=='S')
                    {
                        tempDir='W';
                    }
                    else if(tempDir=='E')
                    {
                        tempDir='S';
                    }
                    else if(tempDir=='W')
                    {
                        tempDir='N';
                    }
                }
                else if(ins[i]=='L')
                {
                    if(tempDir=='N')
                    {
                        tempDir='W';
                    }
                    else if(tempDir=='S')
                    {
                        tempDir='E';
                    }
                    else if(tempDir=='E')
                    {
                        tempDir='N';
                    }
                    else if(tempDir=='W')
                    {
                        tempDir='S';
                    }
                }
                if(ins[i]=='F')
                {
                    if(tempDir=='N')
                    {
                        if(grid[tempX][tempY]==1)
                        {
                            if((tempY+1)<=Y)
                            {
                                tempY++;
                            }
                            else
                            {
                                block=1;
                            }
                        }
                        else if(grid[tempX][tempY]==0)
                        {
                            tempY++;
                            if(tempY>Y)
                            {
                                tempY--;
                                lost=1;
                                grid[tempX][tempY]=1;
                            }
                        }
                    }
                    else if(tempDir=='S')
                    {
                        if(grid[tempX][tempY]==1)
                        {
                            if((tempY-1)>=0)
                            {
                                tempY--;
                            }
                            else
                            {
                                block=1;
                            }
                        }
                        else if(grid[tempX][tempY]==0)
                        {
                            tempY--;
                            if(tempY<0)
                            {
                                tempY++;
                                lost=1;
                                grid[tempX][tempY]=1;
                            }
                        }
                    }
                    else if(tempDir=='E')
                    {
                        if(grid[tempX][tempY]==1)
                        {
                            if((tempX+1)<=X)
                            {
                                tempX++;
                            }
                            else
                            {
                                block=1;
                            }
                        }
                        else if(grid[tempX][tempY]==0)
                        {
                            tempX++;
                            if(tempX>X)
                            {
                                tempX--;
                                lost=1;
                                grid[tempX][tempY]=1;
                            }
                        }

                    }
                    else if(tempDir=='W')
                    {
                        if(grid[tempX][tempY]==1)
                        {
                            if((tempX-1)>=0)
                            {
                                tempX--;
                            }
                            else
                            {
                                block=1;
                            }
                        }
                        else if(grid[tempX][tempY]==0)
                        {
                            tempX--;
                            if(tempX<0)
                            {
                                tempX++;
                                lost=1;
                                grid[tempX][tempY]=1;
                            }
                        }
                    }
                }
            }
            //printf("%c->X=%d\tY=%d\tdir=%c\n",ins[i],tempX,tempY,tempDir);
        }
        if(lost==1)
        {
            printf("%d %d %c LOST\n",tempX,tempY,tempDir);
        }
        else if(lost==0)
        {
            printf("%d %d %c\n",tempX,tempY,tempDir);
        }
        lost=0;
        block=0;
    }
    return 0;
}
