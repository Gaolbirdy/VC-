// ��and����.cpp: �������̨Ӧ�ó������ڵ㡣
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
////	cout << "box1 �������" << volume << endl;
////
////	volume = box2.height * box2.length * box2.breadth;
////	cout << "box2 �������" << volume << endl;
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
////	cout << "Box1 �������" << volume << endl;
////
////	volume = box2.getVolume();
////	cout << "Box2 �������" << volume << endl;
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
//// ��Ա��������
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
////	// ���ó���
////	line.setLength(6.0);
////	cout << "Length of line : " << line.getLength() << endl;
////
////	// ��ʹ�ó�Ա�������ó���
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
//// ����ĳ�Ա����
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
////	// ʹ�ó�Ա�������ÿ��
////	box.setSmallWidth(5.0);
////	cout << "Width of box �� " << box.getSmallWidth() << endl;
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
//		NewLine(double len, int c);	// ���ǹ��캯��
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
////	// ��ȡĬ�����õĳ���
////	cout << "Length of Line : " << line.getLength() << endl;
////	cout << "Color of Line : " << line.getColor() << endl;
////
////	// �ٴ����ó���
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
//	NewLine3(int len);	// �򵥵Ĺ��캯��
//	NewLine3(const NewLine3 &obj);	// �������캯��
//	~NewLine3();
//
//private:
//	int *ptr;
//};
//
//NewLine3::NewLine3(int len)
//{
//	cout << "���ù��캯��" << endl;
//
//	// Ϊָ������ڴ�
//	ptr = new int;
//	*ptr = len;
//}
//
//NewLine3::NewLine3(const NewLine3 &obj)
//{
//	cout << "���ÿ������캯����Ϊָ�� ptr �����ڴ�" << endl;
//	ptr = new int;
//	*ptr = *(obj.ptr);	//����ֵ
//}
//
//NewLine3::~NewLine3()
//{
//	cout << "�ͷ��ڴ�" << endl;
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
//	cout << "line ��С : " << obj.getLength() << endl;
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
////	cout << "����display()��" << endl;
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
//// printWidth() �����κ���ĳ�Ա����
//void printWidth(NewBox2 box)
//{
//	// ��Ϊ printWidth() �� Box ����Ԫ��������ֱ�ӷ��ʸ�����κγ�Ա
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
////	// ʹ�ó�Ա�������ÿ��
////	box.setWidth(10.0);
////
////	// ʹ����Ԫ����������
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
//			// ÿ�δ�������ʱ����1
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
//// ��ʼ���� Box �ľ�̬��Ա
//int Box::objectCount = 0;

//void main()
//{
//	// �ڴ�������֮ǰ������������
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
//	//// �����һ������ĵ�ַ
//	//ptrBox = &box1;
//	//cout << "Volume of box1: " << ptrBox->Volume() << endl;
//
//	//// �����һ������ĵ�ַ
//	//ptrBox = &box2;
//
//	//// ���ڳ���ʹ�ó�Ա��������������ʳ�Ա
//	//cout << "Volume of box2: " << ptrBox->Volume() << endl;
//
//	cout << "Final Stage Count: " << Box::getCount() << endl;
//
//}

//// ����
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
//// ���� PaintCost
//class PaintCost
//{
//	public:
//		int getCost(int area)
//		{
//			return area * 70;
//		}
//};
//
//// ������
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
//			cout << "����Ϊ: " << i << endl;
//		}
//
//		void print(double f)
//		{
//			cout << "������Ϊ: " << f << endl;
//		}
//
//		void print(string s)
//		{
//			cout << "�ַ���Ϊ: " << s << endl;
//		}
//
//		void print(char c)
//		{
//			cout << "�ַ�Ϊ: " << c << endl;
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
//		// ���� + ����������ڰ�����Box�������
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
//			return output;	// ������������ʵ����ͬһ������������<<���
//		}
//
//		friend istream& operator>>(istream& input, Distance& d)
//		{
//			input >> d.feet >> d.inches;
//			return input;	// ������������ʵ����ͬһ������������>>����
//		}
//
//		// ��������λ�ã�d1 << cout << endl;
//		//friend ostream& operator<<(const Distance& d, ostream &output)
//		//{
//		//	output << "F: " << d.feet << " I: " << d.inches;
//		//	return output;	// ������������ʵ����ͬһ������������<<���
//		//}
//
//		// ����Ԫ���أ���Ա����
//		//ostream& operator<<(ostream &output)
//		//{
//		//	output << "F: " << this->feet << " I: " << this->inches;
//		//	return output;	// ������������ʵ����ͬһ������������<<���
//		//}
//		//istream& operator>>(istream &input)
//		//{
//		//	input >> this->feet >> this->inches;
//		//	return input;	// ������������ʵ����ͬһ������������>>����
//		//}
//
//};

//// �ǳ�Ա����
//ostream& operator<<(ostream &output, const Distance& d)
//{
//	output << "F: " << d.feet << " I: " << d.inches;
//	return output;	// ������������ʵ����ͬһ������������<<���
//}
//istream& operator>>(istream &input, Distance& d)
//{
//	input >> d.feet >> d.inches;
//	return input;	// ������������ʵ����ͬһ������������>>����
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
//	// ����Ԫ���أ���Ա����
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
//		// ����Ĺ��캯��
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
//		// ��ʾʱ��ķ���
//		void displayTime()
//		{
//			cout << "H: " << hours << " M: " << minutes << endl;
//		}
//
//		// ����ǰ׺���������++
//		Time operator++()
//		{
//			++minutes;	// �����1
//			if (minutes >= 60)
//			{
//				++hours;
//				minutes -= 60;
//			}
//			return Time(hours, minutes);
//		}
//
//		// ���غ�׺���������++
//		Time operator++(int)
//		{
//			// ����ԭʼֵ
//			Time T(hours, minutes);
//			++minutes;	// �����1
//			if (minutes >= 60)
//			{
//				++hours;
//				minutes -= 60;
//			}
//			// ���ؾɵ�ԭʼֵ
//			return T;
//		}
//};
//
//void main()
//{
//	Time T1(11, 59), T2(10, 40);
//
//	++T1;	// T1��1
//	T1.displayTime();	// ��ʾT1
//	++T1;	// T1�ټ�1
//	T1.displayTime();	// ��ʾT1
//
//	T2++;	// T2��1
//	T2.displayTime();	// ��ʾT2
//	T2++;	// T2�ټ�1
//	T2.displayTime();	// ��ʾT2
//
//}

//class Distance
//{
//	private:
//		int feet;
//		int inches;
//	
//	public:
//		// ����Ĺ��캯��
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
//		// ��ʾ����ķ���
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
//	// ʹ�ø�ֵ�����
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
//		// ����Ĺ��캯��
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
//		// ���غ������������
//		Distance operator()(int a, int b, int c)
//		{
//			Distance D;
//			// �����������
//			D.feet = a + c + 10;
//			D.inches = b + c + 100;
//			return D;
//		}
//
//		// ��ʾ����ķ���
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
//				cout << "�����������ֵ" << endl;
//				// ���ص�һ��Ԫ��
//				return arr[0];
//			}
//			return arr[i];
//		}
//};
//
//void main()
//{
//	safeArray A;
//	cout << "A[2] ��ֵΪ : " << A[2] << endl;
//	cout << "A[5] ��ֵΪ : " << A[5] << endl;
//	cout << "A[12] ��ֵΪ : " << A[12] << endl;
//}

//
//// ����һ��ʵ�ʵ���
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
//// ��̬��Ա����
//int Obj::i = 10;
//int Obj::j = 12;
//
//// Ϊ�������ʵ��һ������
//class ObjContainer
//{
//	vector<Obj*> a;
//
//	public:
//		void add(Obj* obj)
//		{
//			a.push_back(obj);	// ���������ı�׼����
//		}
//
//		friend class SmartPointer;
//};
//
//// ʵ������ָ�룬���ڷ�����Obj�ĳ�Ա
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
//		// ����ֵ��ʾ�б����
//		bool operator++()	// ǰ׺�汾
//		{
//			//cout << "index : " << index << endl;
//			if (index >= oc.a.size() - 1)	// oc.a.size() - 1
//				return false;
//			if (oc.a[++index] == 0)	// oc.a����ָ�룬��λ��
//				return false;
//			return true;
//		}
//		bool operator++(int)	// ��׺�汾
//		{
//			return operator++();
//		}
//
//		// ���������->
//		Obj* operator->() const
//		{
//			if (!oc.a[index])	// ��ָ��
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
//	SmartPointer sp(oc);	// ����һ��������
//	do
//	{
//		sp->f();	// ����ָ�����
//		sp->g();
//		cout << endl;
//	} while (sp++);
//}