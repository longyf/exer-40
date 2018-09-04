#include <iostream>
#include <vector>
#include "GetLeastNumbers_Solution.h"
#include "/Users/long/workarea/to_offer/quickSort/print.h"
using namespace std;
void test1() {
	vector<int> v1 = {4, 5, 1, 6, 2, 7, 3, 8};
	vector<int> v2;
	v2 = GetLeastNumbers_Solution(v1, 9);
	print(v2);
}
void test2() {
	vector<int> v1 = {1, 1, 1, 1};
	vector<int> v2;
	v2 = GetLeastNumbers_Solution(v1, 2);
	print(v2);
}
void test3() {
	vector<int> v1 = {1};
	vector<int> v2;
	v2 = GetLeastNumbers_Solution(v1, 0);
	print(v2);
}

int main() {
	test1();
	test2();
	test3();
	return 0;
}
	
