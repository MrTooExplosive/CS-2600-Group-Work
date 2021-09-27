/** meal.c **/

#include<stdio.h>
#include<string.h>

/* meal description */
float getMealsCost(){
   printf("\nHow much did you spend on meals? ");
   float cost;
   scanf("%f", &cost);
}

float getAirfare(){
    float round_trip_airfare = 0;

    
    do
    {
       printf("\nWhat was the amount for round-trip airfare? $");
       scanf("%f", &round_trip_airfare);
    } while (round_trip_airfare < 0);
    

    return round_trip_airfare;
}