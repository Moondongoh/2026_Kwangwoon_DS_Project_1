#pragma once
#include "WorkoutQueueNode.h"
#include <vector>

class EquipmentBSTNode {
private:
	string equipment;
	vector<string> exercise;
	vector<string> dtime;
	vector<int> kcal;
	int count;

	EquipmentBSTNode* left;
	EquipmentBSTNode* right;

public:
	EquipmentBSTNode() {}
	~EquipmentBSTNode() {}

	void set() {

	}

	void search() {

	}
};
