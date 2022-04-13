/*4.��д����, ʵ�ֳ�����Shape����������Բ��Circle�;���Rectangle��Ҫ��:
	���������Shape, ��perimeter()��������Ϊ���麯����
	����������Circle, ��뾶rͨ�����캯����ʼ����ʵ��perimeter()�����ܳ���
	����������Rectangle, �����߶�h����wͨ�����캯����ʼ��, ʵ��perimeter()�����ܳ���
	��д�����򣬶��峤��Ϊ4��Shapeָ�����飬�ֱ�ָ�� :
	Circle(1.0)��Circle(2.0), Rectangle(2.0, 3.0)��Rectangle(2.0, 3.0)��
	ͨ��ָ�����ݼ���4��Shape�����ܳ������ڿ���̨�����.
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
	cout << "�ĸ���״�����ܳ�Ϊ: " << sum << endl;
}