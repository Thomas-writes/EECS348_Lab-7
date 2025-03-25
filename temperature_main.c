#include "temperature.h"
#include "stdio.h"

int main(int argc, char *argv[]) {
    //initializing all variables needed
    float temp;
    int scale;
    int conv;
    float new_temp;
    float celsius;
    //ask the user for a temperature
    printf("Enter the temperature: ");
    scanf("%f", &temp);
    //ask the user for current scale
    printf("Choose the current scale (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");
    scanf("%d", &scale);
    //ask the user for the scale to convert to
    printf("Convert to (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");
    scanf("%d", &conv);
    //checks if the temperature is celsius
    if (scale == 1){
        //error handling to make sure temperature is valid
        if (temp < -273.15){
            printf("Temperature is outside of scale");
            return 0;
        }
        // convert celsius to fahrenheit
        if (conv == 2){
            new_temp = celsius_to_fahrenheit(temp);
            printf("Converted Temperature: %.2f degrees F\n", new_temp);
            celsius = temp;
        // convert celsius to kelvin
        }else if (conv == 3){
            new_temp = celsius_to_kelvin(temp);
            printf("Converted Temperature: %.2f degrees K\n", new_temp);
            celsius = temp;
        }
    //checks if the temperature is fahrenheit
    }else if (scale == 2){
        //error handling to make sure temperature is valid
        if (temp < -459.67){
            printf("Temperature is outside of scale");
            return 0;
        }
        // convert fahrenheit to celsius
        if (conv == 1){
            new_temp = fahrenheit_to_celsius(temp);
            printf("Converted Temperature: %.2f degrees C\n", new_temp);
            celsius = new_temp;
        // convert fahrenheit to kelvin
        }else if (conv == 3){
            new_temp = fahrenheit_to_celsius(temp);
            new_temp = celsius_to_kelvin(new_temp);
            printf("Converted Temperature: %.2f degrees K\n", new_temp);
            celsius = new_temp;
        }
    //checks if the temperature is kelvin
    }else if (scale == 3){
        //error handling to make sure temperature is valid
        if (temp < 0){
            printf("Temperature is outside of scale");
            return 0;
        }
        // convert kelvin to celsius
        if (conv == 1){
            new_temp = kelvin_to_celsius(temp);
            printf("Converted Temperature: %.2f degrees C\n", new_temp);
            celsius = new_temp;
        // convert kelvin to fahrenheit
        }else if (conv == 2){
            new_temp = kelvin_to_celsius(temp);
            new_temp = celsius_to_fahrenheit(new_temp);
            printf("Converted Temperature: %.2f degrees C\n", new_temp);
            celsius = new_temp;
        }
    }
    //checks if the current scale and conversion scale are the same
    if (scale == conv){
        printf("Cannot convert to current measurement\n");
        return 0;
    }
    // this is basically a seperate function the categorizes the temperature accordingly.
    if (celsius <= 0){// freezing x <= 0
        printf("Temperature category: Freezing\n");
        printf("Weather advisory: Don't go outside.\n");
    }else if (celsius <= 10){ // cold 0 < x <= 10
        printf("Temperature category: Cold\n");
        printf("Weather advisory: Wear a jacket.\n");
    }else if (celsius <= 25){ // comfortable 10 < x <= 25
        printf("Temperature category: Comfortable\n");
        printf("Weather advisory: You should feel comfortable.\n");
    }else if (celsius <= 35){ // hot 25 < x <= 35
        printf("Temperature category: Hot\n");
        printf("Weather advisory: Dress accordingly.\n");
    }else{ // extreme heat  x > 35
        printf("Temperature category: Extreme Heat\n");
        printf("Weather advisory: Avoid being outside for long periods of time.\n");
    }
    return 0;
}
