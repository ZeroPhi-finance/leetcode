//  [1603 Design Parking System](https://leetcode.com/problems/design-parking-system/)
#include<iostream>
using namespace std;

class ParkingSystem {
private:
    vector<int> capacity; // Stores available spots: [big, medium, small]

public:
    // Constructor initializes the parking spots
    ParkingSystem(int big, int medium, int small) {
        capacity = {big, medium, small};
    }
    
    // Function to try adding a car of given type
    bool addCar(int carType) {
        int index = carType - 1; // Convert type to 0-based index

        if (capacity[index] > 0) {
            capacity[index]--;   // Occupy one spot
            return true;
        }

        return false; // No available spot
    }
};

/*
Time Complexity: O(1)
- Access and update to vector are constant time.

Space Complexity: O(1)
- Only stores 3 integers regardless of operations.
*/
