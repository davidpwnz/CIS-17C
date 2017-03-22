
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <iomanip>
#include "Link.h"

using namespace std;

template <class T>
class LinkedList {
public:
    LinkedList();
    LinkedList(const LinkedList& orig);
    virtual ~LinkedList();
    // Other Functions
    void fillLst(int);
    void prntLst(int);
    Link<T> *endLst(Link<T>*);
    void addEnd(T);
    void addBeg(T);
    void addBefore(int, T);
    void addAfter(int, T);
    void delEnd();
    void delBeg();
    void delBefore(int);
    void delAfter(int);
    T fndLnk(int);
private:
    Link<T> *front;
};

template <class T>
LinkedList<T>::LinkedList()
{
    front = new Link<T>;
}

template <class T>
LinkedList<T>::LinkedList(const LinkedList& orig)
{
    Link<T> *thisLnk = front;
    Link<T> *origLnk = orig.front;
    while(origLnk != NULL)
    {
        Link<T> *temp = new Link<T>;
        temp->data = origLnk->data;
        thisLnk = temp;
        thisLnk = thisLnk->linkPtr;
        origLnk = origLnk->linkPtr;
    }
}

template <class T>
LinkedList<T>::~LinkedList()
{
    while(front != NULL)
    {
        Link<T> *temp = front->linkPtr;
        delete front;
        front = temp;
    }
}

template <class T>
void LinkedList<T>::fillLst(int n){
    Link<T> *prev=front;       //Set the front equal to the traversal link
    prev->data=n--;         //Fill the front with data
    prev->linkPtr=NULL;     //Point the front to no where
    do{
        Link<T> *end=new Link<T>;//Create a new link
        end->data=n--;     //Fill with data
        end->linkPtr=NULL; //Point to no where
        prev->linkPtr=end; //Previous link will point to the end
        prev=end;          //Move to the end
    }while(n>0);           //Repeat until filled
}

template <class T>
void LinkedList<T>::prntLst(int perLine){
    int colCnt=0;                //Column counter
    Link<T> *next=front;            //Start at the front of the list
    cout<<endl;                  //Put the beginning on a new line
    do{
        cout<<setw(4)<<next->data<<" ";  //Print the link
        if(colCnt++%perLine==(perLine-1))cout<<endl;
        next=next->linkPtr;      //Go to the next link
    }while(next!=NULL);          //Stop when your at the end
    cout<<endl;
}

template <class T>
Link<T>* LinkedList<T>::endLst(Link<T> *front){
    Link<T> *lnk=front,*end;//Start the link at the front to find the end
    do{
        end=lnk;         //Are we at the end yet?
        lnk=lnk->linkPtr;//Traverse to the next link
    }while(lnk!=NULL);   //Finally found the end when NULL
    return end;
}

template <class T>
void LinkedList<T>::addEnd(T val){
    Link<T> *nx2last=endLst(front);//Find the last link in the list
    Link<T> *last=new Link<T>;        //Create a new last link
    last->data=val;             //Fill with the value desire
    last->linkPtr=NULL;         //Point the added link to no where
    nx2last->linkPtr=last;      //Put the last link on the end 
}

template <class T>
void LinkedList<T>::addBeg(T val)
{
    Link<T> *temp = new Link<T>;
    temp->data = val;
    temp->linkPtr = front;
    front = temp;
}

template <class T>
void LinkedList<T>::addBefore(int loc, T val)
{
    Link<T> *lnk = front;
    Link<T> *prev;
    while(lnk->data!=loc)
    {
        prev = lnk;
        lnk = lnk->linkPtr;
    }
    
    Link<T> *temp = new Link<T>;
    temp->data = val;
    temp->linkPtr = lnk;
    prev->linkPtr = temp;
}

template <class T>
void LinkedList<T>::addAfter(int loc, T val)
{
    Link<T> *lnk = front;
    while(lnk->data!=loc)
    {
        lnk = lnk->linkPtr;
    }
    
    Link<T> *temp = new Link<T>;
    temp->data = val;
    temp->linkPtr = lnk->linkPtr;
    lnk->linkPtr = temp;
}

template <class T>
void LinkedList<T>::delEnd()
{
    Link<T> *lnk = front;
    Link<T> *prev;
    while(lnk->linkPtr!=NULL)
    {
        prev = lnk;
        lnk = lnk->linkPtr;
    }
    
    delete lnk;
    prev->linkPtr = NULL;
}

template <class T>
void LinkedList<T>::delBeg()
{
    Link<T> *lnk = front->linkPtr;
    delete front;
    front = lnk;
}

template <class T>
void LinkedList<T>::delBefore(int loc)
{
    Link<T> *lnk = front;
    Link<T> *prev;
    while(lnk->linkPtr->data!=loc)
    {
        prev = lnk;
        lnk = lnk->linkPtr;
    }
    
    prev->linkPtr = lnk->linkPtr;
    delete lnk;
}

template <class T>
void LinkedList<T>::delAfter(int loc)
{
    Link<T> *lnk = front;
    while(lnk->data!=loc)
    {
        lnk = lnk->linkPtr;
    }
    
    Link<T> *temp = lnk->linkPtr->linkPtr;
    delete lnk->linkPtr;
    lnk->linkPtr = temp;
}

template <class T>
T LinkedList<T>::fndLnk(int loc)
{
    Link<T> *lnk = front;
    for(int i = 0; i < loc; i++)
    {
        lnk = lnk->linkPtr;
    }
    
    return lnk->data;
}

#endif /* LINKEDLIST_H */
