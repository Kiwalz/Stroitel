#pragma once
#include <string>

class Task {
public:
	std::string name;
	std::string description;
	double estimatedTime;
	bool isCompleted;

	Task(std::string name, std::string description, double estimatedTime) {
		this->name = name;
		this->description = description;
		this->estimatedTime = estimatedTime;
		this->isCompleted = false;
	}


	Task() = default;
};