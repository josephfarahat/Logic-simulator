#ifndef NODE_H
#define NODE_H
#include <string>
using namespace std;
class Node
{
	string name;
	short value;
public:
	Node();
	Node(string n);
	Node(string, short);
	string getname();
	void setname(string);
	short getvalue();
	void setvalue(short);
	void PrintNode();
};
#endif