#include<string>
using namespace std;
class Rectangle
{
private:
	int lenght,width;
public:
	void getlenght(int &);
	void getwidth(int &);
	void setlenght(int );
	void setwidth(int);
	void getArea();
	void rotaterectangle();
	void draw();
};