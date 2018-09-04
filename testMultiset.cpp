#include <set>
#include <iostream>
using namespace std;
void print(multiset<int> &s1) {
	for (auto iter = s1.begin(); iter != s1.end(); iter++) {
		cout<<*iter<<" ";
	}
	cout<<endl;
}
	
int main() {
	multiset<int> s1;
	s1.insert(2);
	s1.insert(1);
	s1.insert(3);
	print(s1);
	s1.erase(2);
	print(s1);
	s1.insert(3);
	print(s1);
	s1.insert(0);
	print(s1);

	return 0;
}
	
