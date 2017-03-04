/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Table.h"
#include <cstdlib>

Table::Table(int rows, int cols) {
    this->szRow = rows > 0 ? rows : 1;
    
    records = new RowAray*[this->szRow];
    
    this->szCol = cols > 0 ? cols : 1;
    
    for (int i = 0; i < this->szRow; i++) {
        records[i] = new RowAray(this->szCol);
    }
}

Table::~Table() {
    for (int i = 0; i < this->szRow; i++) {
        delete records[i];
    }
    delete [] records;
}

int Table::getData(int rows, int cols) {
    if (rows >= 0 && rows < this->szRow && cols >= 0 && cols < records[rows]->getSize()) {
        return records[rows]->getData(cols);
    }
    else {
        return 0;
    }
}
