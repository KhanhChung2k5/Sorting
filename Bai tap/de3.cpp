   m#include <iostream>
#include <cmath>
using namespace std;
// dung ham bool de kiem tra 1 so co phai la so nguyen to hay ko 
bool isPrime(int num)
{
	if (num < 2)
	{
		return false;
	}
		for (int i = 0; i <= sqrt(num); i++)
		{
			if (num % i == 0)
			{
				return false;
			}
		}
	}
}
// bai 1 
int main()
{
	/*
	// kieu du lieu cua a b c theo de bai la kieu sao thuc 
	float a, b, c;
	// nhap he so cua x^2
	cout << "Nhap he so cua a: ";
	cin >> a;
	// nhap he so cua x 
	cout << "Nhap he so cua b: ";
	cin >> b;
	// nhaop he so cua so thuc 
	cout << "Nhap he so cua c: ";
	cin >> c;
	// tinh pt bac 2 thi ta xet dk cua delta nen tinh delta theo cthuc
	double Delta = b * b - 4 * a * c;
	// xet cac dieu kien  cua delta 
	// neu delta > ) thi pt co hai nghem phan biet 
	if (Delta > 0)
	{
		double x1 = (( - b + sqrt(Delta)) / (2 * a));
		double x2 = ((-b - sqrt(Delta)) / (2 * a));
		cout << "Phuong trinh co hai nghiem phan biet la: x1 = " << x1 << "  " << "x2 = " << x2;
	}
	else if (Delta = 0)
	{
		double x = (-b / 2 * a);
		cout << "Phuong trinh co nghiem kep la: x = " << x;
	}
	else
	{
		cout << "Phuong trinh vo nghiem ";
	}
	*/

}