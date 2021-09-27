#include <stdio.h>
#include "daysTimeEventHotel.h"
#include "transportationFees.h"
#include "mealsAndAirfare.h"

int main()
{
   printf("Welcome!\n");

   //Collect needed values
   unsigned int days = getTotalDays();
   float airCost = getAirfare();
   int* times = getDepartAndArrival(); //Departing time in first position and arrival time in second position, in hours range from 0 to 24 
   double milesDriven = getDrivenMiles();
   float parkingCost = getParkingFees();
   float taxiCost = getTaxiFees();
   float eventCost = getEventCost();
   float hotelCost = getHotelCost();
   float rentals = getCarRentalFees();
   float mealCost = getMealsCost();

   //Calculate and print total allowable cost
   float totalAllowed = 0;
   if (days != 1)
   {
      totalAllowed = (days - 2) *  9; //Breakfasts
      totalAllowed += (days - 2) * 12; //Lunches
      totalAllowed += (days - 2) * 16; //Dinners
   }
   //Arrival day meals
   if (times[0] < 7)
      totalAllowed += 9 + 12 + 16;
   else if (times[0] < 12)
      totalAllowed += 12 + 16;
   else if (times[0] < 18)
      totalAllowed += 16;
   //Departure day meals
   if (times[1] > 8)
      totalAllowed += 9;
   if (times[1] > 13)
      totalAllowed += 12;
   if (times[1] > 19)
      totalAllowed += 16;
   totalAllowed += 6 * days; //Parking
   totalAllowed += 90 * (days - 1); //Lodging
   totalAllowed += 10 * days; //Taxi service
   printf("\nThe total cost the company will cover is $%.2f", totalAllowed);

   //Calculate and print total cost
   float totalCost = airCost; 
   totalCost += rentals;
   totalCost += .27 * milesDriven;
   totalCost += parkingCost;
   totalCost += taxiCost;
   totalCost += eventCost;
   totalCost += hotelCost;
   totalCost += mealCost;
   printf("\nThe total cost of the trip is $%.2f", totalCost);

   //Calculate and report owed/saved amount
   if (totalCost > totalAllowed)
      printf("\nYou owe $%.2f", totalCost - totalAllowed);
   else if (totalCost < totalAllowed)
      printf("\nYou saved the company $%.2f", totalAllowed - totalCost);
   else 
      printf("\nYou're efficient! You spent just as much as the company would allow!");

   return 0;
}
