#include<iostream>
#include<cstring>
using namespace std;

class Car {
private:
	string brand;  // 汽车品牌
	string model;  // 汽车模型
	int year;      // 生产年份

public:
	// 构造函数
	Car(string brand, string model, int year);

	void display();
};

Car::Car(string brand, string model, int year) 
	:brand(brand), model(model), year(year) {
	cout << "该汽车的信息是：" << endl;
}

void Car::display() {
	cout << "汽车品牌： " << brand << endl;
	cout << "汽车模型： " << model << endl;
	cout << "生产年份： " << year << endl;
}

int main() {
	Car car("比亚迪", "SUV", 2020);
	car.display();
	return 0;
}