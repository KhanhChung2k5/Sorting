#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
//int tong(int n) {
//	int ans = 0;
//	while (n) {
//		ans += n % 10;
//		n /= 10;
//	}
//	return ans;
//}
//bool cmp(int a, int b) {
//	if (tong(a) != tong(b)) {
//		return tong(a) < tong(b);
//	}
//	else {
//		return a > b;
//	}
//}

// case: xep cac kc toa do 
//bool cmp(pair<int, int> a, pair<int, int> b) {
//	// xet kc toi goc toa do 
//	// xet hoanh do 
//	// xet tung do 
//	// kc toi goc toa do 
//	float kca = sqrt(a.first * a.first + a.second * a.second);
//	float kcb = sqrt(b.first * b.first + b.second * b.second);
//	if (kca != kcb) {
//		return kca < kcb;
//	}
//	else {
//		if (a.first != b.first) {
//			return a.first < b.first;
//		}
//		else {
//			return a.second < b.second;
//		}
//	}
//}

// nhap vao n so va dem xem cac so nao co nhieu so le hon thi dung truoc 
int le(int a) {
	int ans = 0;
	while (a) {
		if (a % 2 == 1) {
			ans++;
		}
		a /= 10;
	}
	return ans;
}
bool cmp(int a, int b) {
	if (le(a) != le(b)) {
		// cho so nao co nhieu chu so hon dung truoc 
		return le(a) > le(b);
	}
	else {
		return a < b;
	}
}

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
	// sort khi sap xep pair thi se so sanh first trc roi toi second 
	// ex: sap xep 1 mang ma so co tong cac chu so lon hon dung truoc 
	sort(a, a + n, cmp);
	auto it = lower_bound(a, a + n, 3);
	// tim kiem va tra phan tu lon hon bang 3
	cout << *it << " ";
	cout << (it - a) << endl; // tra ve vi tri it 
	return 0;
}