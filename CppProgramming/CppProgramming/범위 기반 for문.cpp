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

template <typename T>
void print_vector_range_based(std::vector<T>&vec) {
	std::cout << "[ ";
	for (const auto& elem : vec) {
		std::cout << elem << " ";
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

	print_vector(vec);
	print_vector_range_based(vec);
}