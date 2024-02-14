#pragma once
#include <vector>
#include <string>
#include <map>
#include "Project.h"
#include "Task.h"

class Dispatcher {
public:
	std::vector<Project> projects;
	std::map<std::string, Task> tasks;

	void addProject(Project project) {
		projects.push_back(project);
	}

	void addTask(Task task) {
		tasks[task.name] = task;
	}

	void assignWorkerToProject(Worker worker, Project project) {
		project.addWorker(worker);
	}

	void assignWorkerToTask(Worker worker, Task task) {
		// Implement logic to assign a worker to a task
	}

	void updateTaskStatus(std::string taskName) {
		Task task = tasks[taskName];
		task.isCompleted = true;
	}
};
