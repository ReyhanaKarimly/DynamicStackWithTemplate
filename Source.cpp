#include <iostream>
#include <string>
#include "DynStack.h"
using namespace std;

int main() {

	DynStack<int>D;
	
	D.push(1);
	D.push(2);
	D.push(3);

	while (!D.isEmpty())
	{
		cout << D.top() << endl;
		D.pop();

	}

	system("pause");
	return 0;
}