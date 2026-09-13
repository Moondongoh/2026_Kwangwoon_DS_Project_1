#pragma once
#include "WorkoutQueueNode.h"

class WorkoutQueue {
private:
	WorkoutQueueNode* head;
	WorkoutQueueNode* rear;
	int size = 0;

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
