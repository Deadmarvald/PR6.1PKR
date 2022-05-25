#include <iostream>

using namespace std;

typedef int Info;
struct Elem
{
	Elem* next,
		* prev;
	Info info;
};

void dequeue(Elem*& p)
{
	delete p->prev->prev->prev;

	delete p->prev->prev;

	delete p->prev;
	delete p->next;

	delete p;
}

int main()
{
	Elem* p = new Elem;
	p->info = 1;

	p->prev = new Elem;
	p->prev->info = 2;

	p->prev->prev = new Elem;
	p->prev->prev->info = 4;

	p->prev->prev->prev = new Elem;
	p->prev->prev->prev->info = 3;

	p->next = NULL;

	p->prev->next = p;

	p->prev->prev->next = p;

	p->prev->prev->prev->next = p;

	p->prev->prev->prev->prev = p->prev;
	
	cout << p->info << endl; //1
	cout << p->prev->info << endl; //2
	cout << p->prev->prev->prev->info << endl; //3
	cout << p->prev->prev->info << endl; // 4

	dequeue(p);

	system("pause");
	return 0;
}