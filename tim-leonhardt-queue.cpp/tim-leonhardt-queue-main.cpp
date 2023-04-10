#include <iostream>
#include "tim-leonhardt-queue-node.h"
#include "tim-leonhardt-queue-queue.h"

using namespace std;

int main() {
	Queue queue; 
	queue.getSize();
	queue.printQueue();
	queue.dequeue();
	queue.enqueue(9);
	queue.enqueue(12);
	queue.enqueue(0);
	queue.enqueue(72);
	queue.enqueue(100);
	queue.printQueue();
	queue.dequeue();
	queue.printQueue();
	queue.getSize();
}