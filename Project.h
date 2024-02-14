#pragma once
#include <vector>
#include <string>
#include "Worker.h"

class Project {
public:
	std::string name;
	std::vector<Worker> workers;

	Project(std::string name) {
		this->name = name;
	}

	void addWorker(Worker worker) {
		workers.push_back(worker);
	}
};

