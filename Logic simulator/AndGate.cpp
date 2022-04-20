#include "AndGate.h"
#include<iostream>
using namespace std;
void AndGate::CalcOut() {
	if (In1->getvalue() && In2->getvalue())
	{
		Out1->setvalue(1);
	}
	else Out1->setvalue(0);
}