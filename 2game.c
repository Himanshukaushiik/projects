/*
this game contains the snake water and gun combo
in which the snake defeats the water by drink it
the water defeats the gun by drown it 
and gun defeats the snake 

*/ 


#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main (){
    srand(time(0));

    int player , computer = rand() % 3;

    printf("\n CHOOSE 0 FOR SNAKE , 1 FOR WATER , 2 FOR GUN\n ");
    printf("\n please choose a number = ");
    scanf("%d",&player);

    printf("computer choose %d\n" , computer);

    if (player == 0 && computer == 0)
    {
        printf("\n ohh !! draw **");
    }else if (player == 0 && computer==1)
    {
        printf("\n YOU WON !!!!");
    }
    else if (player == 0 && computer==2)
    {
        printf("\nCOMPUTER WONS !!");
    }
    else if (player == 1&& computer==0)
    {
        printf("\nCOMPUTER WONS !!");
    }
    else if (player == 1 && computer==1)
    {
        printf("\nOHH !! DRAW **");
    }
    else if (player == 1 && computer==2)
    {
        printf("\n YOU WON!!");
    }
    else if (player == 2 && computer==0)
    {
        printf("\n YOU WON !!");
    }
    else if (player == 2 && computer==1)
    {
        printf("\nCOMPUTER WONS!!");
    }
    else if (player == 2 && computer==2)
    {
        printf("\n OHH !! DRAW");
    }else{

        printf("\n SOMETHING WENT WRONG !!!");
    }
}
    
