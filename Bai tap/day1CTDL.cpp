#include <iostream>
#include <vector>
using namespace std;
int main() {
	//vector<int> v(3, 100); // {100, 100, 100}
	//// 1 vecto la so nguyen rong chua co phan tu nao 
	//v.push_back(3); // {3}
	//v.push_back(2); // {3, 2}
	//v.push_back(1); // {3, 2, 1}
	//v.push_back(0); // {3,2,1, 0}
	//// {100, 100, 100, 3, 2,1, 0}
	////cout << v.size() << endl;
	////for (int i = 0; i < v.size(); i++) {
	////	cout << v[i] << " ";
	////}
	////// ky thuat range base for loop
	////for (int x : v) {
	////	cout << x << ' ';
	////}
	//// se gan x bang 1 ptu trong v cu the ma xuat ra bat dau tu 100 100 100 3 2 1 0
	//vector<int>::iterator it = v.begin();
	//// :: la toan tu pham vi 
	//cout << *it << " ";
	//// 1 cach khac de duyet vector thong qua iterator 
	//vector <int>::iterator it;
	//for (it = v.begin(); it != v.end(); it++) {
	//	cout << *it << " ";
	//}

	//// 1 cach khac de input vao vector 
	//vector<int>v;
	//int n; cin >> n;
	//for (int i = 0; i < n; i++) {
	//	int tmp;
	//	cin >> tmp;
	//	v.push_back(tmp);
	//}
	//// or kh can push_back 
	//vector<int>v(n);
	//for (int i = 0; i < n; i++) {
	//	cout << v[i];
	//}
	//// dung vector de duyet 
	//// insert dung de chen 
	//// erase dung de xoa 
	//// pop_back dung de xoa phan tu o cuoi 
	//v.insert(v.begin() + 4, 100);
	//v.erase(v.begin() + 2);
	//v.pop_back();
	//// dung auto de  khai bao dung de gan 1 ptu 
	//// 1. them 1 pha tu vao cuoi vector 
	//// in ra emty neu vector khong rong 
	//int n; cin >> n;
	//vector<int>v(n);
	//for (int i = 0; i < n; i++) {
	//	cin >> v[i];
	//}
	//v.push_back(100); // 1

	// pair 
	pair<int, int> p; // khai bao pair p co kieu 2 so nguyen 
	// gom first and second 
	pair<int, int> p = make_pair(10, 20); 
	// OR 
	pair<>
	cout << p.first << ' ' << p.second << endl;












	return 0;
}