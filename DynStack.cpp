#include <iostream>
#include "DynStack.h"
using namespace std;

template<typename T>
DynStack<T>::~DynStack() {

	StackNode *nodePtr = nullptr, *nextNode = nullptr;

	nodePtr = Top;
	while (nodePtr)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}


}
template<class T>
 void DynStack<T>::push(T n)
{
	 StackNode *newNode = nullptr;
	 	newNode = new StackNode;
	 	newNode->value = n;
	 	if (isEmpty())
	 	{
	 		Top = newNode;
	 		newNode->next = nullptr;
	 
	 	}
	 	else
	 	{
	 		newNode->next = Top;
	 		Top = newNode;
	 	}
}

 template<class T>
 void DynStack<T>::pop()
 {
	 StackNode *temp = nullptr;
	 if (isEmpty())
	 {
		 cout << "The stack is already empty.\n";

	 }
	 else
	 {
		 temp = Top->next;
		 delete Top;
		 Top = temp;
	 }
 }

 template<class T>
 T DynStack<T>::top()
 {
	 if (isEmpty())
	 {
		 cout << "Stack is empty.\n";
		 return nullptr;
	 }
	 else
		 return Top->value;
 }

 template<class T>
 bool DynStack<T>::isEmpty()
 {
	 if (!Top)
	 {
		 return true;
	 }
	 return false;
 }


