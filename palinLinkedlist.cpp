#include <iostream>

using namespace std;
struct node {
	char c;
	node* next;
};

node* append (node* tail, node* newNode) {
	tail->next = newNode;
	newNode->next = NULL;
	return newNode;
}

node* find(node* head, char s) {
	node* current = head;
	while (current->next == NULL) {
		if (current->c == s) {
			return current;
		}
		current = current->next;
	}
	return NULL;
}

node* reverse(node* head) {
	node* previous = NULL;
	node* current = head;
	while (current->next != NULL) {
		node* newCurrent = new node;

		newCurrent->c = current->c;
		newCurrent->next = previous;
		previous = newCurrent;
		current = current->next;
	}

	return previous;

}

void print (node* head) {
	node* current = head;
	while (current->next != NULL) {
		cout << current->c << " "; 
		current = current->next;
	}
	cout << endl;
}



int main () {
	node* head = new node();
	node* tail = NULL;
	int input = 1;
	char c;
	node* n;
	node* newNode;
	node* reverseHead;
	std::cin >> input;
	
	while (input != 0) {
		cout << "Enter 1 to append, 2 to find a char, 3 to print, 4 to reverse 0 to stop" << endl;
		cin >> input;
		switch(input) {
			case 1:
					cout << "Enter new charcher to append" << endl;
					cin >> c;
					if (tail == NULL) {
						head->c = c;
						head->next = NULL;
						tail = head;
						break;
					}
					newNode = new node();
					newNode->c = c;
					newNode->next = NULL;
					tail = append(tail, newNode);
					break;
			case 2:
				cout << "enter char to find " << endl;
				cin >> c;
				n = find(head, c);
				if (n->next != NULL) {
					cout << "char found" << endl;
				}
				break;
			case 3:
				cout << "current list is ";
				print(head);
				break;
			case 4:
				reverseHead = reverse(head);
				cout << "reverse list is " ;
				print(reverseHead);
				break;
			default : 
				cout << "Nothing to do" << endl;

		}
	}



}