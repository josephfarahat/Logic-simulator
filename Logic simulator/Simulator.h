#pragma once
#include"Gate.h"
class Simulator
{
	Gate* GA[1000];
	int GS;
	Node* NA[2000];
	int Ns;
public:
	Simulator();
	~Simulator();
	int getGsize();
	int getNsize();
	Node* findNode(string n);
	Node* AddNode(string n);
	Node* findorAdd(string n);
	Gate* AddGate(string type);
	void Sim();
	void Load(string filename);
	void printAllnodes();
};

