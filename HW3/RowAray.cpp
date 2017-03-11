#include <cstdlib>
#include "RowAray.h"

//template <class T>
//RowAray<T>::RowAray(unsigned int cols) {
//	this->size = cols > 1 ? cols : 1;
//
//	this->rowData = new T[this->size];
//
//	for (int i = 0; i < cols; i++) {
//		this->setData(i, (rand() % 90) + 10);
//	}
//}
//
//template <class T>
//RowAray<T>::~RowAray() {
//	delete[] this->rowData;
//}
//
//template <class T>
//void RowAray<T>::setData(int col, T data) {
//	this->rowData[col] = data;
//}