#include "header.h"
#include <typeinfo>
using namespace std;
int main() {
	Component* tree = new Composite_fol;
	Component* branch1 = new Composite_fol("Folder 11");
	Component* branch2 = new Composite_fol("Folder 22");
	Component* branch3 = new Composite_fol("Folder 33");
	Component* file0 = new Leaf_File("File 00", "content file 0");
	Component* file1 = new Leaf_File("File 11", "content file 1");
	Component* file2 = new Leaf_File("File 22", "content file 2");
	Component* file3 = new Leaf_File("File 33", "content file 3");
	Component* file4 = new Leaf_File("File 44", "content file 4");
	Component* file5 = new Leaf_File("File 55", "content file 5");
	Component* file6 = new Leaf_File(";'-=',", "content file 6");
	Proxy proxyFol0 = Proxy(branch1);
	Proxy proxyFile0 = Proxy(file0);
	proxyFol0.Rename("folder11newname");
	proxyFile0.Rename("file 0 -----bad");
	branch1->add(file1);
	branch1->add(file2);
	tree->add(branch1);
	branch2->add(file3);
	branch2->add(file0);
	tree->add(branch2);
	branch3->add(file4);
	branch3->add(file5);
	branch1->add(branch3);
	tree->add(file6);
	branch1->ls();
	cout << endl;
	cout<<tree->tree();
	cout << endl;
	file0->more();
	tree->ls();
	delete tree;
	delete branch1;
	delete branch2;
	delete file0;
	delete file1;
	delete file2;
	delete file3;
	return 0;
}