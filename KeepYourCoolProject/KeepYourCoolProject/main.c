/***********************************************************************************************************
 *Class:                     CSCI 112                                                                                        *
 *Instructor:               Ronald Burgher                                                                              *
 *Programmer:          Ethan Grant                                                                                    *
 *Project:                  Keep Your Cool Project                                                                   *
 ************************************************************************************************************/

#include <stdio.h>

FILE *fp;

#define _CRT_SECURE_NO_WARNINGS

int main(void) {
 fp = fopen("csis.txt", "w");
  
    // Define all variables
    int InitialAltitude = 0;
    int FinalAltitude = 0;
    int celsius = 0;
    double finaltemp, tempchange, difference, fahrenheit = 0;
    
    // Display messages that users can input into 
    printf("Please enter the Celsius temperature: ");
    fprintf(fp, "Please enter the Celsius temperature: \n");
    scanf("%d", &celsius);
    printf("Please enter the initial altitude: \n");
    fprintf(fp, "Please enter the initial altitude: \n");
    scanf("%d", &InitialAltitude);
    printf("Please enter the final altitude: \n");
    fprintf(fp, "Please enter the final altitude: \n");
    scanf("%d", &FinalAltitude);
   
    // Perform calculations
    fahrenheit = celsius * 1.8 + 32;
    difference = FinalAltitude-InitialAltitude;
    tempchange = -5.38/1000*difference;
    finaltemp = tempchange + fahrenheit;
    
    // Display the outcome of calculations
    printf("The temp in Fahrenheit at %d feet is: %2.1lf", FinalAltitude,finaltemp);
    fprintf(fp, "The temp in Fahrenheit at %d feet is: ", FinalAltitude);
    
  fclose(fp);
    return 0;
}
