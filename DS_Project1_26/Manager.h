#pragma once
#include "WorkoutQueue.h"
#include "ExerciseBST.h"
#include "EquipmentBST.h"
#include "Routine.h"
#include <fstream>

using namespace std;

class Manager {
private:
	WorkoutQueue q;
	ExerciseBST exb;
	EquipmentBST eqb;
	Routine rt;
	ifstream fcmd;
	ofstream flog;

public:
	Manager();
	~Manager();

	void run(const char* command);

	void LOAD();
	void ADD();
	void QPOP();
	void SEARCH();
	void MAKERT();
	void PRINT();
	void DELETE();
	void EXIT();
};
