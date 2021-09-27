#include <stdio.h>
#include <stdlib.h>

//function to get any car rental fees
double getCarRentalFees(double carRentalFee)
{
    char userInput;

    //first asks for yes or no
    printf("Did you rent a car during the trip? (Y/N)\n");
    scanf(" %c", &userInput);

    //checking if they put smt other than y or n
    while ((userInput != 'Y') && (userInput != 'y') && (userInput != 'N') && (userInput != 'n'))
    {
        printf("Please enter Y or N: ");
        scanf(" %c", &userInput);
    }

    if (userInput == 'Y' || userInput == 'y')
    {
        printf("How much was the rental car?\n");
        scanf("%lf", &carRentalFee);

        while (carRentalFee < 0)
        {
            printf("Please enter a valid amount for rental fee.\n");
            scanf("%lf", &carRentalFee);
        }
    }
    return carRentalFee;
}

//function to get private vehicle expense
double getPrivateVehicleUsed(double privateVehicleCost)
{
    double costPerMile = 0.27;
    double milesDriven;
    char userInput;

    printf("Did you use a private vehicle during the trip? (Y/N)\n");
    scanf(" %c", &userInput);

    while ((userInput != 'Y') && (userInput != 'y') && (userInput != 'N') && (userInput != 'n'))
    {
        printf("Please enter Y or N: ");
        scanf(" %c", &userInput);
    }

    if (userInput == 'Y' || userInput == 'y')
    {
        printf("How many miles were driven?\n");
        scanf("%lf", &milesDriven);

        while (milesDriven < 0)
        {
            printf("Please enter a valid number.\n");
            scanf("%lf", &milesDriven);
        }

        privateVehicleCost = milesDriven * costPerMile;
    }
    return privateVehicleCost;
}

//function to get any parking fees
double getParkingFees(double parkingFee) 
{
        printf("How much was spent on parking during the trip?\n");
        scanf("%lf", &parkingFee);

        //input validation part
        while (parkingFee < 0) 
        {
            printf("Please enter a valid number.\n");
            scanf("%lf", &parkingFee);
        }

    return parkingFee;
}

//function to get any taxi fees
double getTaxiFees(double taxiFee) 
{
        printf("How much was spent on taxis during the trip?\n");
        scanf("%lf", &taxiFee);

        //input validation part
        while (taxiFee < 0) 
        {
            printf("Please enter a valid number.\n");
            scanf("%lf", &taxiFee);
        }
    return taxiFee; 
}