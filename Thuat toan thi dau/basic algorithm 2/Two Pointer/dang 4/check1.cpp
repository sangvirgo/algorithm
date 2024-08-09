#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node {
public:
	int data;
	Node* next;

	Node(int data) {
		this->data = data;
		next = NULL;
	}
};

// initialize a new head for the linked list
Node* head = NULL;
class Linkedlist {
public:
	// insert new value at the end (for correct order)
	void insert(int value) {
		Node* newNode = new Node(value);
		if (head == NULL)
			head = newNode;
		else {
			Node* temp = head;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = newNode;
		}
	}

	// detect if there is a loop in the linked list
	Node* detectLoop() {
		if (head == NULL || head->next == NULL) {
			return NULL;
		}

		Node *slowPointer = head, *fastPointer = head;

		while (fastPointer != NULL && fastPointer->next != NULL) {
			slowPointer = slowPointer->next;
			fastPointer = fastPointer->next->next;
			if (slowPointer == fastPointer)
				break;
		}

		if (slowPointer != fastPointer)
			return NULL;

		slowPointer = head;
		while (slowPointer != fastPointer) {
			slowPointer = slowPointer->next;
			fastPointer = fastPointer->next;
		}

		return slowPointer;
	}

	// get the length of the loop
	int getLoopLength(Node* loopStart) {
		int length = 1;
		Node* temp = loopStart->next;
		while (temp != loopStart) {
			length++;
			temp = temp->next;
		}
		return length;
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll a, b;
	cin >> a >> b;

	Linkedlist l1;
	map<int, Node*> remainderMap;

	ll quotient = a / b;
	ll remainder = a % b;
	cout << quotient << ".";

	int pos = 0;
	Node* loopStart = NULL;

	while (remainder != 0) {
		if (remainderMap.count(remainder) > 0) {
			loopStart = remainderMap[remainder];
			break;
		}

		remainderMap[remainder] = head;
		remainder *= 10;
		int digit = remainder / b;
		l1.insert(digit);
		remainder %= b;

		pos++;
	}

	if (loopStart == NULL) {
		Node* temp = head;
		while (temp != NULL) {
			cout << temp->data;
			temp = temp->next;
		}
		cout << "(0)" << endl;
	} else {
		Node* temp = head;
		while (temp != loopStart) {
			cout << temp->data;
			temp = temp->next;
		}
		cout << "(";
		Node* loopTemp = loopStart;
		do {
			cout << loopTemp->data;
			loopTemp = loopTemp->next;
		} while (loopTemp != loopStart);
		cout << ")" << endl;
	}

	return 0;
}
