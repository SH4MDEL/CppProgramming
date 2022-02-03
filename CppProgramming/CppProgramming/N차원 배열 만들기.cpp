#include <iostream>

class Array {
	const int dim;		// �� ���� �迭�ΰ�
	int* size;

	struct Address {
		int level;
		// �� ������ ����(dim - 1 ����)�� ������ �迭�� ����Ű��, �� �� ����
		// ���������� ���� Address �迭�� ����Ų��.
		void* next;
	};
	Address* top;

public:
	Array(int dim, int* array_size) : dim(dim) {
		size = new int[dim];
		for (int i = 0; i < dim; i++) size[i] = array_size[i];

		top = new Address;
		top->level = 0;
	}
};