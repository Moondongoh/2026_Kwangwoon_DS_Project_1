#pragma once
#include "RoutineNode.h"
#include <string>

class Routine {
private:
	RoutineNode* head;
	RoutineNode* tail;
	int count;
	int total_sec;
	int total_kcal;
	int capacity;

public:
	Routine();
	~Routine();

	void push_front();
	void push_back();
	bool pop_front();
	bool pop_back();
	void delete_node();
	bool empty();
	bool full();
	bool exist();
	string print();
	int duration();
	int calories();
};
