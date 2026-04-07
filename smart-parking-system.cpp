#include <iostream>
using namespace std;

const int SIZE = 5;   // Total parking slots
int parking[SIZE] = {0};  // 0 = empty, 1 = occupied

// Function to park vehicle
void parkVehicle() {
    for(int i = 0; i < SIZE; i++) {
        if(parking[i] == 0) {
            parking[i] = 1;
            cout << "Vehicle parked at slot " << i + 1 << endl;
            return;
        }
    }
    cout << "Parking Full!" << endl;
}

// Function to remove vehicle
void removeVehicle() {
    int slot;
    cout << "Enter slot number to remove vehicle: ";
    cin >> slot;

    if(slot < 1 || slot > SIZE) {
        cout << "Invalid slot number!" << endl;
        return;
    }

    if(parking[slot - 1] == 0) {
        cout << "Slot already empty!" << endl;
    } else {
        parking[slot - 1] = 0;
        cout << "Vehicle removed from slot " << slot << endl;
    }
}

// Display parking status
void display() {
    cout << "\nParking Status:\n";
    for(int i = 0; i < SIZE; i++) {
        cout << "Slot " << i + 1 << ": ";
        if(parking[i] == 0)
            cout << "Empty";
        else
            cout << "Occupied";
        cout << endl;
    }
}

// MAIN FUNCTION (VERY IMPORTANT)
int main() {
    int choice;

    do {
        cout << "\n--- Smart Parking System ---\n";
        cout << "1. Park Vehicle\n";
        cout << "2. Remove Vehicle\n";
        cout << "3. Display Parking\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                parkVehicle();
                break;
            case 2:
                removeVehicle();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while(choice != 4);

    return 0;  // REQUIRED
}
