#include <iostream>
#include <string>
#include <vector>
using namespace std;
// ham tinh de qui 
//int Giaithua(int n) {
//	// neu n <=0 thi giai thua = 1
//	if (n <= 0) {
//		return 1;
//	}
//	// de quy lai ham tinh de qui 
//	return n * Giaithua(n - 1);
//}
void Merge(int a[], int m, int l, int r) {
	vector<int> x(a + l, a + m + 1);
	vector<int> y(a + m + 1, a + r + 1);
	int i = 0, j = 0;
	while (i < x.size() && j < y.size()) {
		if (x[i] <= y[j]) {
			a[l] = x[i];
			l++;
			i++;
		}
		else {
			a[l] = y[j];
			l++;
			j++;
		}
	}
	while (i < x.size()) {
		a[l] = x[i];
		l++;
		i++;
	}
	while (j < y.size()) {
		a[l] = y[j];
		l++;
		j++;
	}
}
void Mergesort(int a[], int l, int r) {
	if (l >= r) {
		return;
	}
	int m = (l + r) / 2;
	Mergesort(a, l, m);
	Mergesort(a, m + 1, r);
	Merge(a, l, m, r);
}
int main5() {
	int n;
	cout << "Nhap giai thua can tinh: ";
	cin >> n;
	/*int giaithua = Giaithua(n);
	cout << "Tong do la:" << giaithua << endl;*/




	return 0;
}