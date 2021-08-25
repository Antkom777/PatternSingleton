#include "Singleton.h"
#include <iostream>

using namespace std;


int main()
{
	Singleton* single = Singleton::getInstance();
	cin.get();
	return 0;
}
