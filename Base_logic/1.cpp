//  [412 Fizz Buzz](https://leetcode.com/problems/fizz-buzz/)
#include <vector>
#include <string>
using namespace std;

// Function to generate FizzBuzz sequence up to number n
vector<string> fizzBuzz(int n) {
    vector<string> result;  // Stores the final FizzBuzz output

    // Iterate from 1 to n
    for (int i = 1; i <= n; i++) {
        // If divisible by both 3 and 5, add "FizzBuzz"
        if (i % 3 == 0 && i % 5 == 0) {
            result.push_back("FizzBuzz");
        }
        // If divisible only by 3, add "Fizz"
        else if (i % 3 == 0) {
            result.push_back("Fizz");
        }
        // If divisible only by 5, add "Buzz"
        else if (i % 5 == 0) {
            result.push_back("Buzz");
        }
        // Otherwise, add the number as a string
        else {
            result.push_back(to_string(i));
        }
    }

    return result;
}

/*
Time Complexity: O(n)
- We loop from 1 to n exactly once.

Space Complexity: O(n)
- We store n strings in the result vector.
*/
