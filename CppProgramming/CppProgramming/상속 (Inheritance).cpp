#include <iostream>
#include <string>

class Base {
public:
	std::string parant_string;
	Base() : parant_string("���") { std::cout << "��� Ŭ����" << std::endl; }

	void what() { std::cout << parant_string << std::endl; }
};
class Derived : private Base {					// private ����
	std::string child_string;

public:
	Derived() : child_string("�Ļ�"), Base() {
		std::cout << "�Ļ� Ŭ����" << std::endl;
	}
};

int main()
{
	Base p;
	std::cout << p.parant_string << std::endl;		// ����

	Derived c;
	//std::cout << c.parant_string << std::endl;	// �Ұ�
	
	return 0;
}