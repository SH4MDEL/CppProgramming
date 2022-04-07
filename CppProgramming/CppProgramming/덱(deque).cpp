#include <iostream>
#include <deque>

template <typename T>
void print_deque(std::deque<T>& dq) {
	std::cout << "[ ";
	// ��ü ���� ����ϱ�
	for (const auto& elem : dq) {
		std::cout << elem << " ";
	}
	std::cout << "]";
}

int main()
{
	std::deque<int> dq;
	dq.push_back(10);
	dq.push_back(20);
	dq.push_front(30);
	dq.push_front(40);

	std::cout << "�ʱ� dq ���� : ";
	print_deque(dq);
	std::cout << std::endl << "�� ���� ���� ����" << std::endl;
	dq.pop_front();
	print_deque(dq);
}