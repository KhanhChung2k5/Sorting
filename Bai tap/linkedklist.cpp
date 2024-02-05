#include <iostream>
#include <vector>
#include <list>
using namespace std;
struct Node {
	int data;
	Node* next;
};
Node* CreateNode(int init_data)
{
	Node* node = new Node;
	node->data = init_data;
	node->next = NULL;     
	return node;
}
struct LinkedList {
	Node* head;
	Node* tail;
};
void CreateList(LinkedList& l)
{
	l.head = NULL;
	l.tail = NULL;
}
void AddHead(LinkedList& l, Node* node)
{
	if (l.head == NULL)
	{
		l.head = node;
		l.tail = node;
	}
	else
	{
		node->next = l.head;
		l.head = node;
	}
}
void AddTail(LinkedList& l, Node* node)
{
	if (l.head == NULL)
	{
		l.head = node;
		l.tail = node;
	}
	else
	{
		l.tail->next = node;
		l.tail = node;
	}
}
void InsertAfterQ(LinkedList& l, Node* p, Node* q)
{
	if (q != NULL)
	{
		p->next = q->next;
		q->next = p;
		if (l.tail == q)
			l.tail = p;
	}
	else
		AddHead(l, p);
}

int CountNumNode(LinkedList l) {
	Node *a = l.head;
	int count = 0;
	while (a != NULL) {
		a = a->next;
		count++;
	}
	return count;
}

void InsertAfterPosition(LinkedList &l, int data, int pos) {
	// Check pos < 0 --> loi
	if (pos < 0) {
		cout << "Vi tri khong hop le (negative)" << endl;
	}
	/*
	else if (CountNumNode(l) < pos) {
		// Check pos > tong so Node 
		// Ma tongSoNode = Count(l)
		cout << "Vi tri khong hop le (out of length)" << endl;
	}*/
	
	// Tim  vi tri
	int i = 0;
	Node* a = l.head;
	Node* b = NULL;
	while (i < pos) {
		i++;
		b = a;
		a = a->next;
	}

	Node* res = CreateNode(data);
	res->next = a;
	if (b != NULL) {
		b->next = res;
	}

	if (l.head == a) {
		l.head = res;
	}
}

void PrintList(LinkedList l) {
	Node* a = l.head;
	int i = 0;
	while (a != NULL) {
		cout << "node " << i << ": " << a->data << endl;
		a = a->next;
		i++;
	}
}
int main3() {
	LinkedList l;
	CreateList(l);

	// Tao 1 node co data = 5
	Node* a = CreateNode(5);

	Node* b = CreateNode(6);

	a->next = b;

	l.head = a;
	l.tail = b;
	//PrintList(l);

	InsertAfterPosition(l, 4, 0);
	PrintList(l); // 4, 5, 6

	return 0;
}