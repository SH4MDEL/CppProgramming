#pragma once
#include "utils.h"
#include "Table.h"

class Cell {
protected:
	int x, y;
	Table* table;

	std::string data;

public:
	Cell(std::string data, int x, int y, Table* table) : data(data), x(x), y(y), table(table) {};

	// ���� �Լ��� �� ���� ���ڿ��� ��ȯ�Ѵ�.
	virtual std::string stringify();

	// �� ���� ���� �����ͷ� ��ȯ�Ѵ�.
	virtual int to_numeric();
};