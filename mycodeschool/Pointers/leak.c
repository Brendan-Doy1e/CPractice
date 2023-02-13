#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cash = 100;

void Play(int bet){
    char C[3] = {'J','Q','K'};
    printf("Shuffling cards...\n");
    srand(time(NULL)); // seeding random number generator
    for(int i = 0; i < 5; i++){
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = C[x];
        C[x]= C[y];
        C[y] = temp; // swaps
    }

    int playerGuess;
    printf("What is the position of the queen? 1, 2, 3?\n");
    scanf("%d", &playerGuess);
    if(C[playerGuess-1] == 'Q'){
        printf("Win!\n");
        cash += 3*bet;
        printf("Your cash is now at $%d\n", cash);
    } else {
        printf("You lost...");
        cash -= bet;
        printf("You have $%d now.\n", cash);
    }

}

int main(){

    int bet;
    while(cash>0){
        printf("Whats your bet?");
        scanf("%d", &bet);
        if(bet == 0 || bet > cash){
            break;
        }
        Play(bet);
    }



    return 0;
}