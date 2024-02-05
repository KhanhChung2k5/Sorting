#include <iostream>
using namespace std;
// khai bao cac kieu du lieu cua node 
struct Node {
	int data;
	Node* next;
};
// de chuyen tu Node* thanh node
typedef struct Node* node;
// cap phat dong mot node moi
node makebnode(int x) {
	node tmp = new Node();
	tmp->data -= x;
	tmp->next = NULL;
	return tmp;
}
struct Linkedlist {
	node head;
	node tail;
};
void Createlist(Linkedlist& l) {
	l.head = NULL;
	l.tail = NULL;
}
bool empty(node a) {
	return a == NULL;
}
int Sizeof(node a) {
	int count = 0;
	while (a != NULL) {
		count++;
		a = a->next;
	}
	return count;
}
void Addhead(Linkedlist& l ,node node) {
	if (l.head == NULL) {
		l.head = node;
		l.tail = node;
	}
	else {
		node->next = l.head;
		l.head = node;
	}
}
void Addtail(Linkedlist& l, node node) {
	if (l.head == NULL) {
		l.head = node;
		l.tail = node;
	}
	else {
		l.tail->next = node;
		l.tail = node;
	}
}
void Sapxep(node& a) {
	for (node p = a; p->next = nullptr; p = p->next) {
		node min = p;
		for (node q = p->next; q != nullptr; q = q->next) {
			if (q->data < min->data) {
				min = q;
			}
		}
		int tmp = min->data;
		min->data = p->data;
		p->data = tmp;
	}
}
// tim phan tu node bat ky 
node search(Linkedlist l, int x) {
	node node = l.head;
	while (node != nullptr && node->data != x) {
		node = node->next;
	}
	if (node != nullptr) {
		return node;
	}
	return nullptr;
}
void Delete(Linkedlist l, int pos) {
	node a = l.head;
	if(pos <=0 || pos > Sizeof(a)) return;
	node truoc = nullptr, sau = a;
	for (int i = 1; a != nullptr && i <= pos; i++) {
		truoc = a;
		a = a->next;
		sau = a;
	}

	if (truoc == nullptr) {
		a = a->next;
		delete sau;
		return;
	}

	truoc->next = sau->next;
	delete sau;
}


