#ifndef GET_LEAST_NUMBERS_SOLUTION
#define GET_LEAST_NUMBERS_SOLUTION
#include <iostream>
#include <vector>
#include "/Users/long/workarea/to_offer/quickSort/Partition.h"
#include "/Users/long/workarea/to_offer/quickSort/print.h"
using namespace std;
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> result;
        if (input.empty() || k > input.size() || k == 0) return result;//pay attention to k == 0.
        int begin = 0;
        int end = input.size() - 1;
        
        int pivot = partition(input, begin, end);
        while (true) {
            if (pivot == k - 1) {//if k == 0, if is always false.
				print(input);
                for (int index = 0; index != k; index++) {
                    result.push_back(input[index]);
                }
                return result;
            }
            else if (pivot > k - 1) {
                end = pivot - 1;
                pivot = partition(input, begin, end);
            }
            else {
                begin = pivot + 1;
                pivot = partition(input, begin, end);
            }
        }
    }

#endif
