#pragma once
#include <iostream>
#include <string>

class Worker {
public:
	std::string name;
	std::string position;

	Worker(std::string name, std::string position) {
		this->name = name;
		this->position = position;
	}
};
