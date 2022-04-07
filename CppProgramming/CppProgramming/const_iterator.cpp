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
	
	std::vector<int>::iterator itr = vec.begin() + 2;

	// vec[2]�� ���� 50���� �ٲ۴�.
	*itr = 50;
	print_vector(vec);

	std::vector<int>::const_iterator citr = vec.cbegin() + 2;

	// ��� �ݺ��ڰ� ����Ű�� ���� �ٲ� �� ����.
	//*citr = 30;
}