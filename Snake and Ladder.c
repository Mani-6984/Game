#include <stdio.h>
#include<stdlib.h>
int start(int n);
int beforeStart(int players,int dice value);

int main()
{
    int players,index=1,temp=0;
    char t;
    printf("\nEnter number of players");
    scanf("%d",&players);
    int arr[players];
    for(int i=1;i<=players;i++)
        arr[i]=0;
    printf("\nStart playing");
   
    int size=i;
    players=1;
    while(1)
    {
        if(beforeStart(players,rand()%7))
        {
            arr[players]=
        }
        players++;
    }
}

int start(int n)
{
    if(n==6)
        return 1;
    else
        return 0;
}

int beforeStart(int players,int diceValue)
{
   
        scanf("%c",&t);
        if(t=='\n')
        {
        printf("\n%dth players Turn",index);
        printf("\nPress enter to roll the dice");
        scanf("%c",&t);
        temp=rand();
        temp=temp%7;
       
        if(temp==0)
        {
            temp=2;
        }
        printf("\ndice value = %d",temp);    
        if(start(temp)==1)
        {
            printf("\n you can start\n");
            return 1;
        }
        }
   
}
