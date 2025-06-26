// [657 Robot Return to Origin](https://leetcode.com/problems/robot-return-to-origin/)
#include<iostream>
using namespace std;

// Function to check if robot returns to origin after given moves
bool judgeCircle(string moves) {
    int x = 0, y = 0; // Position coordinates

    for (char move : moves) {
        if (move == 'U') ++y;
        else if (move == 'D') --y;
        else if (move == 'R') ++x;
        else if (move == 'L') --x;
    }

    // Robot returns to origin if x and y are both 0
    return x == 0 && y == 0;
}

/*
Time Complexity: O(n)
- We process each move once.

Space Complexity: O(1)
- Only a few integer variables used regardless of input size.
*/
