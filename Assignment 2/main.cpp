#include <cstdlib>
#include <iostream>

using namespace std;

#include "DoubleLink.h"
#include "Stack.h"
#include "CircleLink.h"
#include "SortedList.h"
#include "PriorityList.h"
#include "Queue.h"

int main(int argc, char** argv) {
	cout << "\nDouble Link List\n";
	DoubleLink<int> dblVec;
        dblVec.push(3);
	dblVec.push(1);
	dblVec.push(10);
	dblVec.push(15);
	dblVec.push(8);
        cout << "Push: ";
	dblVec.display();
	dblVec.pop();
        cout << "Pop: ";
	dblVec.display();
	
	cout << "\nStack List\n";
	Stack<int> stack;
	stack.push(3);
	stack.push(1);
	stack.push(10);
	stack.push(15);
	stack.push(8);
        cout << "Push: ";
	stack.display();
	stack.pop();
        cout << "Pop: ";
	stack.display();
	
	cout << "\nQueue List\n";
	Queue<int> queue;
	queue.push(3);
	queue.push(1);
	queue.push(10);
	queue.push(15);
	queue.push(8);
        cout << "Push: ";
	queue.display();
	queue.pop();
        cout << "Pop: ";
	queue.display();
	
	cout << "\nCircle List\n";
	CircleLink<int> circle;
	circle.push(3);
	circle.push(1);
	circle.push(10);
	circle.push(15);
	circle.push(8);
        cout << "Push: ";
	circle.display();
	circle.pop();
        cout << "Pop: ";
	circle.display();
	
	cout << "\nSorted List\n";
	SortedList<int> sort;
	sort.push(3);
	sort.push(1);
	sort.push(10);
	sort.push(15);
	sort.push(8);
        cout << "Push: ";
	sort.display();
	sort.pop();
        cout << "Pop: ";
	sort.display();
	
	cout << "\nPriority List\n";
	PriorityList<int> plist;
	plist.push(3);
	plist.push(1);
	plist.push(10);
	plist.push(15);
	plist.push(8);
        cout << "Push: ";
	plist.display();
	plist.pop();
        cout << "Pop: ";
	plist.display();
	plist.find(15);
        cout << "Reorganized: ";
	plist.display();
}