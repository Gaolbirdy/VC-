// 类and对象.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Box
{
	public:
		double length;
		double breadth;
		double height;
		
		double getVolume(void)
		{
			return length * breadth * height;
		}

		double getVolumeOut(void);
		void setLength(double len);
		void setBreadth(double bre);
		void setHeight(double hei);
};

double Box::getVolumeOut(void)
{
	return length * breadth * height;
}

void Box::setLength(double len)
{
	length = len;
}

void Box::setBreadth(double bre)
{
	breadth = bre;
}

void Box::setHeight(double hei)
{
	height = hei;
}


//int main()
//{
//	Box box1;
//	Box box2;
//	double volume = 0.0;
//
//	box1.height = 5.0;
//	box1.length = 6.0;
//	box1.breadth = 7.0;
//	
//	box2.height = 10.0;
//	box2.length = 12.0;
//	box2.breadth = 13.0;
//
//	volume = box1.height * box1.length * box1.breadth;
//	cout << "box1 的体积：" << volume << endl;
//
//	volume = box2.height * box2.length * box2.breadth;
//	cout << "box2 的体积：" << volume << endl;
//
//	cout << box1.getVolume() << endl;
//	cout << box2.getVolumeOut() << endl;
//
//	return 0;
//}

//void main()
//{
//	Box box1;
//	Box box2;
//	double volume;
//
//	box1.setLength(6.0);
//	box1.setBreadth(7.0);
//	box1.setHeight(5.0);
//
//	box2.setLength(12.0);
//	box2.setBreadth(13.0);
//	box2.setHeight(10.0);
//
//	volume = box1.getVolume();
//	cout << "Box1 的体积：" << volume << endl;
//
//	volume = box2.getVolume();
//	cout << "Box2 的体积：" << volume << endl;
//
//}

class Base
{
	public:

	protected:

	private:

};

class Line
{
	public:
		double length;
		
		void setLength(double len);
		double getLength(void);
};

// 成员函数定义
double Line::getLength(void)
{
	return length;
}

void Line::setLength(double len)
{
	length = len;
}

//void main()
//{
//	Line line;
//
//	// 设置长度
//	line.setLength(6.0);
//	cout << "Length of line : " << line.getLength() << endl;
//
//	// 不使用成员函数设置长度
//	line.length = 10.0;
//	cout << "Length of line : " << line.length << endl;
//
//}

class NewBox
{
	private:
		double width;

	public:
		double length;

		void setWidth(double wid);
		double getWidth(void);
};

double NewBox::getWidth(void)
{
	return width;
}

void NewBox::setWidth(double wid)
{
	width = wid;
}

class BaseBox
{
	protected:
		double width;
};

class SmallBox :BaseBox
{
	public:
		void setSmallWidth(double wid);
		double getSmallWidth(void);
};

// 子类的成员函数
double SmallBox::getSmallWidth(void)
{
	return width;
}

void SmallBox::setSmallWidth(double wid)
{
	width = wid;
}

//void main()
//{
//	SmallBox box;
//
//	// 使用成员函数设置宽度
//	box.setSmallWidth(5.0);
//	cout << "Width of box ： " << box.getSmallWidth() << endl;
//
//}

class A
{
	public:
		int a;
		
		A()
		{
			a = 4;
			a1 = 1;
			a2 = 2;
			a3 = 3;
		}

		void fun()
		{
			cout << a << endl;
			cout << a1 << endl;
			cout << a2 << endl;
			cout << a3 << endl;
		}

	public:
		int a1;
	protected:
		int a2;
	private:
		int a3;
};

class B :public A
{
	public:
		int a;

		B(int i)
		{
			A();
			a = i;
		}

		void fun()
		{
			cout << a << endl;
			cout << a1 << endl;
			cout << a2 << endl;
			//cout << a3 << endl;
		}
};

//void main()
//{
//	B b(10);
//	cout << b.a << endl;
//	cout << b.a1 << endl;
//	//cout << b.a2 << endl;
//	//cout << b.a3 << endl;
//
//	b.fun();
//}

class C :protected A
{
	public:
		int a;

		C(int i)
		{
			A();
			a = i;
		}

		void fun()
		{
			cout << a << endl;
			cout << a1 << endl;
			cout << a2 << endl;
			//cout << a3 << endl;
		}
};

//void main()
//{
//	C c(10);
//	cout << c.a << endl;
//	//cout << c.a1 << endl;
//	//cout << c.a2 << endl;
//	//cout << c.a3 << endl;
//
//	c.fun();
//}

class D :private A
{
	public:
		int a;

		D(int i)
		{
			A();
			a = i;
		}

		void fun()
		{
			cout << a << endl;
			cout << a1 << endl;
			cout << a2 << endl;
			//cout << a3 << endl;
		}
};

//void main()
//{
//	D d(10);
//	cout << d.a << endl;
//	//cout << d.a1 << endl;
//	//cout << d.a2 << endl;
//	//cout << d.a3 << endl;
//	
//	d.fun();
//}

class NewLine
{
	public:
		void setLength(double len);
		double getLength(void);
		NewLine(double len, int c);	// 这是构造函数
		void setColor(int c);
		int getColor(void);

	private:
		double length;
		int color;
};

NewLine::NewLine(double len, int c) : length(len), color(c)
{
	cout << "Object is being created, length = " << len << ", color = " << color << endl;
	//length = len;
}

void NewLine::setLength(double len)
{
	length = len;
}

double NewLine::getLength(void)
{
	return length;
}

void NewLine::setColor(int c)
{
	color = c;
}

int NewLine::getColor(void)
{
	return color;
}

void main()
{
	NewLine line(10.0, 255);

	// 获取默认设置的长度
	cout << "Length of Line : " << line.getLength() << endl;
	cout << "Color of Line : " << line.getColor() << endl;

	// 再次设置长度
	line.setLength(6.0);
	line.setColor(99);
	cout << "Length of Line : " << line.getLength() << endl;
	cout << "Color of Line : " << line.getColor() << endl;

}