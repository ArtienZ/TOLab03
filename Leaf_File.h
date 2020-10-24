#pragma once
#include "Component.h"
#include <string>
#include <fstream>
using namespace std;
class Leaf_File :
	public Component
{
private:
	string data;
public:
	Leaf_File() {};
	Leaf_File(string file_name, string data) :Component(file_name) {
		this->data = data;
	};
	string getName()const override;
	virtual void CheckName(string n) {}
	virtual void setName(string n) {};
	bool isComposite() { return false; };
	void more();
	~Leaf_File() {};
};

