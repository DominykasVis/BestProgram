#include <iostream>
#include "Singleton.h"
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;
//------------------------------
const char CDfv[]="duomenys.txt";
const char CRfv[]="Rezultatai.txt";
//------------------------------
int Kiek(char sim);
int Raides();
int Skaitmenys();
int Simboliai();
//-----------------------------
int main()
{
	setlocale(LC_ALL, "Lithuanian");
    ofstream fr(CRfv);
   
	Singleton::Instance()-> Kiek('h');
	
	 
	cout<<"Raidziu                "<<Raides()<<endl;
    cout<<"skaiciu yra yra        "<<Skaitmenys()<<endl;
    cout<<"Tarpu  yra             "<<Kiek(' ')<<endl;
    cout<<"Kitokiu simboliu yra    "<<Simboliai()<<endl;
   

    return 0;
}
//--------------------------------
int Kiek(char sim){
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
//-----------------------------
int Raides(){
    int r=0;
    r=r+Kiek('a');
    r=r+Kiek('b');
    r=r+Kiek('c');
    r=r+Kiek('d');
    r=r+Kiek('e');
    r=r+Kiek('f');
    r=r+Kiek('g');
    r=r+Kiek('h');
    r=r+Kiek('i');
    r=r+Kiek('y');
    r=r+Kiek('j');
    r=r+Kiek('k');
    r=r+Kiek('l');
    r=r+Kiek('m');
    r=r+Kiek('n');
    r=r+Kiek('o');
    r=r+Kiek('p');
    r=r+Kiek('r');
    r=r+Kiek('s');
    r=r+Kiek('t');
    r=r+Kiek('u');
    r=r+Kiek('v');
    r=r+Kiek('z');
	r=r+Kiek('à');
	r=r+Kiek('è');
	r=r+Kiek('æ');
	r=r+Kiek('ë');
	r=r+Kiek('á');
	r=r+Kiek('ğ');
	r=r+Kiek('ø');
	r=r+Kiek('û');

 


    r=r+Kiek('A');
    r=r+Kiek('B');
    r=r+Kiek('C');
    r=r+Kiek('D');
    r=r+Kiek('E');
    r=r+Kiek('F');
    r=r+Kiek('G');
    r=r+Kiek('H');
    r=r+Kiek('I');
    r=r+Kiek('Y');
    r=r+Kiek('J');
    r=r+Kiek('K');
    r=r+Kiek('L');
    r=r+Kiek('M');
    r=r+Kiek('N');
    r=r+Kiek('O');
    r=r+Kiek('P');
    r=r+Kiek('R');
    r=r+Kiek('S');
	r=r+Kiek('T');
    r=r+Kiek('U');
	r=r+Kiek('V');
    r=r+Kiek('Z');
	r=r+Kiek('À');
	r=r+Kiek('È');
	r=r+Kiek('Æ');
	r=r+Kiek('Ë');
	r=r+Kiek('Á');
	r=r+Kiek('Ğ');
	r=r+Kiek('Ø');
	r=r+Kiek('Û');
    return r;
}
//--------------------------------
int Skaitmenys(){
    int sk=0;
    sk=sk+Kiek('1');
    sk=sk+Kiek('2');
    sk=sk+Kiek('3');
    sk=sk+Kiek('4');
    sk=sk+Kiek('5');
    sk=sk+Kiek('6');
    sk=sk+Kiek('7');
    sk=sk+Kiek('8');
    sk=sk+Kiek('9');
    sk=sk+Kiek('0');
    return sk;
}
//--------------------------------
int Simboliai(){
    int sim=0;
    sim=sim+Kiek('"');
    sim=sim+Kiek(',');
    sim=sim+Kiek('{');
    sim=sim+Kiek('}');
    sim=sim+Kiek('|');
    sim=sim+Kiek('[');
    sim=sim+Kiek(']');
    sim=sim+Kiek('(');
    sim=sim+Kiek(')');
    sim=sim+Kiek('+');
    sim=sim+Kiek('-');
    sim=sim+Kiek('*');
    sim=sim+Kiek('/');
    sim=sim+Kiek(';');
    sim=sim+Kiek(':');
    sim=sim+Kiek('?');
    sim=sim+Kiek('<');
    sim=sim+Kiek('>');
    sim=sim+Kiek('_');
    sim=sim+Kiek('!');
    sim=sim+Kiek('&');
    sim=sim+Kiek('#');
    sim=sim+Kiek('~');
    sim=sim+Kiek('=');
    sim=sim+Kiek('%');
    sim=sim+Kiek('^');
    sim=sim+Kiek('$');
    sim=sim+Kiek('@');
    sim=sim+Kiek('.');
    return sim;
}