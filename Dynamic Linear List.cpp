#include <iostream>

using namespace std;

bool More()
{
	char ch;
	do {
		cout << "Enter 'y' or 'n': ";
		cin >> ch;
	} while (ch != 'y' && ch != 'n');
	
	return (ch == 'y');
}

typedef struct Element* po;
struct Element
{
	int data;
	po Next;
};


int main()
{
	po p, beggy, endy;
	int x;
	beggy = NULL;
	endy = NULL;

	while (More())
	{
		cout << "Enter a value: ";
		cin >> x;
		p = new Element;
		p->data = x;
		p->Next = NULL;
		if (beggy == NULL)
		{
			beggy = p;
		}
		else
		{
			endy->Next = p;
		}
		endy = p;
	}
	p = beggy;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->Next;
	}

	return 0;
}

