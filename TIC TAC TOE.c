#include<stdio.h>
#include<conio.h>
int checkwin();
void board();
char number[20]={'o','1','2','3','4','5','6','7','8','9'};
int main()
{
	char mark;
	int i,n,player=1;
	do
	{
		board();
		player=(player%2) ? 1:2;
		printf("player %d Enter number of player : ",player);
	    scanf("%d",&n);
	    mark=(player==1) ? 'X':'O';
	    if(n==1 && number[1]=='1')
	    number[1]=mark;
	    else if(n==2 && number[2]=='2')
	    number[2]=mark;
	    else if(n==3 && number[3]=='3')
	    number[3]=mark;
	    else if(n==4 && number[4]=='4')
	    number[4]=mark;
	    else if(n==5 && number[5]=='5')
	    number[5]=mark;
	    else if(n==6 && number[6]=='6')
	    number[6]=mark;
	    else if(n==7 && number[7]=='7')
	    number[7]=mark;
	    else if(n==8 && number[8]=='8')
	    number[8]=mark;
	    else if(n==9 && number[9]=='9')
	    number[9]=mark;
	    else
	    {
	    	printf("Invalid");
	    	player--;
	    	getch();
	    }
	    i=checkwin();
	    player++;
	    system("cls");
	}
	    while(i==-1);
	    if(i==1)
        	printf(" %d Player is Winner",--player);    
        else
            printf("Game Draw");	
}
void board()
{
	printf("\t    |     |  \n");
	printf("\t %c  |  %c  | %c \n",number[1],number[2],number[3]);
	printf("\t    |     |  \n");
	printf("\t----|-----|-----\n");
	printf("\t    |     |  \n");
	printf("\t %c  |  %c  | %c \n",number[4],number[5],number[6]);
	printf("\t    |     |   \n");
	printf("\t----|-----|-----\n");
	printf("\t    |     |  \n");
	printf("\t %c  |  %c  | %c \n",number[7],number[8],number[9]);
	printf("\t    |     |  \n");
}
int checkwin()
{
  if(number[1]==number[2] && number[2]==number[3])
  return 1;	
  else if(number[4]==number[5] && number[5]==number[6])
  return 1;
  else if(number[7]==number[8] && number[8]==number[9])
  return 1;
  else if(number[1]==number[4] && number[4]==number[7])
  return 1;
  else if(number[2]==number[5] && number[5]==number[8])
  return 1;
  else if(number[3]==number[6] && number[6]==number[9])
  return 1;
  else if(number[1]==number[5] && number[5]==number[9])
  return 1;
  else if(number[3]==number[5] && number[5]==number[7])
  return 1;
  else if( number[1]!='1' && number[2]!='2' && number[3]!='3'
  && number[4]!='4'&& number[5]!='5'&& number[6]!='6'&& number[7]!='7'
  && number[8]!='8'&& number[9]!='9')
  return 0;
  else
    return -1;
}
