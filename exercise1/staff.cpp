#include<iostream>
#include<cstring>
using namespace std;

class Staff {
public:
	void input();
	int getID() const { return id; }
	string getName() const { return name; }
private:
	int id;
	string name;
};

class Engineer :public Staff {
public:
	void input();
	void display();
	float getSalary() const { return salary; }
private:
	float salary;
};

void Staff::input() {
	cout << "������id�� ";
	cin >> id;
	cout << "������name�� ";
	cin >> name;
}

void Engineer::input() {
	Staff::input();
	cout << "������salary�� ";
	cin >> salary;
	cout << endl;
}

void Engineer::display() {
	cout << "Engineer�ĳ�Ա����Ϊ: " << endl;
	cout << "id: " << getID() << endl;
	cout << "name: " << getName() << endl;
	cout << "salary: " << getSalary() << endl;
}

int main() {
	Engineer engineer;
	engineer.input();
	engineer.display();
	return 0;

}