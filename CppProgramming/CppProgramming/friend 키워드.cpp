#include <iostream>

class A {
private:
	void private_func() {}
	int private_num;

	// B�� A�� ģ��
	friend class B;

	// func�� A�� ģ��
	friend void func();
};

class B {
public:
	void b() {
		A a;

		// ��� private �Լ��� �ʵ�������� ģ���̱� ������ ���� �����ϴ�.
		a.private_func();
		a.private_num = 3;
	}
};

void func() {
	A a;

	// ��� private �Լ��� �ʵ�������� ģ���̱� ������ ���� �����ϴ�.
	a.private_func();
	a.private_num = 4;
}

int main() {}