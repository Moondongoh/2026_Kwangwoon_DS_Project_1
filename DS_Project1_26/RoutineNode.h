#pragma once
#include "WorkoutQueueNode.h"

class RoutineNode {
private:
	string exercise;
	string equipment;
	string dtime;
	int seconds;
	int kcal;

	RoutineNode* prev;
	RoutineNode* next;

public:
	RoutineNode() {}
	~RoutineNode() {}

	void set() {

	}
};
