#pragma once
#include "EquipmentBSTNode.h"

class EquipmentBST {
private:
	EquipmentBSTNode* root;

public:
	EquipmentBST();
	~EquipmentBST();

	void insert();
	void search();
	void print();
	void delete_node();
};
