#include<iostream>
#include<vector>
#include<utility>
using namespace std;
template<typename T>
void relay(T&& arg, int& f)
{
	f(std::forward<T>(arg));
}
class cl1
{
protected:
	int a;
public:
	 cl1(int c=0) //gave default coz we have defined class that inherits this class and it's constructor requies default value.
	{
		 a = c; cout << "called class 1" << endl;
	}
	 operator int();
	 void print_the() { cout << "the" << endl; }
};
cl1::operator int() { return a; } // remove this and see declation after main.
class cl2 :public cl1
{  
public:	
	cl2(int v)
	{
		a = v;
	}
private:
	int b,a;

};

class vec
{
private:
	vector<int> w = { 5,6,3,4,5,7,8,8,8,4,2,22,45,5,5,66,6,6,6,66,6,6,6,7,77,7,4 };
	int index;
public:
	vec(int) 
	{
		index = 0; cout << "vec class initialized" << endl;
	}
	~vec() { cout << "obj deleted" << endl; }
//: int vectoracc(int ind) { return w[ind]; }
//  void vecmanuplation() {}
	int& operator[] (int ind) { return w[ind]; }
}; 

