#include<iostream>
#include<cstring>
using namespace std;

class Car {
private:
	string brand;  // ����Ʒ��
	string model;  // ����ģ��
	int year;      // �������

public:
	// ���캯��
	Car(string brand, string model, int year);

	void display();
};

Car::Car(string brand, string model, int year) 
	:brand(brand), model(model), year(year) {
	cout << "����������Ϣ�ǣ�" << endl;
}

void Car::display() {
	cout << "����Ʒ�ƣ� " << brand << endl;
	cout << "����ģ�ͣ� " << model << endl;
	cout << "������ݣ� " << year << endl;
}

int main() {
	Car car("���ǵ�", "SUV", 2020);
	car.display();
	return 0;
}