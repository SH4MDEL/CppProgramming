#include <iostream>

// �߻� Ŭ����
class Animal {
public:
	Animal() {}
	virtual ~Animal() {}
	virtual void speak() = 0;	
	// ���� ���� �Լ��� �� ���� �����ϰ� �ִ� Ŭ������ ��ü�� ���� �� ����.
};

class Dog : public Animal {
public:
	Dog() : Animal() {}
	~Dog() override { std::cout << "��..." << std::endl; }
	void speak() override { std::cout << "�п�" << std::endl; }
};

class Cat : public Animal {
public:
	Cat() : Animal() {}
	~Cat() override { std::cout << "��..����..." << std::endl; }
	void speak() override { std::cout << "�߿˾߿�" << std::endl; }
};

int main()
{
	Animal* animal[2];
	animal[0] = new Dog();
	animal[1] = new Cat();

	for (int i = 0; i < 2; i++) {
		animal[i]->speak();
	}
	for (int i = 0; i < 2; i++) {
		delete animal[i];
	}
}