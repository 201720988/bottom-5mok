#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mainfun.h"

int sam[7][8]={{0}};

int main(void)
{
    int num;
    int pl;
    int end;
    int row;
    int i,j,k=1;
    char pic;
    srand((unsigned int)time(NULL));
    system("clear")
    printf("enter h or p");
    scanf("%c",&pic);
    if(pic=='h')
    {
        load_data();
    }
    else if(pic=='p')
    {
        printf("let's play game \n");
    }

    for(i=0;i<7;i++)
    {
        for(j=0;j<8;j++)
        {
            sam[i][j]=0;
        }
    }
    while(1)
    {
        pl=1;
        printf("p1's turn \n");
        printf("## %d turn ## \n",k);
        k++;
        printf("enter the number!(-1~7)\n");
        printf("if you want see map, enter 0 \n");
        printf("if you want quit game enter -1 \n");
        scanf("%d", &num);
        printf("\n");
        if(num==-1)
        {
            printf("Good bye \n");
            break;
        }
        row=main_func(pl,num);
        edn=find_win(row,num-1,pl);
        if(num==1)
        {
            printf("p1's win \n");
            for(i=0;i<7;i++)
            {
                for(j=0;j<7;j++)
                {
                    printf("%3d",sam[i][j]);
                }
                prinf("\n")
            }
            break;
        }
        end=draw_game();
        if(end==2)
        {
            printf("It's draw\n");
            for(i=0;i<7;i++)
            {
                for(j=0;j<7;j++)
                {
                    printf("%3d", sam[i][j]);
                }
                printf("\n");
            }
            break;
        }
        p1=2;
        num=(rand() %7)+1;
        printf("## %d turn ## \n",k);
        k++;
        printf("computer enter %d \n", num);
        row=main_func(pl,num);
        end=find_win(row,num-1,pl);
        if(end==1) 
        {
            printf("p1's win \n");
            for(i=0;i<7;i++)
            {
                for(j=0;j<7;j++)
                {
                    printf("%3d",sam[i][j]);
                }
                prinf("\n")
                }
                break;
        }
        if(end==2)
        {
            printf("It's draw\n");
            for(i=0;i<7;i++)
            {
                for(j=0;j<7;j++)
                {
                    printf("%3d", sam[i][j]);
                }
                printf("\n");
            }
            break;
        }
    }
}
