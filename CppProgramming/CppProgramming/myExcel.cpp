#include <iostream>
#include <string>

class Vector {
	std::string* data;
	int capacity;
	int length;

public:
	Vector(int n = 1);

	void push_back(std::string s);
	std::string operator[](int i);
	void remove(int x);
	int size();

	~Vector();
};

Vector::Vector(int n = 1) : data(new std::string[n]), capacity(n), length(0) {}

void Vector::push_back(std::string s)
{
	if (capacity <= length) {
		std::string* temp = new std::string[capacity * 2];
		for (int i = 0; i < length; i++) {
			temp[i] = data[i];
		}
		delete[] data;
		data = temp;
		capacity *= 2;
	}

	data[length] = s;
	length++;
}

std::string Vector::operator[](int i) { return data[i]; }

void Vector::remove(int x)
{
	for (int i = x + 1; i < length; i++) {
		data[i - 1] = data[i];
	}
	length--;
}

int Vector::size() { return length; }

Vector::~Vector()
{
	if (data) {
		delete[] data;
	}
}

class Node {
	Node* prev;
	std::string s;

	Node(Node* prev, std::string s) : prev(prev), s(s) {}
};

class Stack {
	class Node {
		Node* prev;
		std::string s;

		Node(Node* prev, std::string s) : prev(prev), s(s) {}
	};

	Node* current;
	Node start;

public:

	// �ֻ�ܿ� ���ο� ���Ҹ� �߰��Ѵ�.
	void push(std::string s);

	// �ֻ���� ���Ҹ� �����ϰ� ��ȯ�Ѵ�.
	std::string pop();

	// �ֻ���� ���Ҹ� ��ȯ�Ѵ�.
	std::string peek();

	// ������ ����ִ����� ������ Ȯ���Ѵ�.
	bool is_empty;

	~Stack();
};