/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "RowAray.h"
#include <cstdlib>

RowAray::RowAray(int cols) {
    size = cols > 1 ? cols : 1;
    
    rowData = new int[size];
    
    for (int i = 0; i < size; i++) {
        rowData[i] = rand()%90+10;
    }
}

RowAray::~RowAray() {
    delete [] rowData;
}
