#ifndef GET_LEAST_NUMBERS_MULTISET_H
#define GET_LEAST_NUMBERS_MULTISET_H
#include <set>
#include <vector>
#include <iostream>
using namespace std;
vector<int> GetLeastNumbers_Multiset(const vector<int> &input, int k) {
	vector<int> v1;
	multiset<int> s1;
	if (input.empty() || k <= 0 || k > input.size())
		return v1;
	for (auto iter = input.begin(); iter != input.end(); iter++) {
		if (s1.size() < k) s1.insert(*iter);
		else {
			auto largest = s1.end();
			largest--;
			if (*largest > *iter) {
				s1.erase(*largest);
				s1.insert(*iter);
			}
		}
	}

	for (auto iter = s1.begin(); iter != s1.end(); iter++) {
		v1.push_back(*iter);
	}
	return v1;
}
#endif
