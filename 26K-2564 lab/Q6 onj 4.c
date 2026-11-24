#include <stdio.h>

#define TOLL_RATE 50

int processVehicle(char vehicleType[]) {
    static int totalVehicles = 0;
    static int totalFee = 0;

    totalVehicles++;
    totalFee = totalFee + TOLL_RATE;
    printf("%s passed. Vehicles so far: %d, Fee collected so far: %d PKR\n",
           vehicleType, totalVehicles, totalFee);
    return totalFee;
}
int main() {
    int total = 0;
    processVehicle("Car");
    processVehicle("Bus");
    processVehicle("Truck");
    processVehicle("Bike");
    total = processVehicle("Car");

    printf("\n--- Toll Plaza Report ---\n");
    printf("Toll rate: %d PKR\n", TOLL_RATE);
    printf("Total collection: %d PKR\n", total);
    return 0;
}
