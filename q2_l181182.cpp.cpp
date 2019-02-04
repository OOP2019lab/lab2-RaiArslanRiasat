#include<iostream>
#include"class.h";
using namespace std;
void main()
{
	Rectangle r;
	r.setlenght(20);
	r.setwidth(10);
	r.draw();
	r.getArea();
	cout<<endl;
	r.rotaterectangle();
	r.draw();
	system("pause");
}