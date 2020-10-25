#pragma once
#include "Component.h"
#include <list>
#include <string>
#include <iostream>
using namespace std;
class Composite_fol :
	public Component
{
protected:
	list<Component*> children_;
public:
	Composite_fol() {};
	virtual void setName(string n){};
	Composite_fol(string name):Component(name) {
	};
	void add(Component* component);
	void remove(Component* component);
	void Rename(string new_name) { this->name = new_name; };
	bool IsComposite() const;
	string getName() const override;
	string tree(int level=1, int comp = 0)const;
	void ls();
};

