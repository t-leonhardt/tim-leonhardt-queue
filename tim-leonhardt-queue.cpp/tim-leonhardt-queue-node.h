#pragma once

class Node {
public:
	Node* next;
	int data;

	Node() {
		next = nullptr;
		data = 0;
	}
};