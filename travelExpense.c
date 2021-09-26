#include <stdio.h>

int main()
{
   printf("Welcome!\n");

   //Collect needed values
   unsigned int days = getTotalDays();
   float airCost = getAirfare();
   double times[] = getDepartAndArrival(); //Departing time in first position and arrival time in second position, in hours range from 0 to 24 (up for discussion)
   double milesDriven = getDrivenMiles();
   float parkingCost = getCostOfParking();
   float taxiCost = getTaxiFees();
   float eventCost = getEventCost();
   float hotelCost = getHotelCost();
   int rentals = getRentalAmount();
   float meals[] = getNumberOfMeals(); //First position is breakfast, second position is lunch, and third position is dinner

   //Calculate total allowable cost
   float totalAllowed = 0;
   if (days != 1)
   {
      totalAllowed = (days - 2) *  9; //Breakfasts
      totalAllowed += (days - 2) * 12; //Lunches
      totalAllowed += (days - 2) * 16; //Dinners
   }
   //Arrival day 
   if (times[0] < 7)
      totalAllowed += 9 + 12 + 16;
   else if (times[0] < 12)
      totalAllowed += 12 + 16;
   else if (times[0] < 18)
      totalAllowed += 16;
   //Departure day
   if (times[1] > 8)
      totalAllowed += 9;
   if (times[1] > 13)
      totalAllowed += 12;
   if (times[1] > 19)
      totalAllowed += 16;
   totalAllowed += 6 * days; //Parking
   totalAllowed += 90 * (days - 1); //Lodging
   totalAllowed += 10 * days; //Taxi service
   return 0;
}