#pragma once
#include "ExerciseBSTNode.h"

class ExerciseBST {
private:
	ExerciseBSTNode* root;
	ExerciseBSTNode* parent;
	string data;
	ExerciseBSTNode* target;

public:
	ExerciseBST();
	~ExerciseBST();

	void insert();
	void search();
	void print();
	void delete_node();
};
