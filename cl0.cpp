#include<bitset>
#include<functional>
#include<type_traits>
#include<typeinfo>
#include<typeindex>
#include<iostream>
#include<cstdlib>	
#include<csignal>
#include"cl0.h"

int cl0::c10()
{
	cout << "Enter char value:" << endl;
	cout << "a:"; cin >> a; cout << endl;
	cout << "b:"; cin >> b; cout << endl;
	cout << "c:"; cin >> c; cout << endl;
	cout << "Enter int value:" << endl;
	cout << "i:"; cin >> i; cout << endl;
	cout << "n:"; cin >> n; cout << endl;
	cout << "z:"; cin >> z; cout << endl;
	if(this->check()) return 0; else { return 11; }
}

int cl0::check()
{
	
	return 0;
}
