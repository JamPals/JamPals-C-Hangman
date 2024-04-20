// Hangman Game by JamPals
// This was built by me to learn C. I might add a graphics libary to this at some point as I think it would be fun, but it might be a headache.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// The stages of ASCII art used to draw the hangman to the screen.
char * stage1 = "---\n"; 
char * stage2 = " | \n";
char * stage3 = " | \n";
char * stage4 = " ____\n";
char * stage3re = " |  |\n";
char * stage2re = " |(*_*)\n";

// The words that the game can pick from.
char* words[] = {"Hello", "Tree", "House", "Computer"};

// Print Stage Function
void printStage(int stage) {
    if(stage == 1) {
        printf("\n%s\n", stage1);
    }
    if(stage == 2) {
        printf("\n%s", stage2);
        printf("%s\n", stage1);
    }
    if(stage == 3) {
        printf("\n%s", stage3);
        printf("%s", stage2);
        printf("%s\n", stage1);
    }
    if(stage == 4) {
        printf("\n%s", stage4);
        printf("%s", stage3);
        printf("%s", stage2);
        printf("%s\n", stage1);  
    }
    if(stage == 5) {
        printf("\n%s", stage4);
        printf("%s", stage3re);
        printf("%s", stage2);
        printf("%s\n", stage1);
    }
    if(stage == 6) {
        printf("\n%s", stage4);
        printf("%s", stage3re);
        printf("%s", stage2re);
        printf("%s\n", stage1);
    }
}

int main() {
    time_t t;    
    srand((unsigned) time(&t)); // Initalises the random number generator    
    printf("Welcome to hangman, lets get started.\n");

    // Word Gen     
    char * word = words[rand() % 4]; 
    
    int stage = 0;

    while (stage < 6) {

        // TOFIX for some reason scanf detects some random character, causing the stage to go up.
        char input;
        printf("%s", "Enter a letter: \n");
        scanf("%c", &input);  

        if(strchr(word, input) != NULL)
        {
            printf("That letter was in the word!\n"); // TODO add to a table of found letters and display word preview

        } else {
            stage = stage + 1;
            printf("That letter was not in the word.\n");
        }

        printStage(stage);
    }

    printf("Uh oh, you lost!");
    return 0;
}
