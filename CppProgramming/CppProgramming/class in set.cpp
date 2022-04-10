#include <iostream>
#include <set>
#include <string>

template <typename T>
void print_set(std::set<T>& s) {
	std::cout << "[ ";
	for (const auto& elem : s) {
		std::cout << elem << " ";
	}
	std::cout << "]" << std::endl;
}

class Todo {
	int priority;
	std::string job_desc;

public:
	Todo(int priority, std::string job_desc) : priority(priority), job_desc(job_desc) {}
	
};

int main()
{
	std::set<Todo> todos;

	todos.insert(Todo(1, "�� �ϱ�"));
	todos.insert(Todo(2, "���� ���� �ϱ�"));
	todos.insert(Todo(1, "���α׷��� ������Ʈ"));
	todos.insert(Todo(3, "ģ�� ������"));
	todos.insert(Todo(2, "��ȭ ����"));
}