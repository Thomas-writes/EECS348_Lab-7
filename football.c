#include "football.h"
#include "stdio.h"

//pretty simple code here this goes through every combination of scoring to check which combination of points works
//then prints a combination if it works hence the if statement
void print_combinations(int points) {
    for (int td2pt = 0; td2pt * 8 <= points; td2pt++) {
        for (int tdXP = 0; tdXP * 7 + td2pt * 8 <= points; tdXP++) {
            for (int td = 0; td * 6 + tdXP * 7 + td2pt * 8 <= points; td++) {
                for (int fg = 0; fg * 3 + td * 6 + tdXP * 7 + td2pt * 8 <= points; fg++) {
                    for (int safety = 0; safety * 2 + fg * 3 + td * 6 + tdXP * 7 + td2pt * 8 <= points; safety++) {
                        if (td2pt * 8 + tdXP * 7 + td * 6 + fg * 3 + safety * 2 == points) {
                            printf("%d TD + 2pt, %d TD + XP, %d TD, %d FG, %d Safety\n", td2pt, tdXP, td, fg, safety);
                        }
                    }
                }
            }
        }
    }
}

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