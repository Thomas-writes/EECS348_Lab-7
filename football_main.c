#include "football.h"
#include "stdio.h"

int main(){
    //the input variable is defined below
    int inputint;
    while (1) { //make the code never end until 0 or 1 is entered
        int errorcheck; //use this to make sure scanf gets a int value
        printf("Enter 0 or 1 to STOP\n"); // requesting input
        printf("Enter the NFL score: "); // ^^
        errorcheck = scanf("%d", &inputint); //scands for integer input and stores the return value (0 or 1) for error checking
        if (inputint < 0 || errorcheck == 0) { // if the input is negative or the errorcheck says its not a valid input print invalid input
            printf("Invalid Input\n");
            while (getchar() != '\n');//clears last input
        } else if (inputint <= 1) {// ends the main loop if the used enters 0 or 1
            break;
        }else { // prints all possible combinations of scoring
            printf("Possible combinations of scoring plays if a team's score is %d: \n", inputint);
            print_combinations(inputint);
        }
    }
    return 0;
}