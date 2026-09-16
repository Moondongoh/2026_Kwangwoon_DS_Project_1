#pragma once
#include <string>
#include <vector>
using namespace std;

struct EquipmentSet {
	// TODO: declare the member variables for a single set
	//       (exercise / duration / calories)
};

class EquipmentBSTNode {
private:
	string equipment;
	vector<EquipmentSet> sets;
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
