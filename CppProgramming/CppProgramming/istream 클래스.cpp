#include <iostream>
#include <string>

int main()
{
	int t;
	while (true) {
		std::cin >> t;
		std::cout << "�Է� :: " << t << std::endl;
		if (std::cin.fail()) {
			std::cout << "int �ڷ��� ���� ���ڸ� �Է����ּ���. " << std::endl;
			std::cin.clear();				// �÷��׸� �ʱ�ȭ�Ѵ�.
			std::cin.ignore(100, '\n');		// ���๮�ڰ� ���� �� ���� �����Ѵ�.
		}
		if (t == 1) {
			break;
		}
	}
}