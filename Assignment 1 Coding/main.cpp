//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
#include "LinkedList.h"

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    LinkedList <int>lnkList;
    int howMany=10,perLine=5;
    
    //Input Data
    lnkList.fillLst(howMany);
    
    //Print the list
    cout << "Initial list";
    lnkList.prntLst(perLine);
    
    cout << "Add to the end of the list";
    lnkList.addEnd(0);
    lnkList.prntLst(perLine);
    
    cout << endl << "Add to the beginning of the list";
    lnkList.addBeg(11);
    lnkList.prntLst(perLine);
    
    cout << endl << "Add before value 4";
    lnkList.addBefore(4, 5);
    lnkList.prntLst(perLine);
    
    cout << endl << "Add after value 9";
    lnkList.addAfter(9, 8);
    lnkList.prntLst(perLine);
    
    cout << endl << "Delete the end of the list";
    lnkList.delEnd();
    lnkList.prntLst(perLine);
    
    cout << endl << "Delete the beginning of the list";
    lnkList.delBeg();
    lnkList.prntLst(perLine);
    
    cout << endl << "Delete before value 4";
    lnkList.delBefore(4);
    lnkList.prntLst(perLine);
    
    cout << endl << "Delete after value 9";
    lnkList.delAfter(9);
    lnkList.prntLst(perLine);
    
    //Exit Stage Right
    return 0;
}