/*4.编写程序, 实现抽像类Shape及其派生类圆形Circle和矩形Rectangle，要求:
	定义抽象类Shape, 其perimeter()函数声明为纯虚函数。
	定义派生类Circle, 其半径r通过构造函数初始化，实现perimeter()计算周长。
	定义派生类Rectangle, 包含高度h与宽度w通过构造函数初始化, 实现perimeter()计算周长。
	编写主程序，定义长度为4的Shape指针数组，分别指向 :
	Circle(1.0)，Circle(2.0), Rectangle(2.0, 3.0)，Rectangle(2.0, 3.0)，
	通过指针数据计算4个Shape的总周长，并在控制台上输出.
*/
#include<iostream>
using namespace std;

class Shape {
public:
	virtual float perimeter() = 0;
};

class Circle :public Shape {
public:
	Circle(float r) :r(r) {};
	float perimeter() {
		return (2 * 3.14 * r);
	}
private:
	float r;
};

class Rectangle :public Shape {
public:
	Rectangle(float h, float w) :h(h), w(w) {};
	float perimeter() {
		return (2 * h + 2 * w);
	}
private:
	float h;
	float w;
};

void main() {
	Circle c1(1.0);
	Circle c2(2.0);
	Rectangle r1(2.0, 3.0);
	Rectangle r2(2.0, 3.0);
	Shape* p[4] = {&c1,&c2,&r1,&r2};
	float sum = 0;
	for (int i = 0; i < 4; i++)
		sum += p[i]->perimeter();
	cout << "四个形状的总周长为: " << sum << endl;
}