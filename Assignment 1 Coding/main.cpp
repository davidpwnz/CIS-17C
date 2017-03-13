//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
#include "Link.h"

//Global Constants

//Function Prototypes
Link *fillLst(int);
void  prntLst(Link *,int);
void  destLst(Link *);
Link  *endLst(Link *);
void   addLnk(Link *,int);
void   delLnk();
int    fndLnk(Link *,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    Link *lnkList;
    int howMany=10,perLine=5,counter = 0;
    int randNum = 0;
    
    //Input Data
    lnkList=fillLst(howMany);
    
    //Print the list
    prntLst(lnkList,perLine);
    
    //Add to the list
    addLnk(lnkList,0);
    prntLst(lnkList,perLine);
    counter = fndLnk(lnkList,randNum);
    cout << "\nNumber " << randNum << " exists at point: " << counter << endl;
    //Destroy the List
    destLst(lnkList);
    
    //Exit Stage Right
    return 0;
}

void delLnk() {
    
}

int fndLnk(Link *front,int val) {
    int counter = -1;
    Link *temp = front, *current;
    do {
        counter++;
        current = temp;
        temp=temp->linkPtr;
    } while(current->data != val);
    if(current->data == val)
        return counter;
    else
        return -1;
}
    
Link *fillLst(int n){
    Link *front=new Link;   //Create the front link
    Link *prev=front;       //Set the front equal to the traversal link
    prev->data=n--;         //Fill the front with data
    prev->linkPtr=NULL;     //Point the front to no where
    do{
        Link *end=new Link;//Create a new link
        end->data=n--;     //Fill with data
        end->linkPtr=NULL; //Point to no where
        prev->linkPtr=end; //Previous link will point to the end
        prev=end;          //Move to the end
    }while(n>0);           //Repeat until filled
    return front;          //Return the beginning of the Linked list
}

void  prntLst(Link *front,int perLine){
    int colCnt=0;                //Column counter
    Link *next=front;            //Start at the front of the list
    cout<<endl;                  //Put the beginning on a new line
    do{
        cout<<setw(4)<<next->data<<" ";  //Print the link
        if(colCnt++%perLine==(perLine-1))cout<<endl;
        next=next->linkPtr;      //Go to the next link
    }while(next!=NULL);          //Stop when your at the end
    cout<<endl;
}

void  destLst(Link *front){
    if(front==NULL)return;         //Empty List? then leave
    do{
        Link *temp=front->linkPtr; //Traverse the list
        delete front;              //Delete the front of the list
        front=temp;                //Set the new front of the list
    }while(front!=NULL);           //Stop when we reach the end.
}

Link *endLst(Link *front){
    Link *lnk=front,*end;//Start the link at the front to find the end
    do{
        end=lnk;         //Are we at the end yet?
        lnk=lnk->linkPtr;//Traverse to the next link
    }while(lnk!=NULL);   //Finally found the end when NULL
    return end;
}

void   addLnk(Link *front,int val){
    Link *nx2last=endLst(front);//Find the last link in the list
    Link *last=new Link;        //Create a new last link
    last->data=val;             //Fill with the value desire
    last->linkPtr=NULL;         //Point the added link to no where
    nx2last->linkPtr=last;      //Put the last link on the end 
}
