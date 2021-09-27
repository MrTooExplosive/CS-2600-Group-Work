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
double getParkingFees(double parkingFee, int days, double *reimbursement, double *amountSaved) 
{
    double totalParkingFees;
    double parkingFeeCovered = 6.00;

    //uses # of trip days, used to ask for any parking fees for each day of trip
    for (int i = 0; i < days; i++)
    {
        printf("How much was spent on parking on day %d?\n", i + 1);
        scanf("%lf", &parkingFee);

        //input validation part
        while (parkingFee < 0) 
        {
            printf("Please enter a valid number.\n");
            scanf("%lf", &parkingFee);
        }

        totalParkingFees += parkingFee;

        /*this part calculates any reimbursement or saving by checking 
        if the parking fees were less than or greater than $6 but it can 
        also be done in main instead*/
        
        if (parkingFee < parkingFeeCovered) 
        {
            *amountSaved += parkingFeeCovered - parkingFee;
        }

        else if (parkingFee > parkingFeeCovered)
        {
            *reimbursement += parkingFee - parkingFeeCovered;
        }
    }
    return totalParkingFees;
}

//function to get any taxi fees
double getTaxiFees(double taxiFee, int days, double *reimbursement, double *amountSaved) 
{
    double totalTaxiFees;
    double taxiFeeCovered = 10.00;

    //basically the same format as the parking function
    for (int i = 0; i < days; i++)
    {
        printf("How much was spent on a taxi on day %d?\n", i + 1);
        scanf("%lf", &taxiFee);

        //input validation part
        while (taxiFee < 0) 
        {
            printf("Please enter a valid number.\n");
            scanf("%lf", &taxiFee);
        }

        totalTaxiFees += taxiFee;
        
        if (taxiFee < taxiFeeCovered) 
        {
            *amountSaved += taxiFeeCovered - taxiFee;
        }

        else if (taxiFee > taxiFeeCovered)
        {
            *reimbursement += taxiFee - taxiFeeCovered;
        }
    }
    return totalTaxiFees;
}