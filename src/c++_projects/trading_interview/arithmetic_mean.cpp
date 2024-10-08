/*
Project 22: Arithmetic Mean

You are given an array A of N integers and an integer n. Your task is to compute how many ways one can choose a contiguous fragment of A that has am arithmetic mean equal to n. The arithmetic mean (average) of a fragment is the sum of the elements of the fragment divided by its length. For example, the arithmetic mean of [1, 3, 3, 5] = 12/4 = 3.

Write a function which returns the number of contiguous fragments of A whose arithmetic means are equal to n. Examples:
Given A = [3, 2, 4] and n = 3, your function should return 3, since the arithmetic means of fragments [3], [2, 4], [3, 2, 4] are equal to 3.
Given A = [-1, 3, 2, -2] and n = 1, your function should return 2, since fragments [-1, 3] and [3, 2, -2] have an arithmetic mean of 1.
Given A = [2, 3, 6] and n = 5, your function should return 0, since there exist no contiguous fragments whose arithmetic mean is equal to 5.
Write an efficient algorithm for the following assumptions:
N is an integer within the range [1, ..., 100,000]
n is an integer within the range [-100,000,000,000, 100,000,000,000]
Each element of array A is an integer within the range [-100,000,000,000, 100,000,000,000]
*/

#include <iostream>
#include <vector>
#include <numeric>
#include "arithmetic_mean.h"
using namespace std;

int getArithmeticMeanContiguousFragmentsCount(const vector<int>& arr, const int target) {
    int count = 0;
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = i; j < arr.size(); j++) {
            int arithmeticMean;
            arithmeticMean = accumulate(arr.begin() + i, arr.begin() + j + 1, 0) / (j - i + 1);
            if (arithmeticMean == target) {
                ++count;
            }
        }
    }
    return count;
}
