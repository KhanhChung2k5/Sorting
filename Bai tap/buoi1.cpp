#include <vector>
#include <iostream>
using namespace std;
using ll = long long;

int main2() {

	vector <int> v; // {}
	v.push_back(3); // {3}
	v.push_back(2); // {3, 2}
	v.push_back(1); // {3, 2, 1}
	v.push_back(5); // {3, 2, 1, 5}
	vector <int>::iterator it = v.begin();
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}

	return 0;
}