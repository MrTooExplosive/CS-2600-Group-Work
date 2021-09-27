#include <stdio.h>
#include <stdlib.h>

//function to get any car rental fees
double getCarRentalFees()
{
    char userInput;
    double carRentalFee = 0;
    //first asks for yes or no
    printf("\nDid you rent a car during the trip? (Y/N)\n");
    scanf(" %c", &userInput);

    //checking if they put smt other than y or n
    while ((userInput != 'Y') && (userInput != 'y') && (userInput != 'N') && (userInput != 'n'))
    {
        printf("\nPlease enter Y or N: ");
        scanf(" %c", &userInput);
    }

    if (userInput == 'Y' || userInput == 'y')
    {
        printf("\nHow much was the rental car?\n");
        scanf("%lf", &carRentalFee);

        while (carRentalFee < 0)
        {
            printf("\nPlease enter a valid amount for rental fee.\n");
            scanf("%lf", &carRentalFee);
        }
    }
    return carRentalFee;
}

//function to get private vehicle expense
double getDrivenMiles()
{
    double privateVehicleCost = 0;
    double costPerMile = 0.27;
    double milesDriven;
    char userInput;

    printf("\nDid you use a private vehicle during the trip? (Y/N)\n");
    scanf(" %c", &userInput);

    while ((userInput != 'Y') && (userInput != 'y') && (userInput != 'N') && (userInput != 'n'))
    {
        printf("\nPlease enter Y or N: ");
        scanf(" %c", &userInput);
    }

    if (userInput == 'Y' || userInput == 'y')
    {
        printf("\nHow many miles were driven?\n");
        scanf("%lf", &milesDriven);

        while (milesDriven < 0)
        {
            printf("\nPlease enter a valid number.\n");
            scanf("%lf", &milesDriven);
        }

        privateVehicleCost = milesDriven * costPerMile;
    }
    return privateVehicleCost;
}

//function to get any parking fees
double getParkingFees() 
{
        double parkingFee = 0;
        printf("\nHow much was spent on parking during the trip?\n");
        scanf("%lf", &parkingFee);

        //input validation part
        while (parkingFee < 0) 
        {
            printf("\nPlease enter a valid number.\n");
            scanf("%lf", &parkingFee);
        }

    return parkingFee;
}

//function to get any taxi fees
double getTaxiFees() 
{
        double taxiFee = 0;
        printf("\nHow much was spent on taxis during the trip?\n");
        scanf("%lf", &taxiFee);

        //input validation part
        while (taxiFee < 0) 
        {
            printf("\nPlease enter a valid number.\n");
            scanf("%lf", &taxiFee);
        }
    return taxiFee; 
}