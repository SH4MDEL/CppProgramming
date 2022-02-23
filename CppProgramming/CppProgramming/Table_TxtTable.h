#pragma once
#include "utils.h"
#include "Table.h"

namespace MyExcel {
	class TxtTable : public Table {
		std::string repeat_char(int n, char c);

		// ���ڷ� �� �� ��ȣ�� �Ű��ش�.
		std::string col_num_to_str(int n);

	public:
		TxtTable(int row, int col);

		// �ؽ�Ʈ�� ǥ�� �����ϰ� ����Ѵ�.
		std::string print_table();
	};
}

