#include <stdio.h>

// FUNCTION PROTOTYPES: is a declaration of a function that tells the compiler about the functions name, return type and parameters before its actual definition appears on the code.

float convertToFahrenheit(float celsius);// this will store decimal temperature values in celcius scale.
void checkComfortLevel(float current, float desired);// clarifies that the function expects no argument.
 //program execution begins here
int main() {
    float currentTemp, desiredTemp; //stores user inputs
    
    printf(" Smart Home Temperature Control System \n\n");
    
    // Get current temperature in Celsius
    printf("Enter current temperature in Celsius: ");
    scanf("%f", &currentTemp);//ampersand obtains memory adress of the variable.
    
    // Get desired temperature in Celsius
    printf("Enter desired temperature in Celsius: ");
    scanf("%f", &desiredTemp);//%f is a specifier that acts as a place holder for float values. And &...obtais memory address
    
    // Convert temperatures to Fahrenheit
    float currentF = convertToFahrenheit(currentTemp);
    float desiredF = convertToFahrenheit(desiredTemp); 
    
    // Display converted temperatures in both celcius and fareheit
    printf("\nTemperature Readings:\n");
    printf("Current: %.1f°C (%.1f°F)\n", currentTemp, currentF);
    printf("Desired: %.1f°C (%.1f°F)\n", desiredTemp, desiredF);
    
    // Check and display comfort level
    printf("\nSystem Status: ");
    checkComfortLevel(currentF, desiredF);
    
    return 0;
}

// Function to convert Celsius to Fahrenheit
float convertToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
    
}

// this function will check comfort level and determine system status
void checkComfortLevel(float current, float desired) {
    if (current < desired - 3) {
        printf("HEATING\n");
    } else if (current > desired + 3) {
        printf("COOLING\n");
    } else {
        printf("IDEAL\n");
    }
} 