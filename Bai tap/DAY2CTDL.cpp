#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	sort(a, a + n, greater<int>()); // sap xep giam dan 
	// do phuc tap thuat toan O(nlog(n)) 
	// ket hop giua thuat toan sap xep quicksort va heap 
}