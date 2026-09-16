#pragma once
#include <string>
#include <vector>
using namespace std;

struct ExerciseSet {
	// TODO: declare the member variables for a single set
	//       (equipment / duration / calories)
};

class ExerciseBSTNode {
private:
	string exercise;
	vector<ExerciseSet> sets;
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
