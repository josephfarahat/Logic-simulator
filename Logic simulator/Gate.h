#pragma once
#include"Node.h"
using namespace std;

class Gate
{protected:
	Node* In1;
	Node* In2;
	Node* Out1;
public:
	void setIn1(Node*n);
	void setIn2(Node*n);
	void setOut1(Node*n);
	Node* getIn1();
	Node* getIn2();
	Node* getOut1();
	Gate();
	
	virtual void CalcOut() = 0;
};

