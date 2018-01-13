#include <string>

class Singleton {
public:
	static Singleton* Instance();
	void writeToLogFile();
	int Kiek(char sim);
	int Raides();

private:
	Singleton() {};  // Private so that it can  not be called
	Singleton(Singleton const&) {};             // copy constructor is private
	Singleton& operator=(Singleton const&) {};  // assignment operator is private
	static Singleton* m_pInstance;

};

