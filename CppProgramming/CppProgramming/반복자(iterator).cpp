#include <iostream>
#include <vector>

template <typename T>
void print_vector(std::vector<T>& vec) {
	// ��ü ���͸� ����ϱ�
	// iterator�� �����Ͱ� �ƴϴ�. * �����ڸ� �����ε��ؼ� ������ó�� �����ϰ� �ϴ� ��.
	for (typename std::vector<T>::iterator itr = vec.begin(); itr != vec.end(); ++itr) {
		// typename�� ���̴� ������ iterator�� std::vector<>�� ���� Ÿ���̱� ����
		std::cout << *itr << " ";
	}
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
	std::cout << "-------------------------------------" << std::endl;

	std::cout << "vec[2] �տ� 15 �߰�" << std::endl;
	vec.insert(vec.begin() + 2, 15);
	print_vector(vec);
	std::cout << "-------------------------------------" << std::endl;
	
	std::cout << "vec[3] ����" << std::endl;
	vec.erase(vec.begin() + 3);
	print_vector(vec);
}