#include<stdio.h>
#include<stdlib.h>


void printboard();
int checkwin();



char board[] = {'0','1','2','3','4','5','6','7','8','9'};

void main(){
    int player =1 ,input ,status =-1;
    printboard();

    while (status == -1)
    {
        player = (player % 2 == 0) ? 2 : 1 ;
        char mark = (player == 1) ?'X' : 'O' ;
    
    
    printf("\n PLAYER %d ENTER THE NUMBER (1-9)= " , player);
    scanf("%d" , &input);

    if (input < 1 || input>9)
    {
        printf("\n❌ invalid input !! please re-enter the correct number👌\n");
        
         continue;
    }

    if (board[input] == 'X' || board[input] == 'O' )
    {
        printf("\n⚠️the box is already filled enter in another ⚠️");
        continue;
    }
    board[input] =mark;
    printboard();

    int result =checkwin();

    if (result == 1)
    {
      printf("🏆player %d is won !!🏆\n" ,player);
      return;

    }else if (result == 0)
    {
        printf("\n the match is draw !!");
        return;

    }
    player++;
    
}
}

void printboard(){

    system ("cls");
    printf("\n\n ===TIC TAC TOE ====\n\n");
    printf("      |            |      \n");
    printf("   %c  |     %c      |   %c   \n" , board[1] ,board[2] , board[3]);
 printf("______|____________|______\n");
    printf("      |            |      \n");
    printf("   %c  |     %c      |   %c   \n" , board[4] ,board[5] , board[6]);
 printf("______|____________|______\n");
    printf("      |            |      \n");
    printf("   %c  |     %c      |   %c   \n" , board[7] ,board[8] , board[9]);
 printf("      |            |        \n");

printf("\n\n");
}


int checkwin(){
    int winconditions[8][3] ={
        {1,2,3} ,{4,5,6} , {7,8,9} , 
        {1,4,7} , {2,5,8} , {3,6,9},
        {1,5,9} ,{3,5,7}

    };

for (int i = 0; i < 8; i++)
{
    if (board[winconditions[i][0]] == board[winconditions[i][1]]  && board[winconditions[i][1]] == board[winconditions[i][2]])
    {
        return 1;
    }
    
}



int count = 0;
for(int i = 0; i <= 9; i++)
{
    if (board[i] == 'X' || board[i] == 'O')
    {
        count++;
    }
    
}

if (count == 9)
{
    return 0;
}
return -1;
}

