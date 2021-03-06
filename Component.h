#pragma once
#include <string>
#include <iostream>
using namespace std;
class Component
{
protected:
	Component* parent_;
	string name;
public:
	Component() {};
	Component(string name) {
		this->name = name;
	}
	void SetParent(Component* parent) {
		this->parent_ = parent;
	}
	Component* getParent()const {
		return this->parent_;
	}
	virtual void add(Component* component) {};
	virtual void remove(Component* component) {};
	virtual string getName() const = 0;
	virtual void Rename(string new_name) {};
	virtual bool IsComposite() const {
		return false;
	};
	virtual void more() {};
	virtual string tree(int lev = 1,int comp=0)const { return " "; };
	virtual void ls() {};
	virtual ~Component() {};
};

