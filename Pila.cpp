#include <iostream>
using namespace std;

class Pila {
private:
	class Node {
	public:
		char letter;
		Node* next;
	};
	Node* pila;
public:
	Pila();
	void deleteNode();
	void addNewNode(char letter);
	void print();
};

Pila::Pila() {
	pila = NULL;
}

void Pila::addNewNode(char l){
	Node* newNode = new Node();
	newNode->letter = l;
	newNode->next = pila;
	pila = newNode;
	cout <<l<<" has be added to pila successfuly" << endl;
}

void Pila::print() {
	Node* aux;
	for (aux = pila; aux != NULL; aux = aux->next)
	{
		cout << aux->letter << endl;
	}
}

void Pila::deleteNode() {
	int l;
	Node* aux = pila;
	l = aux->letter;
	pila = aux->next;
	cout << aux->letter << " has be eliminated" << endl;
	delete aux;
}

int main() {
	char letter;
	int iterations;
	cout << "How many elements you need add" << endl;
	cin >> iterations;

	Pila* object = new Pila();
	for (int i = 0; i < iterations; i++) {
		cout << "Enter letter to add: " << endl;
		cin >> letter;
		object->addNewNode(letter);
	}
	int opc;

	do {
		cout << "What do now?" << endl;
		cout << "(1) remove one\n(2) print\n(3) exit" << endl;
		cout << ": ";
		cin >> opc;
		
		switch (opc)
		{
		case 1:
			object->deleteNode();
			break;
		case 2:
			object->print();
			break;
		case 3:
			break;
		default:
			break;
		}
	} while (opc != 3);


	return 0;
}