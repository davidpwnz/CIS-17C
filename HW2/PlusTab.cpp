/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PlusTab.cpp
 * Author: rcc
 *
 * Created on March 1, 2017, 11:08 AM
 */

#include <cstdlib>
#include <iostream>
#include "PlusTab.h"
using namespace std;

PlusTab PlusTab::operator+(const PlusTab &a) {
    //Initialize a new Table
    PlusTab sum(a.getSzRow(), a.getSzCol());
    for (int row = 0; row < szRow; row++) {
        for (int col = 0; col < szCol; col++) { 
            sum.setData( row, col, this->getData(row, col) + a.getData(row,col) );
            //sum.columns[col]->setData(row, this->columns[col]->getData(row) + a.columns[col]->getData(row));
        }
    }
    return sum;
}
