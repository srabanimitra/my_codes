#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MODEL_LENGTH 50
#define FILENAME "rentals.dat"

typedef struct {
    char carModel[MAX_MODEL_LENGTH];
    int customerID;
    char rentalStartDate[11]; // Format: YYYY-MM-DD
    char rentalEndDate[11];   // Format: YYYY-MM-DD
    float rentalPrice;
} Rental;

void addRental(FILE *file);
void searchRental(FILE *file);
void displayRentals(FILE *file);
void updateRental(FILE *file);
void deleteRental(FILE *file);
void generateReport(FILE *file);
int getTotalRentals(FILE *file);
void updateTotalRentals(FILE *file, int totalRentals);

int main() {
    FILE *file = fopen(FILENAME, "rb+");
    if (file == NULL) {
        // File doesn't exist, create a new one
        file = fopen(FILENAME, "wb+");
        if (file == NULL) {
            printf("Error creating the rental file.\n");
            return 1;
        }
        int initialRentals = 0;
        fwrite(&initialRentals, sizeof(int), 1, file);
    }

    int option;
    do {
        printf("Car Rental Management System\n");
        printf("1. Add a new rental to the system\n");
        printf("2. Search for a rental by car model or customer ID\n");
        printf("3. Display all rentals in the system\n");
        printf("4. Update a rental's information\n");
        printf("5. Delete a rental from the system\n");
        printf("6. Generate a report\n");
        printf("7. Exit the program\n");
        printf("Select an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                addRental(file);
                break;
            case 2:
                searchRental(file);
                break;
            case 3:
                displayRentals(file);
                break;
            case 4:
                updateRental(file);
                break;
            case 5:
                deleteRental(file);
                break;
            case 6:
                generateReport(file);
                break;
            case 7:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while (option != 7);

    fclose(file);
    return 0;
}

void addRental(FILE *file) {
    Rental rental;
    printf("Enter the car model: ");
    scanf(" %[^\n]", rental.carModel);
    printf("Enter the customer ID: ");
    scanf("%d", &rental.customerID);
    printf("Enter the rental start date (YYYY-MM-DD): ");
    scanf(" %[^\n]", rental.rentalStartDate);
    printf("Enter the rental end date (YYYY-MM-DD): ");
    scanf(" %[^\n]", rental.rentalEndDate);
    printf("Enter the rental price: ");
    scanf("%f", &rental.rentalPrice);

    fseek(file, 0, SEEK_END);
    fwrite(&rental, sizeof(Rental), 1, file);

    int totalRentals = getTotalRentals(file);
    updateTotalRentals(file, totalRentals + 1);

    printf("Rental added successfully.\n");
}

void searchRental(FILE *file) {
    char searchStr[MAX_MODEL_LENGTH];
    printf("Enter the car model or customer ID to search: ");
    scanf(" %[^\n]", searchStr);

    int foundRentals = 0;
    Rental rental;
    rewind(file);
    fread(&foundRentals, sizeof(int), 1, file);
    printf("Matching rentals:\n");
    for (int i = 0; i < foundRentals; i++) {
        fread(&rental, sizeof(Rental), 1, file);
        if (strstr(rental.carModel, searchStr) != NULL || rental.customerID == atoi(searchStr)) {
            printf("Car Model: %s\n", rental.carModel);
            printf("Customer ID: %d\n", rental.customerID);
            printf("Rental Start Date: %s\n", rental.rentalStartDate);
            printf("Rental End Date: %s\n", rental.rentalEndDate);
            printf("Rental Price: $%.2f\n", rental.rentalPrice);
            printf("------------------------\n");
        }
    }
}

void displayRentals(FILE *file) {
    int totalRentals = getTotalRentals(file);
    Rental rental;

    printf("Total Rentals: %d\n", totalRentals);
    printf("------------------------\n");

    for (int i = 0; i < totalRentals; i++) {
        fread(&rental, sizeof(Rental), 1, file);
        printf("Car Model: %s\n", rental.carModel);
        printf("Customer ID: %d\n", rental.customerID);
        printf("Rental Start Date: %s\n", rental.rentalStartDate);
        printf("Rental End Date: %s\n", rental.rentalEndDate);
        printf("Rental Price: $%.2f\n", rental.rentalPrice);
        printf("------------------------\n");
    }
}

void updateRental(FILE *file) {
    int customerID;
    printf("Enter the customer ID of the rental to update: ");
    scanf("%d", &customerID);

    int foundIndex = -1;
    int totalRentals = getTotalRentals(file);
    Rental rental;

    for (int i = 0; i < totalRentals; i++) {
        fread(&rental, sizeof(Rental), 1, file);
        if (rental.customerID == customerID) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Enter the updated rental information:\n");
        printf("Enter the car model: ");
        scanf(" %[^\n]", rental.carModel);
        printf("Enter the rental start date (YYYY-MM-DD): ");
        scanf(" %[^\n]", rental.rentalStartDate);
        printf("Enter the rental end date (YYYY-MM-DD): ");
        scanf(" %[^\n]", rental.rentalEndDate);
        printf("Enter the rental price: ");
        scanf("%f", &rental.rentalPrice);

        fseek(file, sizeof(int) + foundIndex * sizeof(Rental), SEEK_SET);
        fwrite(&rental, sizeof(Rental), 1, file);

        printf("Rental information updated successfully.\n");
    } else {
        printf("Rental not found.\n");
    }
}

void deleteRental(FILE *file) {
    int customerID;
    printf("Enter the customer ID of the rental to delete: ");
    scanf("%d", &customerID);

    int foundIndex = -1;
    int totalRentals = getTotalRentals(file);
    Rental rental;

    for (int i = 0; i < totalRentals; i++) {
        fread(&rental, sizeof(Rental), 1, file);
        if (rental.customerID == customerID) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        fseek(file, sizeof(int) + (foundIndex + 1) * sizeof(Rental), SEEK_SET);
        int remainingRentals = totalRentals - foundIndex - 1;
        if (remainingRentals > 0) {
            Rental *buffer = (Rental *)malloc(remainingRentals * sizeof(Rental));
            fread(buffer, sizeof(Rental), remainingRentals, file);
            fseek(file, sizeof(int) + foundIndex * sizeof(Rental), SEEK_SET);
            fwrite(buffer, sizeof(Rental), remainingRentals, file);
            free(buffer);
        }
        updateTotalRentals(file, totalRentals - 1);
        printf("Rental deleted successfully.\n");
    } else {
        printf("Rental not found.\n");
    }
}

void generateReport(FILE *file) {
    int totalRentals = getTotalRentals(file);
    Rental rental;
    float totalRevenue = 0;

    printf("Report:\n");
    printf("------------------------\n");

    for (int i = 0; i < totalRentals; i++) {
        fread(&rental, sizeof(Rental), 1, file);
        printf("Car Model: %s\n", rental.carModel);
        printf("Number of Rentals: 1\n");
        printf("Revenue: $%.2f\n", rental.rentalPrice);
        printf("------------------------\n");
        totalRevenue += rental.rentalPrice;
    }

    printf("Total Revenue: $%.2f\n", totalRevenue);
    printf("-----------------\n");
}

int getTotalRentals(FILE *file) {
    int totalRentals = 0;
    rewind(file);
    fread(&totalRentals, sizeof(int), 1, file);
    return totalRentals;
}

void updateTotalRentals(FILE *file, int totalRentals) {
    rewind(file);
    fwrite(&totalRentals, sizeof(int), 1, file);
}
