/*
Rock, Paper, Scissor game using C 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 0 -> Rock
// 1 -> Paper
// 2 -> Scissor

int main() {
    
    char *user = (char*) malloc(sizeof(char)*20);
    srand(time(NULL));
    char input;
    int rounds;
    int p_pts =0,com_pts =0;
    
    printf("Enter your name - ");
    fgets(user, 20, stdin);
    
    if( user[strlen(user) - 1] == '\n'){
        user[strlen(user) - 1] = '\0';
    }
    
    printf("\nEnter the Number of rounds \nyou wanna play - ");
    scanf("%d", &rounds);
    getchar();
    
    for(int i=0; i<rounds; i++){
    int random = rand()%3;
    printf("\nEnter your choice (R/P/S) :- \n");
    scanf("%c", &input);
    getchar();
        
    // -×-×-×-×-×-×-×-×-Result declaration-×-×-×-×-×-×-
    switch(input){
        case 'r':
        case 'R': 
        if(random == 0){
            printf("%s : Rock\n", user);
            printf("Computer : Rock\n");
            printf("Draw...\n\n");
        }else if(random == 1){
            printf("%s : Rock\n", user);
            printf("Computer : Paper\n");
            printf("Computer Wins...\n\n"); 
            com_pts++;
        }else if (random == 2){
            printf("%s : Rock\n", user);
            printf("Computer : Scissor\n");
            printf("Player Wins...\n\n");
            p_pts++;
        }
        break;
        
        case 'p':
        case 'P': 
        if(random ==0){
            printf("%s : Paper\n", user);
            printf("Computer : Rock\n");
            printf("Player Wins...\n\n");
            p_pts++;
        }else if(random ==1){
            printf("%s : Paper\n", user);
            printf("Computer : Paper\n");
            printf("Draw...\n\n"); 
        }else if (random ==2){
            printf("%s : Paper\n", user);
            printf("Computer : Scissor\n");
            printf("Computer Wins...\n\n");
            com_pts++;
        }
        break;
        
        case 's':
        case 'S': 
        if(random ==0){
            printf("%s : Scissor\n", user);
            printf("Computer : Rock\n");
            printf("Computer Wins...\n\n");
            com_pts++;
        }else if(random ==1){
            printf("%s : Scissor\n", user);
            printf("Computer : Paper\n");
            printf("Player Wins...\n\n"); 
            p_pts++;
        }else if (random ==2){
            printf("%s : Scissor\n", user);
            printf("Computer : Scissor\n");
            printf("Draw...\n\n");
        }
        break;
        
        default : printf("Invalid Input- Both players will get 0 point.\n\n");
    }
        
    } // Loop ends...
    
    printf("\nFinal Scorecard-\n");
    printf("%s - %d\n", user, p_pts);
    printf("Computer - %d\n", com_pts);
    return 0;
}