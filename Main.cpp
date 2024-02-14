#include "Dispatcher.h"
int main() {
	Dispatcher dispatcher;

	Worker worker1("����", "�����");
	Worker worker2("����", "�����");
	Worker worker3("������", "��������");

	Project project1("��� 1");
	Project project2("��� 2");

	dispatcher.addProject(project1);
	dispatcher.addProject(project2);

	dispatcher.assignWorkerToProject(worker1, project1);
	dispatcher.assignWorkerToProject(worker2, project1);
	dispatcher.assignWorkerToProject(worker3, project2);

	Task task1("����������������", "���������������� ����", 20.0);
	Task task2("������� ����", "������� ���������� ������", 15.0);

	dispatcher.addTask(task1);
	dispatcher.addTask(task2);

	return 0;
}