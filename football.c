#include "football.h"
#include "stdio.h"

void print_combinations(int points) {
    for (int i = 0; i < points; i++) {

    }
}

int main(){
    int inputint;
    while (1) {
        printf("Enter 0 or 1 to STOP\n");
        printf("Enter the NFL score:");
        scanf("%d", &inputint);
        if (inputint <= 1) {
            break;
        }else {
            printf("Possible combinations of scoring plays if a team's score is %d:", inputint);
            print_combinations(inputint);
        }
    }
    return 0;
}