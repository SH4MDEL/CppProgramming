// istream�� ��� ���� ���� ifstream
// ostream�� ��� ���� ���� ofstream
// �̸� ��� �����ϴ� ���� fstream
#include <fstream>
#include <iostream>
#include <string>

int main()
{
	//���� �б� �غ�
	std::fstream in("test.txt");
	std::string s;

	if (in.is_open()) {
		in >> s;
		std::cout << "�Է� ���� ���ڿ� :: " << s << std::endl;
	}
	else {
		std::cout << "������ ã�� �� �����ϴ�. " << std::endl;
	}
	// fclose()�� ���� �Լ��� �ʿ� ���°�? �׷���.
	// ifstream ��ü�� �Ҹ��ڿ��� �ڵ����� close�� ���ش�.

	//////////////////////////////////////////////////////////////
	in.close();
	in.open("other.txt");
	if (in.is_open()) {
		in >> s;
		std::cout << "�Է� ���� ���ڿ� :: " << s << std::endl;
	}
	else {
		std::cout << "������ ã�� �� �����ϴ�. " << std::endl;
	}
	// �ٸ� �̿� ���� ���� ��ü�� �Է��� �ޱ� ���ؼ��� ���� ���� ��Ʈ������ ������ �����ϰ�
	// ���ο� ���ϰ� ������ ������� �Ѵ�.
}