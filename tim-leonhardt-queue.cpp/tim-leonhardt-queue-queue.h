#pragma once
#include <iostream>
#include "tim-leonhardt-queue-node.h"

using namespace std;

class Queue {
private:

	Node* head;
	Node* tail;
	int size;

public:

	Queue() {
		head = tail = nullptr;
		size = 0;
	}

	~Queue() {
		while (head != nullptr ) {
		
			Node* temp = head;
			head = temp->next;
			size--;
			delete temp;
		}
		cout << "Queue has been destructed" << endl;
	}

	void enqueue(int value) {
		Node* temp = new Node();
		temp->data = value;

		if (head == nullptr && tail == nullptr)
		{
			head = temp;
			tail = temp;
			head->next = tail;
		}
		else 
		{
			tail->next = temp;
			tail = temp;
		}
		size++;
		cout << value << " has been added" << endl;
	}

	void dequeue() {
		if (head == nullptr)
		{
			cout << "Element cannot be removed. The queue is empty" << endl;
		}
		else
		{
			Node* temp = head;
			head = temp->next;
			cout << temp->data << " has been removed" << endl;
			size--;
			delete temp;
		}
	}

	void getSize() {
		cout << "The size of the queue is: " << size << endl;
	}

	void printQueue() {
		cout << "The currenct Queue: ";
		Node* temp = head;
		if (head == nullptr) {
			cout << endl;
		}
		else {
			while (temp != NULL)
			{
				cout << temp->data << " ";
				temp = temp->next;
			}
			delete temp;

			cout << endl;
		}
	}
};