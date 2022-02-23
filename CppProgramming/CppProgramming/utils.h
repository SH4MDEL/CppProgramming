#pragma once
#ifndef UTILS_H
#define UTILS_H

#include <string>

namespace MyExcel {
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

	class Stack {
		struct Node {
			Node* prev;
			std::string s;

			Node(Node* prev, std::string s) : prev(prev), s(s) {}
		};

		Node* current;		// ���� �ֻ��� ��带 ����Ų��.
		Node start;			// �� �عٴ��� �̷�� ��带 ����Ų��.

	public:
		Stack();

		// �ֻ�ܿ� ���ο� ���Ҹ� �߰��Ѵ�.
		void push(std::string s);

		// �ֻ���� ���Ҹ� �����ϰ� ��ȯ�Ѵ�.
		std::string pop();

		// �ֻ���� ���Ҹ� ��ȯ�Ѵ�.
		std::string peek();

		// ������ ����ִ����� ������ Ȯ���Ѵ�.
		bool is_empty();

		~Stack();
	};

	class NumStack {
		struct Node {
			Node* prev;
			double s;

			Node(Node* prev, double s) : prev(prev), s(s) {}
		};

		Node* current;		// ���� �ֻ��� ��带 ����Ų��.
		Node start;			// �� �عٴ��� �̷�� ��带 ����Ų��.

	public:
		NumStack();

		// �ֻ�ܿ� ���ο� ���Ҹ� �߰��Ѵ�.
		void push(double s);

		// �ֻ���� ���Ҹ� �����ϰ� ��ȯ�Ѵ�.
		double pop();

		// �ֻ���� ���Ҹ� ��ȯ�Ѵ�.
		double peek();

		// ������ ����ִ����� ������ Ȯ���Ѵ�.
		bool is_empty();

		~NumStack();
	};
}
#endif