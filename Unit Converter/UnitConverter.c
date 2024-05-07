#include <stdio.h>
#include <math.h>
#include <stdlib.h>


float bdtToUsd(float bdt) {
    return bdt / 85.0; // Assuming 1 USD = 85 BDT
}

// Function to convert USD to BDT
float usdToBdt(float usd) {
    return usd * 85.0; // Assuming 1 USD = 85 BDT
}

// Function to convert EUR to BDT
float eurToBdt(float eur) {
    return eur * 100.0; // Assuming 1 EUR = 100 BDT
}

// Function to convert BDT to EUR
float bdtToEur(float bdt) {
    return bdt / 100.0; // 1 EUR = 100 BDT
}
float kgToGrams(float kg) {
    return kg * 1000;
}

// Function to convert kilograms to pounds
float kgToPounds(float kg) {
    return kg * 2.20462; // Approximate conversion factor
}

// Function to convert meters to centimeters
float metersToCentimeters(float meters) {
    return meters * 100;
}

// Function to convert meters to inches
float metersToInches(float meters) {
    return meters * 39.3701; // Approximate conversion factor
}

int main(){
    int choice = 1;
    while (choice >= 1 && choice <= 6) {
        int choice;
        printf("Unit Converter Menu \n");
        printf("1. Number Conversion \n");
        printf("2. Temperature Conversion \n");
        printf("3. Currency Conversion \n");
        printf("4. Weight Conversion \n");
        printf("5. Length Conversion \n");
        printf("6. Exit \n");
        printf("Enter your choice (1-5) : ");
        scanf("%d",&choice);

        if(choice == 1){
            int num;
            long long decimal;
            char binary[65];
            char hexadecimal[17];
            char octal[23];
            printf("Number Conversion Menu\n");
            printf("1. Decimal to Binary\n");
            printf("2. Decimal to Hexadecimal\n");
            printf("3. Decimal to Octal\n");
            printf("4. Binary to Decimal\n");
            printf("5. Binary to Hexadecimal\n");
            printf("6. Binary to Octal\n");
            printf("7. Hexadecimal to Decimal\n");
            printf("8. Hexadecimal to Binary\n");
            printf("9. Hexadecimal to Octal\n");
            printf("10. Octal to Decimal\n");
            printf("11. Octal to Binary\n");
            printf("12. Octal to Hexadecimal\n");
            printf("Enter your choice (1-12): ");
            scanf("%d", &num);

            if(num == 1){
                printf("Enter a decimal number : ");
                scanf("%lld", &decimal);
                itoa(decimal, binary, 2);
                printf("Binary : %s \n", binary);
            }
            else if(num == 2){
                printf("Enter a decimal number : ");
                scanf("%lld", &decimal);
                itoa(decimal, hexadecimal, 16);
                printf("Hexadecimal : %s \n", hexadecimal);
            }
            else if(num == 3){
                printf("Enter a decimal number : ");
                scanf("%lld", &decimal);
                itoa(decimal, octal, 8);
                printf("Octal : %s \n", octal);
            }
            else if(num == 4){
                printf("Enter a binary number : ");
                scanf("%s", binary);
                decimal = strtol(binary, NULL, 2);
                printf("Decimal : %lld \n", decimal);
            }
            else if(num == 5){
                printf("Enter a binary number : ");
                scanf("%s", binary);
                decimal = strtol(binary, NULL, 2);
                itoa(decimal, hexadecimal, 16);
                printf("Hexadecimal : %s \n",hexadecimal);
            }
            else if(num == 6){
                printf("Enter a binary number : ");
                scanf("%s", binary);
                decimal = strtol(binary, NULL, 2);
                itoa(decimal, octal, 8);
                printf("Octal : %s \n", octal);
            }
            else if(num == 7){
                printf("Enter a hexadecimal number : ");
                scanf("%s", hexadecimal);
                decimal = strtol(hexadecimal, NULL, 16);
                printf("Decimal : %lld \n", decimal);
            }
            else if(num == 8){
                printf("Enter a hexadecimal number : ");
                scanf("%s", hexadecimal);
                decimal = strtol(hexadecimal, NULL, 16);
                itoa(decimal, binary, 2);
                printf("Binary : %s \n", binary);
            }
            else if(num == 9){
                printf("Enter a hexadecimal number : ");
                scanf("%s", hexadecimal);
                decimal = strtol(hexadecimal, NULL, 16);
                itoa(decimal, octal, 8);
                printf("Octal : %s \n", octal);
            }
            else if(num == 10){
                printf("Enter a octal number : ");
                scanf("%s", octal);
                decimal = strtol(octal, NULL, 8);
                printf("Decimal : %lld \n", decimal);
            }
            else if(num == 11){
                printf("Enter a octal number : ");
                scanf("%s", octal);
                decimal = strtol(octal, NULL, 8);
                itoa(decimal, binary, 2);
                printf("Binary : %s \n", binary);
            }
            else if(num == 12){
                printf("Enter a octal number : ");
                scanf("%s", octal);
                decimal = strtol(octal, NULL, 8);
                itoa(decimal, hexadecimal, 16);
                printf("Hexadecimal : %s \n", hexadecimal);
            }
        }
        else if(choice == 2){
                int n;
                float Celsius, Fahrenheit,Kelvin;

                printf("Temperature Conversion Menu\n");
                printf("1. Celsius to Fahrenheit\n");
                printf("2. Fahrenheit to Celsius\n");
                printf("3. Celsius to Kelvin\n");
                printf("4. Kelvin to Celsius\n");
                printf("5. Kelvin to Fahrenheit \n");
                printf("6. Fahrenheit to Kelvin \n");
                printf("Enter your choice (1-6) : ");
                scanf("%d", &n);

                if(n == 1){
                    printf("Enter temperature in Celsius : ");
                    scanf("%f", &Celsius);
                    Fahrenheit = (Celsius * 9 / 5) + 32;
                    printf("Temperature in Fahrenheit : %.2f \n", Fahrenheit);
                }
                else if(n == 2){
                    printf("Enter temperature in Fahrenheit : ");
                    scanf("%f", &Fahrenheit);
                    Celsius = (Fahrenheit - 32) * 5 / 9;
                    printf("Temperature in Celsius : %.2f \n", Celsius);
                }
                else if(n == 3){
                    printf("Enter temperature in Celsius : ");
                    scanf("%f", &Celsius);
                    Kelvin = Celsius + 273.15;
                    printf("Temperature in Kelvin : %.2f \n", Kelvin);
                }
                else if(n == 4){
                    printf("Enter temperature in Kelvin : ");
                    scanf("%f", &Kelvin);
                    Celsius = Kelvin - 273.15;
                    printf("Temperature in Celsius : %.2f \n", Celsius);

                }
                else if(n == 5){
                        printf("Enter temperature in Kelvin : ");
                        scanf("%f", &Kelvin);
                        Fahrenheit = (Kelvin - 273.15) * ( 9 / 5) + 32;
                        printf("Temperature in Fahrenheit : %.2f \n", Fahrenheit);
                }
                else if(n == 6){
                    printf("Enter temperature in Fahrenheit : ");
                    scanf("%f", &Fahrenheit);
                    Kelvin = (Fahrenheit - 32) * (5 / 9) + 273.15;
                    printf("Temperature in Kelvin : %.2f \n", Kelvin);
                }
        }
        else if(choice == 3){
            int num1;
            float value;
            printf("Currency Conversions\n");
            printf("1. BDT to USD \n");
            printf("2. USD to BDT \n");
            printf("3. EUR to BDT \n");
            printf("4. BDT to EUR \n");
            printf("Enter your choice : ");
            scanf("%d", &num1);
            printf("Enter amount : ");
            scanf("%f", &value);

            if(num1 == 1){
                printf("BDT to USD : %.2f\n", bdtToUsd(value));
            }
            else if(num1 == 2){
                    printf("USD to BDT : %.2f\n", usdToBdt(value));
            }
            else if(num1 == 3){
                    printf("EUR to BDT : %.2f\n", eurToBdt(value));
            }
            else if(num1 == 4){
                    printf("BDT to EUR : %.2f\n", bdtToEur(value));
            }
        }
        else if(choice == 4){
                float kilo;
                printf("Enter weight in kilograms: ");
                scanf("%f", &kilo);
                printf("Kilograms to Grams: %.2f\n", kgToGrams(kilo));
                printf("Kilograms to Pounds: %.2f\n", kgToPounds(kilo));
        }
        else if(choice == 5){
                float meter;
                printf("Enter length in meters: ");
                scanf("%f", &meter);
                printf("Meters to Centimeters: %.2f\n", metersToCentimeters(meter));
                printf("Meters to Inches: %.2f\n", metersToInches(meter));
        }

        else if(choice == 6) {
            printf("Exit\n");
        }
        else {
            printf("Invalid option!\n");
        }
    }


    return 0;
}
