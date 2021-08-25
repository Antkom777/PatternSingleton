#include "Singleton.h"
#include <iostream>
using namespace std;

Singleton* Singleton::p_instance = nullptr;
SingletonDestroyer Singleton::m_destroyer;

SingletonDestroyer::~SingletonDestroyer()
{
	cout << "Singleton deleted" << endl;
	delete p_instance;
}

void SingletonDestroyer::initialize(Singleton* p)
{
	cout << "Singleton initialized" << endl;
	p_instance = p;
}

Singleton* Singleton::getInstance()
{
	if (!p_instance)
	{
		p_instance = new Singleton();
		m_destroyer.initialize(p_instance);
	}
	cout << "Singleton called" << endl;
	return p_instance;
}
