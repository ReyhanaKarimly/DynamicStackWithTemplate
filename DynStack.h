#ifndef DYNSTACK_H
#define DYNSTACK_H
template<class T>
class DynStack
{

private:
	struct  StackNode
	{
		T value;
		StackNode *next;
		
	};
	StackNode *Top;

public:
	DynStack() { Top = nullptr; }
	~DynStack();

	void push(T);
	void pop();
	T top();
	bool isEmpty();

};


#endif // !DYNSTACK_H

#pragma once

