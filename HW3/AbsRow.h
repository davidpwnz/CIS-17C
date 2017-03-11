#ifndef ABSROW_H
#define	ABSROW_H

template <typename T>
class AbsRow {
protected:
	int size;
	T *rowData;
public:
	virtual int getSize()const = 0;
	virtual T getData(int)const = 0;
};

#endif	/* ABSROW_H */