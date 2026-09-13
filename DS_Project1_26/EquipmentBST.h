#pragma once
#include "EquipmentBSTNode.h"

class EquipmentBST {
private:
	EquipmentBSTNode* root;
	EquipmentBSTNode* parent;
	string data;
	EquipmentBSTNode* target;

public:
	EquipmentBST();
	~EquipmentBST();

	void insert();
	void search();
	void print();
	void delete_node();
};
