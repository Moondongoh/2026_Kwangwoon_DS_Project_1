#pragma once
#include "ExerciseBSTNode.h"

class ExerciseBST {
private:
	ExerciseBSTNode* root;

public:
	ExerciseBST();
	~ExerciseBST();

	void insert();
	void search();
	void print();
	void delete_node();
};
