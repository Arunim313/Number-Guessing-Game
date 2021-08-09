//generating random number

#include <stdio.h>
#include <stdlib.h> //random integer library
#include <time.h>   //for different random integer
int main()
{
    int number,guess,nguesses=1;
    //number= true number
    //guess= guessed no. by user 
    //nguesses= number of guesses
    srand(time(0));  //gives different integer everytime
    number = rand()%100+1; //Generates a random number between 1 and 100
    //printf("The number is %d\n", number);
    //keep running the loop until number is guessed

    printf(" ______________________\n");
    printf("| NUMBER GUESSING GAME |\n");
    printf(" **********************\n\n");
    do{
        printf("Guess a number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please\n");
        }
        else if(guess<number){
            printf("Higher number please\n");
        }
        else{
            printf("BINGO!!\nYou guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    
    return 0;
}