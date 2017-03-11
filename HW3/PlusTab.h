#ifndef PLUSTAB_H
#define	PLUSTAB_H

#include "Table.h"

template <class T>
class PlusTab :public Table<T> {
public:
	PlusTab(unsigned int r, unsigned int c) :Table<T>(r, c) {};
	PlusTab operator+(const PlusTab&);
};

template <class T>
PlusTab<T> PlusTab<T>::operator+(const PlusTab &a) {
	//Initialize a new Table
	PlusTab sum(this->szRow, this->szCol);
	for (int row = 0; row < szRow; row++) {
		for (int col = 0; col < szCol; col++) {
			sum.setData(row, col, (this->getData(row, col) + a.getData(row, col)));
		}
	}
	return sum;
}

#endif	/* PLUSTAB_H */