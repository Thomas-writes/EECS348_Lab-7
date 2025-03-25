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
