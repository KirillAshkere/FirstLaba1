#include <iostream>
#include "map.h"
using namespace std;

int main()
{
	map<string, int> x;
	x.insert("Один", 1);
	x.insert("Два", 2);
	x.print();
}