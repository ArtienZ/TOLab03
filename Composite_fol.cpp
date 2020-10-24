#include "Composite_fol.h"
#include "Leaf_File.h"
#include <iostream>

void Composite_fol::add(Component* component)
{
	this->children_.push_back(component);
	component->SetParent(this);
}

void Composite_fol::remove(Component* component)
{
	children_.remove(component);
	component->SetParent(nullptr);
}

bool Composite_fol::IsComposite() const
{
	return true;
}

string Composite_fol::getName()const {
	return this->name;
}
string Composite_fol::tree(int level,int comp)const
{
	int lev = level;
	int compcount = comp;
	string spaces;
	string result;
	spaces = string(lev * 5, ' ');
		for (auto &c : children_) {
				if (c->IsComposite()){
					compcount += 1 - lev;
					lev += 1;
					result += spaces + "+++" + c->getName() + "\n" ;
					result += c->tree(lev,compcount);
					if (c == children_.back() || compcount == 0)lev -= 1;
				}
				else {
					result += spaces + "---" + c->getName() + "\n";
				}
		}
		spaces = string(lev * 5, ' ');
		
		return result;
}

void Composite_fol::ls()
{
	for (const Component *c:children_) {
		std::cout << c->getName() << endl;
	}
}
