//#include "stdafx.h"
#include <fstream>
#include "Singleton.h"
#include "iostream"

const char CDfv[]="duomenys.txt";
const char CRfv[]="Rezultatai.txt";

using namespace std;

// Global static pointer used to ensure a single instance of the class.
Singleton* Singleton::m_pInstance = NULL;

/** This function is called to create an instance of the class.
Calling the constructor publicly is not allowed. The constructor
is private and is only called by this Instance function.
*/

Singleton* Singleton::Instance()
{
	if (!Singleton::m_pInstance)   // Only allow one instance of class to be generated.
		Singleton::m_pInstance = new Singleton;

	return Singleton::m_pInstance;
}

void Singleton::writeToLogFile()
{
	cout << "Hello Singleton world" << endl;
}

int Singleton::Kiek(char sim){
    char s;
    int k=0;
    ifstream fd(CDfv);
    while (!fd.eof()){
        fd.get(s);
        if (!fd.eof() && (s==sim)){
            k++;
        }
    }
    fd.close();
    return k;
    }

int Singleton::Raides(){
    int r=0;
	r=r+Singleton::Instance()->Kiek('a');
    r=r+Singleton::Instance()->Kiek('b');
    r=r+Singleton::Instance()->Kiek('c');
    r=r+Singleton::Instance()->Kiek('d');
    r=r+Singleton::Instance()->Kiek('e');
    r=r+Singleton::Instance()->Kiek('f');
    r=r+Singleton::Instance()->Kiek('g');
    r=r+Singleton::Instance()->Kiek('h');
    r=r+Singleton::Instance()->Kiek('i');
    r=r+Singleton::Instance()->Kiek('y');
    r=r+Singleton::Instance()->Kiek('j');
    r=r+Singleton::Instance()->Kiek('k');
    r=r+Singleton::Instance()->Kiek('l');
    r=r+Singleton::Instance()->Kiek('m');
    r=r+Singleton::Instance()->Kiek('n');
    r=r+Singleton::Instance()->Kiek('o');
    r=r+Singleton::Instance()->Kiek('p');
    r=r+Singleton::Instance()->Kiek('r');
    r=r+Singleton::Instance()->Kiek('s');
    r=r+Singleton::Instance()->Kiek('t');
    r=r+Singleton::Instance()->Kiek('u');
    r=r+Singleton::Instance()->Kiek('v');
    r=r+Singleton::Instance()->Kiek('z');
	r=r+Singleton::Instance()->Kiek('à');
	r=r+Singleton::Instance()->Kiek('è');
	r=r+Singleton::Instance()->Kiek('æ');
	r=r+Singleton::Instance()->Kiek('ë');
	r=r+Singleton::Instance()->Kiek('á');
	r=r+Singleton::Instance()->Kiek('ð');
	r=r+Singleton::Instance()->Kiek('ø');
	r=r+Singleton::Instance()->Kiek('û');
	return r;
}