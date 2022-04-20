#include "Simulator.h"
#include<iostream>
#include"AndGate.h"
#include"OrGate.h"
#include<fstream>
using namespace std;
Simulator::Simulator() {
	Ns = 0; GS = 0;

}
Simulator::~Simulator() {
	int i;
	for (i = 0; i < Ns; i++) { delete NA[i]; }

	for (i = 0; i < GS; i++) { delete GA[i]; }

}
 int Simulator::getGsize() { return GS; }
 int Simulator::getNsize() { return Ns; }
 Node* Simulator::findNode(string n) {
	 for (int i = 0; i < Ns; i++) {
		 if (NA[i]->getname() == n) { return NA[i]; }
 }
	 return NULL;

 }
 Node* Simulator::AddNode(string n) {
	 NA[Ns++] = new Node(n);
	 return NA[Ns - 1];
	 

 }
 Node* Simulator::findorAdd(string n) {
	 Node* p = findNode(n);
	 if (p != NULL)
	 { return p; }
	 return AddNode(n);

 }

 Gate* Simulator::AddGate(string type)
 {
	 Gate* p = NULL;
	 if (type == "AND") { p = new AndGate(); }
	 else if (type == "OR") { p = new OrGate(); }
	 GA[GS++] = p;
	 return GA[GS-1];
 }


 void Simulator::Sim()
 {
	 for (int i = 0; i < GS; i++)
		 GA[i]->CalcOut();
 }


 void Simulator::Load(string filename)
 {
	 ifstream f1;
	 f1.open(filename);
	 while (!f1.eof()) {

		 string s;
		 f1 >> s;
		 if (s == "SET") {
			 string n; short v;
		 
		 f1 >> n >> v;
		 findorAdd(n)->setvalue(v);

		 }

		 else if (s == "OUT") { string N;
		 
		 f1 >> N;
		 if (N == "ALL") { printAllnodes(); }
		 else { findorAdd(N)->PrintNode(); }
		 }
		 else if (s == "SIM") { Sim(); }
		 else {
			 Gate* p = AddGate(s);
			 string n1, n2, n3;
			 f1 >> n1 >> n2 >> n3;
			 p->setIn1(findorAdd(n1));
			 p->setIn2(findorAdd(n2));
			 p->setOut1(findorAdd(n3));









		 }

		
	 }
	 f1.close();
 }


 void Simulator::printAllnodes()
 {
	 int i;
	 for (i = 0; i < Ns; i++) { NA[i]->PrintNode(); }
 }
