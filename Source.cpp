#include<bitset>
#include<functional>
#include<type_traits>
#include<typeinfo>
#include<typeindex>
#include<iostream>
#include<cstdlib>	
#include<csignal>
#include <string>
#include"cl0.h"
#include"class0.h"
using namespace std;
//const string sti = " Mr cat is playing guitar";
void pointerref(double* );  /*This is standard declartion for passing array*/
//void pointerref(double *&intArr); //only this work
double long funfoo1(int a, int b, int c, int d, const double& x,  double&& y, double* z,vec& g);
void main()
{
	cl1 class_1 = 5;
	cl2 class_2 = 4; 
	int i=0;
	cin >> i;
	/********************* This array's sparta********************/
	int **array1 = new int*[i]; // Array is dynamic do not use in embedded system
	int *arr2=new int[i];
	int *arr3 = new int[i];
	int *arr4 = new int[i];
	array1[1] = { arr3 }; // Arrays are initalized during compile time
	array1[2] = { arr2 };
	array1[3] = { arr4 };
	array1[1][2] = 6;
	cout << array1[1][2] << endl;
	/********************* This array's end********************/
	cl2 class_3 = class_2;
	shared_ptr<cl1> pm1(new cl1(6));
	cl1 v = (*pm1); //this sets v to object which pm1 points but I guess shared pointer is not deleted.
	v.print_the();
	std::bitset<16> b1 (0xAA);
	//shared_ptr<vec> p1(new vec(4));
	vec *p1 = new vec(4);
	vec *oe = new vec(4);
	shared_ptr<vec> p5(oe);
	if(true)
	{
		//shared_ptr<vec> mo(p1); //this does not call construtor.
		//string b=b1.to_string();
		cout << "trigger" << endl;
		vec *oo = new vec(4);
		shared_ptr<vec> p3(oo);
		(*p1)[3] = 6;
		cout << (*oo)[3] << endl; 
	}
	vector<double> u = { 5,6,3,4,5,7,8,8,8,4,2,22,45,5,5,66,6,6,6,66,6,6,6,7,77,7,4 };
	double* arr = u.data();
	cout << b1 << endl;
	double h = 600333.33223455;
	vec dd(5);
	double* poa = new double[20];
	pointerref(poa);
	//double long  cc= funfoo1(5, 200, 500, 7000,h, 50335540.4334550, poa,*p5);
	double long  cc = funfoo1(5, 200, 500, 7000, h, 50335540.4334550, arr, *p5);
	for (int i = 0; i < 20; i++)
	{
		cout << poa[i] << endl;
	}
	cout << cc<<endl;
	cout << p1 << endl;
	system("pause");
}
double long funfoo1(int a, int b, int c, int d, const double& x, double&& y, double* z,vec& g)
{
	double long bignumber;
	bignumber = (a*b*c*d) / (x + y);
	cout << bignumber << endl;
	for (int i=0; i < 20; i++)
	{
		cout << z[i] << endl;
		//z++; /*try removing this comment u will see garbage*/	
	}
	cout << "the class:"<<g[2] << endl;
	return bignumber;
	
}
/*This is example of pointer referece*/
void pointerref(double *intArr)
//void pointerref(double *&intArr)
{
	//intArr = new double[20];
	for (int i = 0; i < 20; i++)
	{
		intArr[i] = 22332;
	}
}