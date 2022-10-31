#include <iostream>
using namespace std;

class Pila
{
private:
	class Node
	{
	public:
		char letter;
		Node *next;
		Node(int d)
		{
			letter = d;
			next = NULL;
		}
	};
	Node *pila;

public:
	Pila();
	void deleteNode();
	void addNewNode(char letter);
	void print();
};

Pila::Pila()
{
	pila = NULL;
}

void Pila::addNewNode(char l)
{
	Node *newNode = new Node(l);
	newNode->next = pila;
	pila = newNode;
	cout << l << " has be added to pila successfuly" << endl;
}

void Pila::print()
{
	Node *aux;
	for (aux = pila; aux != NULL; aux = aux->next)
	{
		cout << aux->letter << endl;
	}
}

void Pila::deleteNode()
{
	int l;
	Node *aux = pila;
	l = aux->letter;
	pila = aux->next;
	cout << aux->letter << " has be eliminated" << endl;
	delete aux;
}

int main()
{
	char letter;
	int iterations;
	cout << "How many elements you need add" << endl;
	cin >> iterations;

	Pila *object = new Pila();
	for (int i = 0; i < iterations; i++)
	{
		cout << "Enter letter to add: " << endl;
		cin >> letter;
		object->addNewNode(letter);
	}
	int opc;
	bool flag = true;

	do
	{
		cout << "What do you want to do now?" << endl;
		cout << "(1) remove one\n(2) print\n(3) exit" << endl;
		cin >> opc;

		if (opc == 1)
		{
			object->deleteNode();
		}
		else if (opc == 2)
		{
			object->print();
		}
		else if (opc == 3)
		{
			flag = false;
		}
		else
		{
			cout << "Invalid option" << endl;
		}
	} while (opc != 3);

	return 0;
}