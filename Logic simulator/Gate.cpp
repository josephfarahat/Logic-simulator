#include "Gate.h"
#include<iostream>
using namespace std;
Gate::Gate() {
	In1 = NULL;
	In2 = NULL;
	Out1 = NULL;
}
void Gate::setIn1(Node* n) { In1 = n; }
void Gate::setIn2(Node* n) { In2 = n; }
void Gate::setOut1(Node* n) { Out1 = n; }
Node* Gate::getIn1() { return In1; }
Node* Gate::getIn2() { return In2; }
Node* Gate::getOut1() { return Out1; }

