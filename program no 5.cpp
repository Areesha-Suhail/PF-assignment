
#include <stdio.h>

float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}


float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main()
 {
    int choice; 
    float temperature; 

   
    printf("Temperature Converter\n");
    printf("1: Celsius to Fahrenheit\n");
    printf("2: Fahrenheit to Celsius\n");
    
 
    printf("Choose an option (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        float fahrenheit = celsius_to_fahrenheit(temperature);
        printf("%.2f°C is equal to %.2f°F\n", temperature, fahrenheit);
    } else if (choice == 2) {
      
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        float celsius = fahrenheit_to_celsius(temperature);
        printf("%.2f°F is equal to %.2f°C\n", temperature, celsius);
    } else {
      
        printf("Invalid option. Please choose 1 or 2.\n");
    }

    return 0;
}
