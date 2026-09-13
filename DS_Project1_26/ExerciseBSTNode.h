#pragma once
#include "WorkoutQueueNode.h"
#include <vector>

class ExerciseBSTNode {
private:
	string exercise;
	vector<string> equipment;
	vector<string> dtime;
	vector<int> kcal;
	int count;

	ExerciseBSTNode* left;
	ExerciseBSTNode* right;

public:
	ExerciseBSTNode() {}
	~ExerciseBSTNode() {}

	void set() {

	}

	void search() {

	}
};
