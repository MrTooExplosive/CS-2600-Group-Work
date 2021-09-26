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

   return 0;
}