#ifndef ROWARAY_H
#define	ROWARAY_H

#include "AbsRow.h"

template <class T>
class RowAray :public AbsRow<T> {
public:
	RowAray(unsigned int);
	virtual ~RowAray();
	int getSize()const { return this->size; }
	T getData(int i)const {
		if (i >= 0 && i<size)return this->rowData[i];
		else return 0;
	}
	void setData(int, T);
};

template <class T>
RowAray<T>::RowAray(unsigned int cols) {
	this->size = cols > 1 ? cols : 1;

	this->rowData = new T[this->size];

	for (int i = 0; i < cols; i++) {
		this->setData(i, (rand() % 90) + 10);
	}
}

template <class T>
RowAray<T>::~RowAray() {
	delete[] this->rowData;
}

template <class T>
void RowAray<T>::setData(int col, T data) {
	this->rowData[col] = data;
}
#endif	/* ROWARAY_H */