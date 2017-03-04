/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Table.cpp
 * Author: rcc
 *
 * Created on March 1, 2017, 11:09 AM
 */

#include <cstdlib>
#include "Table.h"

Table::Table(unsigned int rows, unsigned int cols) {
    this->szRow = rows > 0 ? rows : 1;
    
    columns = new RowAray*[this->szRow];
    
    this->szCol = cols > 0 ? cols : 1;
    
    for (int i = 0; i < this->szRow; i++) {
        columns[i] = new RowAray(this->szCol);
    }
}

Table::Table(const Table& a) {
    this->szRow = a.szRow;
    this->szCol = a.szCol;
    this->columns = a.columns;
}

Table::~Table() {
    for (int i = 0; i < this->szRow; i++) {
        delete columns[i];
    }
    delete [] columns;
}

int Table::getData(int rows, int cols)const {
    if (rows >= 0 && rows < this->szRow && cols >= 0 && cols < columns[rows]->getSize()) {
        return columns[rows]->getData(cols);
    }
    else {
        return 0;
    }
}