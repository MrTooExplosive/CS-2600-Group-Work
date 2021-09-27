#include "daysTimeEventHotel.h"

// Function to ask for total days spent on trip
int getTotalDays() {
    int days;

    // Loop until user input is valid
    while (days < 1) {
        printf("\nEnter the days spent on the trip, including days of arrival and departure: "); // Ask for how many days
        scanf("%d", &days);
        if (days < 1) {
            printf("\nThe number you entered is not valid. Make sure you enter a value of 1 or more.\n"); // Let user know their input was invalid
        }
    }
    return days;
}

// Function to ask for their departure and arrival times
int* getDepartAndArrival() {
    static int time[2];

    // Loop that runs at least once until user input is valid
    do {
        printf("\nEnter the hour of departure on your first day (Use 24 hour time, ex. 6PM is 18): "); // Ask for departure time
        scanf("%d", &time[0]);
        if (time[0] <= -1 || time[0] >= 25) {
            printf("\nThe number you entered is not valid. Make sure you enter a number between 0 and 24.\n"); // Let user know their input was invalid
        }
    } while (time[0] <= -1 || time[0] >= 25);

    // Loop that runs at least once until user input is valid
    do {
        printf("\nEnter the hour of arrival on your last day: "); // Ask for arrival time
        scanf("%d", &time[1]);
        if (time[1] <= -1 || time[1] >= 25) {
            printf("\nThe number you entered is not valid. Make sure you enter a number between 0 and 24.\n"); // Let user know their input was invalid
        }
    } while (time[1] <= -1 || time[1] >= 25);
    return time;
}

// Function to ask for conference and seminar fees
double getEventCost() {
    double fees;

    // Loop that runs at least once until user input is valid
    do {
        printf("\nEnter the amount spent on conference or seminar registration fees: "); // Ask for amount spent on events
        scanf("%lf", &fees);
        if (fees < 0) {
            printf("\nThe number you entered is not valid. Make sure you enter a value of $0 or more.\n"); // Let user know their input was invalid
        }
    } while (fees < 0);
    return fees;
}

// Function to ask for hotel expenses
double getHotelCost() {
    double hotel;

    // Loop that runs at least once until user input is valid
    do {
        printf("\nEnter the amount spent on hotel expenses: "); // Ask for amount spent on hotel
        scanf("%lf", &hotel);
        if (hotel < 0) {
            printf("\nThe number you entered is not valid. Make sure you enter a value of $0 or more.\n"); // Let user know their input was invalid
        }
    } while (hotel < 0);
    return hotel;
}
