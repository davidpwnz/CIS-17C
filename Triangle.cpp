/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Triangle.h"
#include <cstdlib>

Triangle::Triangle(int rows) {
    this->szRow = rows > 0 ? rows : 1;
    
    records = new RowAray*[this->szRow];
    
    for (int i = 0; i < this->szRow; i++) {
        records[i] = new RowAray(i + 1);
    }
}

Triangle::~Triangle() {
    for (int i = 0; i < this->szRow; i++) {
        delete records[i];
    }
    delete [] records;
}

int Triangle::getData(int rows, int cols) {
    if (rows >= 0 && rows < this->szRow && cols >= 0 && cols < records[rows]->getSize()) {
        return records[rows]->getData(cols);
    }
    else {
        return 0;
    }
}
