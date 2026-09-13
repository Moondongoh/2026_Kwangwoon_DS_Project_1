#pragma once
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

class WorkoutQueueNode {
private:
	string exercise;
	string equipment;
	string dtime;
	int kcal;

	WorkoutQueueNode* next;
	WorkoutQueueNode* prev;

public:
	WorkoutQueueNode() {}
	~WorkoutQueueNode() {}

	void set() {

	}

	bool exist() {
		return false;
	}
};
