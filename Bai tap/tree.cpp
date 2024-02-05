#include <iostream>
using namespace std;
// khai bao cac kieu du lieu cua node
struct node
{
	int data;
	// cay nhi phan nen se tro vao trai va phai thay vi next nhu linkedlist
	struct node* pLeft;
	struct node* pRight;
};
typedef struct node NODE;
typedef NODE* TREE;
// ham khoi tao cay nhi phan
void CreateTree(TREE& t)
{
	// ban dau khong co node nenn cay nhi phan rong
	t = nullptr;
}
// them cac node vao cay nhi phan
void AddTree(TREE& t, int x)
{
	if (t == nullptr)
	{
		// neu cay rong thi tao 1 node moi va con tro trsi va phai cua node do se la null 
		NODE *p = new NODE();
		p->data = x;
		p->pLeft = nullptr;
		p->pRight = nullptr;
		// gan lai node do lam node goc
		t = p;
	}
	// neu du lieu nhap vao la be hon node goc 
	else
	{
		if (t->data > x)
		{
			// ta de quy lai de add node do vao ben trai
			AddTree(t->pLeft, x);
		}
		else if (t->data < x)
		{
			// tuong tu nhung de quy add vao phai
			AddTree(t->pRight, x);
		}
	}
}
void Duyet_NLR(TREE t)
{
	if (t != nullptr)
	{
		// duyet theo thu tu la node left right nen theo trinh tu se la data roi tro vao left va right
		cout << t->data << " ";
		Duyet_NLR(t->pLeft);
		Duyet_NLR(t->pRight);	
	}
}
void Duyet_LNR(TREE t)
{
	if (t != nullptr)
	{
		Duyet_LNR(t->pLeft);
		cout << t->data << " ";
		Duyet_LNR(t->pRight);
	}
}
void Duyet_LRN(TREE t)
{
	if (t != nullptr)
	{
		Duyet_LRN(t->pLeft);
		Duyet_LRN(t->pRight);
		cout << t->data << " ";
	}
}
int HeightTree(TREE t)
{
	if (t == nullptr || t->pLeft == nullptr && t->pRight == nullptr)
	{
		return 0;
	}
	else
	{
		int leftheight = HeightTree(t->pLeft);
		int rightheight = HeightTree(t->pRight);
		return max(leftheight, rightheight);
	}
}
int kq = 100000000;
void HeightTreemin(TREE t,int k) {
	if (t == nullptr || t->pLeft == nullptr && t->pRight == NULL )  {
		if (k < kq) {
			kq = k;
		}
		return;
	}
	// chieu cao toi thieu cua cay nhi phan
	// tu nut goc toi nut la gan nhat trong cay nhi phan 
	else {
		// nut la la nut ma p left = null va p right = null
		
		HeightTreemin(t->pLeft, k + 1);
		HeightTreemin(t->pRight, k + 1);
		return;
	}
}
void MENU(TREE& t)
{
	while (true) {
		system("cls");
		// khoi tao cac lua chon yeu cau thuc hien 
		cout << "\n\n\t\t ==========MENU========= ";
		cout << "\n1.Nhap du lieu cua tree";
		cout << "\n2.Xuat du lieu cua tree";
		cout << "\n3. Chieu cao cua tree";
		cout << "\4. Chieu cao toi thieu cua tree";
		cout << "\n0.Ket thuc";
		cout << "\n\n\t\t =====================";
		int luachon;
		cout << "\nNhap lua chon: ";
		cin >> luachon;
		if (luachon < 0 || luachon > 2) {
			cout << "Lua chon khong hop le ";
			system("pause");
		}
		else if (luachon == 1) {
			int x;
			cout << "\nNhap so nguyen x: ";
			cin >> x;
			AddTree(t, x);
		}
		else if (luachon == 2)
		{
			cout << "\n\t\t Duyet cay nhi phan theo NLR: ";
			Duyet_NLR(t);
			cout << "\nDuyet cay nhi phan LNR: ";
			Duyet_LNR(t);
			cout << "\nDuyet cay nhi phan LRN: ";
			Duyet_LRN(t);
		}
		else if (luachon == 3) {
			int cao = HeightTree(t);
			cout << "\n\t\t\t Chieu cao cua cay nhi phan la: " << cao;
		}
		else {
			HeightTreemin(t, 0);
			cout << "\n\t\t\t\t Chieu cao min cua cay nhi phan la: " << kq;
		}
	}
}

int main4() {
	TREE t;
	CreateTree(t);
	MENU(t);
	system("pause");
	return 0;
}