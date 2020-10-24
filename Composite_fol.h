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
	virtual void CheckName(string n){};
	Composite_fol(string name):Component(name) {
		this->name = name;
	};
	void add(Component* component);
	void remove(Component* component);
	
	bool IsComposite() const;
	string getName() const override;
	string tree(int level=1, int comp = 0)const;
	void ls();
};

