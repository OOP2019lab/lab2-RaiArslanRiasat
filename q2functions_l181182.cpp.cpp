#include"class.h"
#include<iostream>
using namespace std;
void Rectangle::getlenght(int &l)
{
    l=lenght;
}
void Rectangle::getwidth(int &w)
{
    w=width;
}
void Rectangle::setlenght(int len)
{
	if(len>0)
		lenght=len;
	else 
		lenght =0;
}
void Rectangle::setwidth(int wid)
{
	if(wid>0)
		width=wid;
	else 
		width=0;

}
void  Rectangle::getArea()
{
	int area=0;
	area=lenght*width;
	cout<<"the area is"<<area;
}
void Rectangle::rotaterectangle()
{
	int temp=0;
	temp=lenght;
	lenght=width;
	width=temp;
}

void Rectangle::draw()
{
	for(int i=0;i<lenght;i++)
	{
		for(int j=0;j<width;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}