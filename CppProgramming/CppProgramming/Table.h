#pragma once
#include "utils.h"
#include "Cell.h"

namespace MyExcel {
	class Table {
	protected:
		int max_row_size, max_col_size;

		// Cell*�� �����ϴ� 2���� �迭
		Cell*** data_table;
	public:
		Table(int max_row_size, int max_col_size);
		~Table();

		// ���ο� ���� row�� col ���� ����Ѵ�.
		void reg_cell(Cell* c, int row, int col);

		// �ش� ���� �������� ��ȯ�Ѵ�.
		// s : �� �̸� (Ex. A3, B6 ��)
		int to_numeric(const std::string s);
		// �� �� �� ��ȣ�� ���� ȣ���Ѵ�.
		int to_numeric(int row, int col);

		// �ش� ���� ���ڿ��� ��ȯ�Ѵ�.
		std::string stringify(const std::string& s);
		std::string stringify(int row, int col);

		virtual std::string print_table() = 0;
	};
}