#include<iostream>
using namespace std;

const float PI = 3.1415926;
const float FENCE_PRICE = 35;  //栅栏的单价
const float CONCRETE_PRICE = 20;  //过道的单价

class Cricle {
public:
	Cricle(float r);  //构造函数
	float circumference(); //计算圆的周长
	float area();  //计算圆的面积

private:
	float radius;
};

//构造函数初始化数据成员radius
Cricle::Cricle(float r) {
	radius = r;
}

//计算圆的周长
float Cricle::circumference() {
	return 2 * PI * radius;
}

//计算圆的面积
float Cricle::area() {
	return PI * radius * radius;
}

//计算栅栏造价并输出
int main() {
	float radius;
	cout << "Enter the Radius of the pool: ";
	cin >> radius;

	Cricle pool(radius); //游泳池边界
	Cricle poolRim(radius + 3);  //栅栏

	float fenceCost = poolRim.circumference() * FENCE_PRICE;
	cout << "Fencing cost is $" << fenceCost << endl;
	
	float concreteCost = (poolRim.area() - pool.area()) * CONCRETE_PRICE;
	cout << "Concrete Cost is $" << concreteCost << endl;
	return 0;
}