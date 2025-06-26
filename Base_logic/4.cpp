//  [867 Transpose Matrix](https://leetcode.com/problems/transpose-matrix/)
#include<iostream>
using namespace std;
class Solution {
public:
    // Function to return the transpose of a matrix
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // Create a matrix of size cols x rows for the transpose
        vector<vector<int>> result(cols, vector<int>(rows));

        // Fill the transpose matrix
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                result[j][i] = matrix[i][j];

        return result;
    }
};

/*
T = m * n
Time Complexity: O(T) Not O(T^2)
- We iterate through every element once (m rows * n cols). and also grow with numbers of elemetns lineraly.

Space Complexity: O(T) Not O(T^2)
- We allocate a new matrix of the same number of elements.
*/
