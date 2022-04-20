#include "Node.h"
#include <iostream>
using namespace std;
Node::Node() { value = 0; name = " "; }
Node::Node(string n) { value = 0; name = n; }
Node::Node(string n, short v) { value = v; name = n; }
void Node::setname(string n) { name = n; }
void Node::setvalue(short v) { value = v; }
string Node::getname() { return name; }
short Node::getvalue() { return value; }

void Node::PrintNode()
{
	cout << name << " : " << value << endl;
}
