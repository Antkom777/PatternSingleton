#pragma once

class Singleton; //forward declaration

class SingletonDestroyer
{
public:
	~SingletonDestroyer();
	void initialize(Singleton* p);
private:
	Singleton* p_instance;
};

class Singleton
{
public:
	static Singleton* getInstance();
protected:
	Singleton() {};
	Singleton(const Singleton&) {};
	Singleton& operator= (Singleton&) {};
	friend class SingletonDestroyer;
private:
	static Singleton* p_instance;
	static SingletonDestroyer m_destroyer;
};
