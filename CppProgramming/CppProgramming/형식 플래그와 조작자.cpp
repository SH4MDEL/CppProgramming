#include <string>
#include <iostream>

int main()
{
	int t;
	while (true) {
		// std::cin >> std::hex >> t;
		std::cin.setf(std::ios_base::hex, std::ios_base::basefield);

		// std::hex�� ���� ��Ʈ���� �����Ͽ� �Է� �Ǵ� ��� ����� �ٲ��ִ� �Լ��� �����ڶ�� �Ѵ�.
		// �ݸ� ���� �÷��� std::ios_base::hex�� ����̴�.


		std::cin >> t;
		std::cout << "�Է� :: " << t << std::endl;
		if (std::cin.fail()) {
			std::cout << "����� �Է����ּ���. " << std::endl;
			std::cin.clear();
			std::cin.ignore(100, '\n');
		}
		if (t == 0) break;
	}
}