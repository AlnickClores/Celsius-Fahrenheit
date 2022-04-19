#include <stdio.h>

int main() {
    
    int choice;
    double fahrenheit, celsius;
            
    
    printf("\t\t\tCelsius to Fahrenheit Converter\n\n");
    
    printf("Choose Operation\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    scanf("%d", &choice);
    
    printf("\n");
    while(choice == 1 || choice == 2)
    {
        switch(choice)
        {
            case 1:
                printf("Enter the Celsius: ");
                scanf("%lf", &celsius);
            
                fahrenheit = (celsius*9/5)+32;
                printf("%.1lf Celsuis is equal to %.2lf Farenheit", celsius, fahrenheit);
                    return 0;	
            case 2:
            	printf("Enter the Fahrenheit: ");
            	scanf("%lf", &fahrenheit);
            	
            	celsius = ((fahrenheit-32)*5)/9;            
					printf("%.1lf Fahrenheit is equal to %.2lf Celsius", fahrenheit, celsius);
                	return 0;
            default:
            	printf("Enter correct input");
            		return 0;
        }
    }
    
    return 0;
}
