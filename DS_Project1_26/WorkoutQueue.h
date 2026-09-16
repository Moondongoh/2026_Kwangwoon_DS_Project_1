#pragma once
#include "WorkoutQueueNode.h"

class WorkoutQueue {
private:
	WorkoutQueueNode* head;
	WorkoutQueueNode* rear;
	int size;
	int capacity;

public:
	WorkoutQueue();
	~WorkoutQueue();

	bool empty();
	bool full();
	bool exist();
	void push();
	WorkoutQueueNode* pop();
	WorkoutQueueNode* front();
};
