#include "temperature.h"
//converts a float celsisus input to fahrenheit
float celsius_to_fahrenheit(float celsius){
    float f;
    f = 1.8*celsius+32;
    return f;
}
//converts a float fahrenheit input to celsisus
float fahrenheit_to_celsius(float fahrenheit){
    float c;
    c = 5.0/9.0*(fahrenheit-32);
    return c;
}   
//converts a float celsisus input to kelvin
float celsius_to_kelvin(float celsius){
    float k;
    k = celsius + 273.15;
    return k;
}
//converts a float kelvin input to celsisus
float kelvin_to_celsius(float kelvin){
    float c;
    c = kelvin-273.15;
    return c;
}