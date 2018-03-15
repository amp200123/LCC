#pragma once
#include <iostream>
#include <string>

using namespace std;

class node
{
friend class tree;

public:
	node(string);
	~node();
	void put(ostream &out);
	void LMR(ostream &out);

private:
	string data;
	node *left, *right;
};