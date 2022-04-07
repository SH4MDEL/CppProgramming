#include <iostream>
#include <vector>

template <typename T>
void print_vector(std::vector<T>& vec) {
	// ��ü ���͸� ����ϱ�
	std::cout << "[ ";
	// iterator�� �����Ͱ� �ƴϴ�. * �����ڸ� �����ε��ؼ� ������ó�� �����ϰ� �ϴ� ��.
	for (typename std::vector<T>::iterator itr = vec.begin(); itr != vec.end(); ++itr) {
		// typename�� ���̴� ������ iterator�� std::vector<>�� ���� Ÿ���̱� ����
		std::cout << *itr << " ";
	}
	std::cout << "]";
}

int main()
{
	std::vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);

	std::cout << "ó�� ���� ����" << std::endl;
	print_vector(vec);

	std::vector<int>::reverse_iterator r_iter = vec.rbegin();
	for (; r_iter != vec.rend(); ++r_iter) {
		std::cout << *r_iter << std::endl;
	}
}