#include "Dispatcher.h"
int main() {
	Dispatcher dispatcher;

	Worker worker1("Иван", "маляр");
	Worker worker2("Петр", "масон");
	Worker worker3("Сергей", "электрик");

	Project project1("Дом 1");
	Project project2("Дом 2");

	dispatcher.addProject(project1);
	dispatcher.addProject(project2);

	dispatcher.assignWorkerToProject(worker1, project1);
	dispatcher.assignWorkerToProject(worker2, project1);
	dispatcher.assignWorkerToProject(worker3, project2);

	Task task1("Штукатурирование", "Штукатурирование стен", 20.0);
	Task task2("Укладка пола", "Укладка кирпичного плитка", 15.0);

	dispatcher.addTask(task1);
	dispatcher.addTask(task2);

	return 0;
}