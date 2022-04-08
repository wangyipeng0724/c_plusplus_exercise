#include<iostream>
using namespace std;

const float PI = 3.1415926;
const float FENCE_PRICE = 35;  //դ���ĵ���
const float CONCRETE_PRICE = 20;  //�����ĵ���

class Cricle {
public:
	Cricle(float r);  //���캯��
	float circumference(); //����Բ���ܳ�
	float area();  //����Բ�����

private:
	float radius;
};

//���캯����ʼ�����ݳ�Աradius
Cricle::Cricle(float r) {
	radius = r;
}

//����Բ���ܳ�
float Cricle::circumference() {
	return 2 * PI * radius;
}

//����Բ�����
float Cricle::area() {
	return PI * radius * radius;
}

//����դ����۲����
int main() {
	float radius;
	cout << "Enter the Radius of the pool: ";
	cin >> radius;

	Cricle pool(radius); //��Ӿ�ر߽�
	Cricle poolRim(radius + 3);  //դ��

	float fenceCost = poolRim.circumference() * FENCE_PRICE;
	cout << "Fencing cost is $" << fenceCost << endl;
	
	float concreteCost = (poolRim.area() - pool.area()) * CONCRETE_PRICE;
	cout << "Concrete Cost is $" << concreteCost << endl;
	return 0;
}