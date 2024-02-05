#include <iostream>
#include <vector>
using namespace std;
void Merge(int a[], int l, int m, int r) {
	// khoi tao mang co 100 ptu va chia 3 phan la ben 
	// chia mang a lam 2 mang con theo thuat toan la x va y 
	// x sẽ tu a toi m 
	// y sẽ từ m + 1 tới r 
	vector<int> x(a + l, a + m + 1);
	vector<int> y(a + m + 1, a + r + 1);
	// tuong ung vs x la i va y la j 
	int i = 0, j = 0;
	// dieu kien de ket thuc la duyet toi khi vuot ngoai mang x or y 
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
	// toi day se duyet them dieu kien la so phan tu cua x nhieu hon y hoac y nhieu hon x
					// ko con du phan tu de so sanh nen se gan truc tiep ve a[l]
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
int Partition(int a[], int l, int r) {
	// gan phan tu ngoai cung ben phai
	int pivot = a[r];
	// ban dau cho i = -1
	int i = l - 1;
	for (int j = l; j < r; j++) {
		// duyet bo qua cac ptu lon hon chot 
		if (a[j] <= pivot) {
			// neu co ptu be hon chot thi tang i len tuc la tang i len vi tri lon hon chot 
			++i;
			// doi cho cua ptu i vua tang va j de don ptu do vce ben phai 
			swap(a[i], a[j]);
		}
	}
	++i;
	swap(a[i], a[r]);
	return i;
}
void Quicksort(int a[], int l, int r) {
	if (l >= r) return;
	int p = Partition(a, l, r);
	Quicksort(a, l, p - 1);
	Quicksort(a, p + 1, r);
}
void heapify(int a[], int n, int i) {
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	int largest = i;
	if (l < n && a[l] > a[largest]) {
		largest = l;
	}
	if (r < n && a[r] > a[largest]) {
		largest = r;
	}
	if (largest != i) {
		swap(a[i], a[largest]);
		heapify(a, n, largest);
	}
}
void heapsort(int a[], int n) {
	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(a, n, i);
	}
	for (int i = n - 1; i >= 0; i--) {
		swap(a[i], a[0]);
		heapify(a, i, 0);
	}


}
int main() {
	int n;
	cin >> n;
	int a[100];
	//srand(time(NULL));
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	heapsort(a, n);
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}

	cout << endl;
	return 0;
}
