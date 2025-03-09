
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
int main(){
     srand(time(0));
    int random_number= (rand()%100)+1;
    // printf("%d",random_number);
    int no_of_gusses=0;
    int guessed;
    do{
        printf("\nguess the number= ");
        scanf("%d",&guessed);
        if(guessed>random_number){
            printf("\nplease enter the lower one !! ");
        }else if(guessed<random_number){
            printf("\nplease enter the higher one !! ");
        }
        no_of_gusses++;
    }
    while(guessed != random_number);
        printf("\nyou guess the number in %d attempts",no_of_gusses);
    
    
    return 0;
    
}

