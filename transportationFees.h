#ifndef carrental 
#define carrental

#include <stdio.h>

static double getCarRentalFees(double carRentalFee);
static int getTotalNumberOfDays(int totaldays);
static double getPrivateVehicleUsed(double privateVehicleCost);
static double getParkingFees(double parkingFee, int days, double *reimbursement, double *amountSaved);
static double getTaxiFees(double taxiFee, int days, double *reimbursement, double *amountSaved); 
#endif