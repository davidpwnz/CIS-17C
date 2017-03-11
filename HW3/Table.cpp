#include <cstdlib>
#include "Table.h"

//template <class T>
//Table<T>::Table(unsigned int rows, unsigned int cols) {
//	this->szRow = rows > 0 ? rows : 1;
//
//	columns = new RowAray<T>*[this->szRow];
//
//	this->szCol = cols > 0 ? cols : 1;
//
//	for (int i = 0; i < this->szRow; i++) {
//		columns[i] = new RowAray<T>(this->szCol);
//	}
//}
//
//template <class T>
//Table<T>::Table(const Table& a) {
//	this->szRow = a.getSzRow();
//
//	this->columns = new RowAray<T>*[a.szRow];
//
//	this->szCol = a.getSzCol();
//
//	for (int i = 0; i < this->szRow; i++) {
//		columns[i] = new RowAray<T>(this->szCol);
//		for (int j = 0; j < this->szCol; j++) {
//			this->setData(i, j, a.getData(i, j));
//		}
//	}
//}
//
//template <class T>
//Table<T>::~Table() {
//	for (int i = 0; i < this->szRow; i++) {
//		delete columns[i];
//	}
//	delete[] columns;
//}
//
//template <class T>
//T Table<T>::getData(int rows, int cols)const {
//	if (rows >= 0 && rows < this->szRow && cols >= 0 && cols < columns[rows]->getSize()) {
//		return columns[rows]->getData(cols);
//	}
//	else {
//		return 0;
//	}
//}
//
//template <class T>
//void Table<T>::setData(int row, int col, T data) {
//	columns[row]->setData(col, data);
//
//}