/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RowAray.cpp
 * Author: rcc
 *
 * Created on March 1, 2017, 11:08 AM
 */

#include <cstdlib>
#include "RowAray.h"

RowAray::RowAray(unsigned int cols) {
    size = cols > 1 ? cols : 1;
    
    rowData = new int[size];
    
    for (int i = 0; i < size; i++) {
        rowData[i] = rand()%90+10;
    }
}

RowAray::~RowAray() {
    delete [] rowData;
}