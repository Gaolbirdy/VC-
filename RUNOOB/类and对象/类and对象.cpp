// 类and对象.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//class Box
//{
//	public:
//		double length;
//		double breadth;
//		double height;
//		
//		double getVolume(void)
//			return length * breadth * height;
//		}
//
//		double getVolumeOut(void);
//		void setLength(double len);
//		void setBreadth(double bre);
//		void setHeight(double hei);
//};
//
//double Box::getVolumeOut(void)
//{
//	return length * breadth * height;
//}
//
//void Box::setLength(double len)
//{
//	length = len;
//}
//
//void Box::setBreadth(double bre)
//{
//	breadth = bre;
//}
//
//void Box::setHeight(double hei)
//{
//	height = hei;
//}
//
//
////int main()
////{
////	Box box1;
////	Box box2;
////	double volume = 0.0;
////
////	box1.height = 5.0;
////	box1.length = 6.0;
////	box1.breadth = 7.0;
////	
////	box2.height = 10.0;
////	box2.length = 12.0;
////	box2.breadth = 13.0;
////
////	volume = box1.height * box1.length * box1.breadth;
////	cout << "box1 的体积：" << volume << endl;
////
////	volume = box2.height * box2.length * box2.breadth;
////	cout << "box2 的体积：" << volume << endl;
////
////	cout << box1.getVolume() << endl;
////	cout << box2.getVolumeOut() << endl;
////
////	return 0;
////}
//
////void main()
////{
////	Box box1;
////	Box box2;
////	double volume;
////
////	box1.setLength(6.0);
////	box1.setBreadth(7.0);
////	box1.setHeight(5.0);
////
////	box2.setLength(12.0);
////	box2.setBreadth(13.0);
////	box2.setHeight(10.0);
////
////	volume = box1.getVolume();
////	cout << "Box1 的体积：" << volume << endl;
////
////	volume = box2.getVolume();
////	cout << "Box2 的体积：" << volume << endl;
////
////}
//
//class Base
//{
//	public:
//
//	protected:
//
//	private:
//
//};
//
//class Line
//{
//	public:
//		double length;
//		
//		void setLength(double len);
//		double getLength(void);
//};
//
//// 成员函数定义
//double Line::getLength(void)
//{
//	return length;
//}
//
//void Line::setLength(double len)
//{
//	length = len;
//}
//
////void main()
////{
////	Line line;
////
////	// 设置长度
////	line.setLength(6.0);
////	cout << "Length of line : " << line.getLength() << endl;
////
////	// 不使用成员函数设置长度
////	line.length = 10.0;
////	cout << "Length of line : " << line.length << endl;
////
////}
//
//class NewBox
//{
//	private:
//		double width;
//
//	public:
//		double length;
//
//		void setWidth(double wid);
//		double getWidth(void);
//};
//
//double NewBox::getWidth(void)
//{
//	return width;
//}
//
//void NewBox::setWidth(double wid)
//{
//	width = wid;
//}
//
//class BaseBox
//{
//	protected:
//		double width;
//};
//
//class SmallBox :BaseBox
//{
//	public:
//		void setSmallWidth(double wid);
//		double getSmallWidth(void);
//};
//
//// 子类的成员函数
//double SmallBox::getSmallWidth(void)
//{
//	return width;
//}
//
//void SmallBox::setSmallWidth(double wid)
//{
//	width = wid;
//}
//
////void main()
////{
////	SmallBox box;
////
////	// 使用成员函数设置宽度
////	box.setSmallWidth(5.0);
////	cout << "Width of box ： " << box.getSmallWidth() << endl;
////
////}
//
//class A
//{
//	public:
//		int a;
//		
//		A()
//		{
//			a = 4;
//			a1 = 1;
//			a2 = 2;
//			a3 = 3;
//		}
//
//		void fun()
//		{
//			cout << a << endl;
//			cout << a1 << endl;
//			cout << a2 << endl;
//			cout << a3 << endl;
//		}
//
//	public:
//		int a1;
//	protected:
//		int a2;
//	private:
//		int a3;
//};
//
//class B :public A
//{
//	public:
//		int a;
//
//		B(int i)
//		{
//			A();
//			a = i;
//		}
//
//		void fun()
//		{
//			cout << a << endl;
//			cout << a1 << endl;
//			cout << a2 << endl;
//			//cout << a3 << endl;
//		}
//};
//
////void main()
////{
////	B b(10);
////	cout << b.a << endl;
////	cout << b.a1 << endl;
////	//cout << b.a2 << endl;
////	//cout << b.a3 << endl;
////
////	b.fun();
////}
//
//class C :protected A
//{
//	public:
//		int a;
//
//		C(int i)
//		{
//			A();
//			a = i;
//		}
//
//		void fun()
//		{
//			cout << a << endl;
//			cout << a1 << endl;
//			cout << a2 << endl;
//			//cout << a3 << endl;
//		}
//};
//
////void main()
////{
////	C c(10);
////	cout << c.a << endl;
////	//cout << c.a1 << endl;
////	//cout << c.a2 << endl;
////	//cout << c.a3 << endl;
////
////	c.fun();
////}
//
//class D :private A
//{
//	public:
//		int a;
//
//		D(int i)
//		{
//			A();
//			a = i;
//		}
//
//		void fun()
//		{
//			cout << a << endl;
//			cout << a1 << endl;
//			cout << a2 << endl;
//			//cout << a3 << endl;
//		}
//};
//
////void main()
////{
////	D d(10);
////	cout << d.a << endl;
////	//cout << d.a1 << endl;
////	//cout << d.a2 << endl;
////	//cout << d.a3 << endl;
////	
////	d.fun();
////}
//
//class NewLine
//{
//	public:
//		void setLength(double len);
//		double getLength(void);
//		NewLine(double len, int c);	// 这是构造函数
//		void setColor(int c);
//		int getColor(void);
//
//	private:
//		double length;
//		int color;
//};
//
//NewLine::NewLine(double len, int c) : length(len), color(c)
//{
//	cout << "Object is being created, length = " << len << ", color = " << color << endl;
//	//length = len;
//}
//
//void NewLine::setLength(double len)
//{
//	length = len;
//}
//
//double NewLine::getLength(void)
//{
//	return length;
//}
//
//void NewLine::setColor(int c)
//{
//	color = c;
//}
//
//int NewLine::getColor(void)
//{
//	return color;
//}
//
////void main()
////{
////	NewLine line(10.0, 255);
////
////	// 获取默认设置的长度
////	cout << "Length of Line : " << line.getLength() << endl;
////	cout << "Color of Line : " << line.getColor() << endl;
////
////	// 再次设置长度
////	line.setLength(6.0);
////	line.setColor(99);
////	cout << "Length of Line : " << line.getLength() << endl;
////	cout << "Color of Line : " << line.getColor() << endl;
////
////}
//
//class NewLine2
//{
//	public:
//		void setLength(double len);
//		double getLength(void);
//		NewLine2();
//		~NewLine2();
//
//	private:
//		double length;
//};
//
//NewLine2::NewLine2()
//{
//	cout << "Object is being created" << endl;
//}
//
//NewLine2::~NewLine2()
//{
//	cout << "Object is being deleted" << endl;
//}
//
//void NewLine2::setLength(double len)
//{
//	length = len;
//}
//
//double NewLine2::getLength(void)
//{
//	return length;
//}
//
////void main()
////{
////	NewLine2 line;
////
////	line.setLength(6.0);
////	cout << "Length of line : " << line.getLength() << endl;
////}
//
//class NewLine3
//{
//public:
//	int getLength(void);
//	NewLine3(int len);	// 简单的构造函数
//	NewLine3(const NewLine3 &obj);	// 拷贝构造函数
//	~NewLine3();
//
//private:
//	int *ptr;
//};
//
//NewLine3::NewLine3(int len)
//{
//	cout << "调用构造函数" << endl;
//
//	// 为指针分配内存
//	ptr = new int;
//	*ptr = len;
//}
//
//NewLine3::NewLine3(const NewLine3 &obj)
//{
//	cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
//	ptr = new int;
//	*ptr = *(obj.ptr);	//拷贝值
//}
//
//NewLine3::~NewLine3()
//{
//	cout << "释放内存" << endl;
//	delete ptr;
//}
//
//int NewLine3::getLength(void)
//{
//	return *ptr;
//}
//
//void display(NewLine3 obj)
//{
//	cout << "line 大小 : " << obj.getLength() << endl;
//}
//
////void main()
////{
////	NewLine3 line1(10);
////
////	NewLine3 line2 = line1;
////	NewLine3 line3(line1);
////	NewLine3 line4(line2);
////
////	cout << "调用display()了" << endl;
////	display(line1);
////	display(line2);
////	display(line3);
////	display(line4);
////}
//
//
//
//class NewBox2
//{
//	double width;
//
//	public:
//		friend void printWidth(NewBox2 box);
//		void setWidth(double wid);
//
//		friend class friendClass;
//};
//
//void NewBox2::setWidth(double wid)
//{
//	width = wid;
//}
//
//// printWidth() 不是任何类的成员函数
//void printWidth(NewBox2 box)
//{
//	// 因为 printWidth() 是 Box 的友元，它可以直接访问该类的任何成员
//	cout << "Width of box : " << box.width << endl;
//}
//
//class friendClass
//{
//public:
//	void getOtherWidth(NewBox2 box)
//	{
//		cout << box.width << endl;
//	}
//};
//
////void main()
////{
////	NewBox2 box;
////
////	// 使用成员函数设置宽度
////	box.setWidth(10.0);
////
////	// 使用友元函数输出宽度
////	printWidth(box);
////
////	friendClass f;
////	f.getOtherWidth(box);
////}
//
//
//inline int Max(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//
////void main()
////{
////	cout << "Max(20,10): " << Max(20, 10) << endl;
////	cout << "Max(0,200): " << Max(0, 200) << endl;
////	cout << "Max(100,1010): " << Max(100, 1010) << endl;
////}

//class Box
//{
//	public:
//		static int objectCount;
//
//		Box(double l = 2.0, double b = 2.0, double h = 2.0)
//		{
//			cout << "Constructor called." << endl;
//			length = l;
//			breadth = b;
//			height = h;
//			// 每次创建对象时增加1
//			objectCount++;
//		}
//
//		double Volume()
//		{
//			return length * breadth * height;
//		}
//
//		int compare(Box box)
//		{
//			return this->Volume()> box.Volume();
//			//return Volume() > box.Volume();
//		}
//
//		static int getCount()
//		{
//			return objectCount;
//		}
//
//	private:
//		double length;
//		double breadth;
//		double height;
//};
//
//// 初始化类 Box 的静态成员
//int Box::objectCount = 0;

//void main()
//{
//	// 在创建对象之前输出对象的总数
//	cout << "Inital Stage Count: " << Box::getCount() << endl;
//	
//	Box box1(3.3, 1.2, 1.5);
//	Box box2(8.5, 6.0, 2.0);
//	Box *ptrBox;
//
//	//if (box1.compare(box2))
//	//{
//	//	cout << "Box2 is smaller than box1" << endl;
//	//}
//	//else
//	//{
//	//	cout << "Box2 is equal to or larger than box1" << endl;
//	//}
//
//	//// 保存第一个对象的地址
//	//ptrBox = &box1;
//	//cout << "Volume of box1: " << ptrBox->Volume() << endl;
//
//	//// 保存第一二对象的地址
//	//ptrBox = &box2;
//
//	//// 现在尝试使用成员访问运算符来访问成员
//	//cout << "Volume of box2: " << ptrBox->Volume() << endl;
//
//	cout << "Final Stage Count: " << Box::getCount() << endl;
//
//}

//// 基类
//class Shape
//{
//	public:
//		void setWidth(int w)
//		{
//			width = w;
//		}
//
//		void setHeight(int h)
//		{
//			height = h;
//		}
//
//	protected:
//		int width;
//		int height;
//};
//
//// 基类 PaintCost
//class PaintCost
//{
//	public:
//		int getCost(int area)
//		{
//			return area * 70;
//		}
//};
//
//// 派生类
//class Rectangle : public Shape, public PaintCost
//{
//	public:
//		int getArea()
//		{
//			return (width * height);
//		}
//};

//void main()
//{
//	Rectangle rect;
//	int area;
//
//	rect.setWidth(5);
//	rect.setHeight(7);
//
//	area = rect.getArea();
//
//	cout << "Total Area: " << rect.getArea() << endl;
//
//	cout << "Total paint cost: $" << rect.getCost(area) << endl;
//}

//class printData
//{
//	public:
//		void print(int i)
//		{
//			cout << "整数为: " << i << endl;
//		}
//
//		void print(double f)
//		{
//			cout << "浮点数为: " << f << endl;
//		}
//
//		void print(string s)
//		{
//			cout << "字符串为: " << s << endl;
//		}
//
//		void print(char c)
//		{
//			cout << "字符为: " << c << endl;
//		}
//};
//
//void main()
//{
//	printData pd;
//
//	pd.print(5);
//	pd.print(500.263);
//	pd.print("Hello C++");
//	pd.print('c');
//}

//class Box
//{
//	public:
//		double getVolume(void)
//		{
//			return length * breadth * height;
//		}
//
//		void setLength(double len)
//		{
//			length = len;
//		}
//
//		void setBreadth(double bre)
//		{
//			breadth = bre;
//		}
//
//		void setHeight(double hei)
//		{
//			height = hei;
//		}
//
//		// 重载 + 运算符，用于把两个Box对象相加
//		Box operator+(const Box& b)
//		{
//			Box box;
//			box.length = this->length + b.length;
//			box.breadth = this->breadth + b.breadth;
//			box.height = this->height + b.height;
//			return box;
//		}
//
//		double getHeight(void)
//		{
//			return height;
//		}
//
//	private:
//		double length;
//		double breadth;
//		double height;
//};
//
//void main()
//{
//	Box box1;
//	Box box2;
//	Box box3;
//	double volume = 0.0;
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
//	cout << "Volume of box1: " << volume << endl;
//
//	volume = box2.getVolume();
//	cout << "Volume of box2: " << volume << endl;
//
//	box3 = box1 + box2;
//	volume = box3.getVolume();
//	cout << "Volume of box3: " << volume << endl;
//}

//class Distance
//{
//	private:
//		int feet;
//		int inches;
//	public:
//		Distance()
//		{
//			feet = 0;
//			inches = 0;
//		}
//		Distance(int f, int i)
//		{
//			feet = f;
//			inches = i;
//		}
//
//		void displayDistance()
//		{
//			cout << "F: " << feet << " I: " << inches << endl;
//		}
//
//		Distance operator-()
//		{
//			feet = -feet;
//			inches = -inches;
//			return Distance(-feet, -inches);
//		}
//};
//
//void main()
//{
//	Distance d1(11, 10), d2(-5, 11);
//
//	-d1;
//	d1.displayDistance();
//
//	-d2;
//	d2.displayDistance();
//}

//class Distance
//{
//	private:
//		int feet;
//		int inches;
//
//	public:
//		Distance()
//		{
//			feet = 0;
//			inches = 0;
//		}
//		Distance(int f, int i)
//		{
//			feet = f;
//			inches = i;
//		}
//
//		void displayDistance()
//		{
//			cout << "F: " << feet << " I: " << inches << endl;
//		}
//
//		Distance operator-()
//		{
//			feet = -feet;
//			inches = -inches;
//			return Distance(feet, inches);
//		}
//
//		bool operator<(const Distance& d)
//		{
//			if (feet < d.feet)
//			{
//				return true;
//			}
//			if (feet == d.feet && inches < d.inches)
//			{
//				return true;
//			}
//			return false;
//		}
//};


//void main()
//{
//	Distance d1(11, 10), d2(5, 11);
//
//	if (d1 < d2)
//	{
//		cout << "d1 is less than d2" << endl;
//	}
//	else
//	{
//		cout << "d2 is less than d1" << endl;
//	}
//}

//class Distance
//{
//	private:
//		int feet;
//		int inches;
//
//	public:
//		Distance()
//		{
//			feet = 0;
//			inches = 0;
//		}
//		Distance(int f, int i)
//		{
//			feet = f;
//			inches = i;
//		}
//		
//		friend ostream& operator<<(ostream& output, const Distance& d)
//		{
//			output << "F: " << d.feet << " I: " << d.inches;
//			return output;	// 返回它自身，可实现在同一语句中连续多个<<输出
//		}
//
//		friend istream& operator>>(istream& input, Distance& d)
//		{
//			input >> d.feet >> d.inches;
//			return input;	// 返回它自身，可实现在同一语句中连续多个>>输入
//		}
//
//		// 调换参数位置，d1 << cout << endl;
//		//friend ostream& operator<<(const Distance& d, ostream &output)
//		//{
//		//	output << "F: " << d.feet << " I: " << d.inches;
//		//	return output;	// 返回它自身，可实现在同一语句中连续多个<<输出
//		//}
//
//		// 非友元重载，成员重载
//		//ostream& operator<<(ostream &output)
//		//{
//		//	output << "F: " << this->feet << " I: " << this->inches;
//		//	return output;	// 返回它自身，可实现在同一语句中连续多个<<输出
//		//}
//		//istream& operator>>(istream &input)
//		//{
//		//	input >> this->feet >> this->inches;
//		//	return input;	// 返回它自身，可实现在同一语句中连续多个>>输入
//		//}
//
//};

//// 非成员重载
//ostream& operator<<(ostream &output, const Distance& d)
//{
//	output << "F: " << d.feet << " I: " << d.inches;
//	return output;	// 返回它自身，可实现在同一语句中连续多个<<输出
//}
//istream& operator>>(istream &input, Distance& d)
//{
//	input >> d.feet >> d.inches;
//	return input;	// 返回它自身，可实现在同一语句中连续多个>>输入
//}
 
//void main()
//{
//	Distance d1(11, 10), d2(5, 11), d3;
//
//	cout << "Enter the value of object: " << endl;
//	cin >> d3;
//	cout << "First Distance: " << d1 << endl;
//	cout << "Second Distance: " << d2 << endl;
//	cout << "Third Distance: " << d3 << endl;
//	
//	// 非友元重载，成员重载
//	//d3 >> cin;
//	//d1.operator<<(cout) << endl;
//	//d2 << cout << endl;
//	//d3 << cout << endl;
//
//}

//class Time
//{
//	private:
//		int hours;
//		int minutes;
//
//	public:
//		// 所需的构造函数
//		Time()
//		{
//			hours = 0;
//			minutes = 0;
//		}
//		Time(int h, int m)
//		{
//			hours = h;
//			minutes = m;
//		}
//
//		// 显示时间的方法
//		void displayTime()
//		{
//			cout << "H: " << hours << " M: " << minutes << endl;
//		}
//
//		// 重载前缀递增运算符++
//		Time operator++()
//		{
//			++minutes;	// 对象加1
//			if (minutes >= 60)
//			{
//				++hours;
//				minutes -= 60;
//			}
//			return Time(hours, minutes);
//		}
//
//		// 重载后缀递增运算符++
//		Time operator++(int)
//		{
//			// 保存原始值
//			Time T(hours, minutes);
//			++minutes;	// 对象加1
//			if (minutes >= 60)
//			{
//				++hours;
//				minutes -= 60;
//			}
//			// 返回旧的原始值
//			return T;
//		}
//};
//
//void main()
//{
//	Time T1(11, 59), T2(10, 40);
//
//	++T1;	// T1加1
//	T1.displayTime();	// 显示T1
//	++T1;	// T1再加1
//	T1.displayTime();	// 显示T1
//
//	T2++;	// T2加1
//	T2.displayTime();	// 显示T2
//	T2++;	// T2再加1
//	T2.displayTime();	// 显示T2
//
//}

//class Distance
//{
//	private:
//		int feet;
//		int inches;
//	
//	public:
//		// 所需的构造函数
//		Distance()
//		{
//			feet = 0;
//			inches = 0;
//		}
//		Distance(int f, int i)
//		{
//			feet = f;
//			inches = i;
//		}
//
//		void operator=(const Distance &D)
//		{
//			feet = D.feet;
//			inches = D.inches;
//		}
//
//		// 显示距离的方法
//		void displayDistance()
//		{
//			cout << "F: " << feet << " I: " << inches << endl;
//		}
//};
//
//void main()
//{
//	Distance D1(11, 10), D2(5, 11);
//
//	cout << "First Distance : ";
//	D1.displayDistance();
//	cout << "Second Distance : ";
//	D2.displayDistance();
//
//	// 使用赋值运算符
//	D1 = D2;
//	cout << "First Distance : ";
//	D1.displayDistance();
//
//	Distance D3 = D2;
//	cout << "Third Distance : ";
//	D3.displayDistance();
//}

//class Distance
//{
//	private:
//		int feet;
//		int inches;
//	
//	public:
//		// 所需的构造函数
//		Distance()
//		{
//			feet = 0;
//			inches = 0;
//		}
//		Distance(int f, int i)
//		{
//			feet = f;
//			inches = i;
//		}
//
//		// 重载函数调用运算符
//		Distance operator()(int a, int b, int c)
//		{
//			Distance D;
//			// 进行随机计算
//			D.feet = a + c + 10;
//			D.inches = b + c + 100;
//			return D;
//		}
//
//		// 显示距离的方法
//		void displayDistance()
//		{
//			cout << "F: " << feet << " I: " << inches << endl;
//		}
//
//		Distance change(int a, int b, int c)
//		{
//			Distance D;
//			D.feet = a + c + 10;
//			D.inches = b + c + 100;
//			return D;
//		}
//};
//
//void main()
//{
//	Distance D1(11, 10), D2, D3;
//
//	cout << "First Distance : ";
//	D1.displayDistance();
//
//	D2 = D1(10, 10, 10);	// invoke operator()
//	cout << "Second Distance : ";
//	D2.displayDistance();
//
//	D3 = D1.change(10, 10, 10);
//	cout << "Third Distance : ";
//	D3.displayDistance();
//}

//const int SIZE = 10;
//class safeArray
//{
//	public:
//		int arr[SIZE];
//
//	public:
//		safeArray()
//		{
//			register int i;
//			for (i = 0; i < SIZE; i++)
//			{
//				arr[i] = i;
//			}
//		}
//
//		int& operator[](int i)
//		{
//			if (i > SIZE)
//			{
//				cout << "索引超过最大值" << endl;
//				// 返回第一个元素
//				return arr[0];
//			}
//			return arr[i];
//		}
//};
//
//void main()
//{
//	safeArray A;
//	cout << "A[2] 的值为 : " << A[2] << endl;
//	cout << "A[5] 的值为 : " << A[5] << endl;
//	cout << "A[12] 的值为 : " << A[12] << endl;
//}

//
//// 假设一个实际的类
//class Obj
//{
//	static int i, j;
//
//	public:
//		void f() const 
//		{ 
//			cout << i++ << endl; 
//		}
//		void g() const
//		{
//			cout << j++ << endl;
//		}
//};
//
//// 静态成员定义
//int Obj::i = 10;
//int Obj::j = 12;
//
//// 为上面的类实现一个容器
//class ObjContainer
//{
//	vector<Obj*> a;
//
//	public:
//		void add(Obj* obj)
//		{
//			a.push_back(obj);	// 调用向量的标准方法
//		}
//
//		friend class SmartPointer;
//};
//
//// 实现智能指针，用于访问类Obj的成员
//class SmartPointer
//{
//	ObjContainer oc;
//	int index;
//
//	public:
//		SmartPointer(ObjContainer& objc)
//		{
//			oc = objc;
//			index = 0;
//		}
//
//		// 返回值表示列表结束
//		bool operator++()	// 前缀版本
//		{
//			//cout << "index : " << index << endl;
//			if (index >= oc.a.size() - 1)	// oc.a.size() - 1
//				return false;
//			if (oc.a[++index] == 0)	// oc.a里存的指针，空位置
//				return false;
//			return true;
//		}
//		bool operator++(int)	// 后缀版本
//		{
//			return operator++();
//		}
//
//		// 重载运算符->
//		Obj* operator->() const
//		{
//			if (!oc.a[index])	// 空指针
//			{
//				cout << "Zero value";
//				return (Obj*)0;
//			}
//			return oc.a[index];
//		}
//};
//
//void main()
//{
//	const int sz = 10;
//	Obj o[sz];
//	ObjContainer oc;
//	for (int i = 0; i < sz; i++)
//	{
//		oc.add(&o[i]);
//	}
//	SmartPointer sp(oc);	// 创建一个迭代器
//	do
//	{
//		sp->f();	// 智能指针调用
//		sp->g();
//		cout << endl;
//	} while (sp++);
//}