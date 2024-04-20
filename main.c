// Hangman Game by JamPals// This was built by me to learn C. I might add a graphics libary to this at some point as I think it would be fun, but it might be a headache.#include <stdio.h>#include <stdlib.h>#include <time.h>// The stages of ASCII art used to draw the hangman to the screen.char * stage1 = "---\n"; 
char * stage2 = " | \n";
char * stage3 = " | \n";
char * stage4 = " ____\n";
char * stage3re = " |  |\n";
char * stage2re = " |(*_*)\n";
// The words that the game can pick from.char* words[] = {"Hello", "Tree", "House", "Computer"};
// Print Stage Functionvoid printStage(int stage) {
    if(stage == 1) {
        printf("%s", stage1);
    }
    if(stage == 2) {
        printf("%s", stage2);
        printf("%s", stage1);
    }
    if(stage == 3) {
        printf("%s", stage3);
        printf("%s", stage2);
        printf("%s", stage1);
    }
    if(stage == 4) {
        printf("%s", stage4);
        printf("%s", stage3);
        printf("%s", stage2);
        printf("%s", stage1);  
    }
    if(stage == 5) {
        printf("%s", stage4);
        printf("%s", stage3re);
        printf("%s", stage2);
        printf("%s", stage1);
    }
    if(stage == 6) {
        printf("%s", stage4);
        printf("%s", stage3re);
        printf("%s", stage2re);
        printf("%s", stage1);
    }
}
char charInput(char inputText[]) {
    char input;
    printf("%s", inputText);
    scanf("%c", &input);  
    return input;
}
int main() {
    time_t t;    
    srand((unsigned) time(&t)); // Initalises the random number generator    printf("Welcome to hangman, lets get started.\n");
    // Word Gen     char * word = words[rand() % 4]; 
    printf("%s\n", word); // TODO REMOVE    printf("%c \n", charInput("Enter your first letter: ")); // TODO REMOVE    return 0;
}
