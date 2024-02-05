#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> v(3, 100); // {100, 100, 100}
	// 1 vecto la so nguyen rong chua co phan tu nao 
	v.push_back(3); // {3}
	v.push_back(2); // {3, 2}
	v.push_back(1); // {3, 2, 1}
	v.push_back(0); // {3,2,1, 0}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}




	return 0;
}