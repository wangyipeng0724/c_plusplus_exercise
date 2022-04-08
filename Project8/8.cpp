#include<iostream>
#include<cmath>
using namespace std;

const double PI = 3.14159265358979;

int main() {
	double angle;
	cout << "Please enter an angle: ";
	cin >> angle; //输入角度

	double radian = angle * PI / 180;  //转化为弧度
	cout << "sin(" << angle << ") = " << sin(radian) << endl;
	cout << "cos(" << angle << ") = " << cos(radian) << endl;
	cout << "tan(" << angle << ") = " << tan(radian) << endl;
	return 0;
}