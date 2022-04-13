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
	cout << "请输入id： ";
	cin >> id;
	cout << "请输入name： ";
	cin >> name;
}

void Engineer::input() {
	Staff::input();
	cout << "请输入salary： ";
	cin >> salary;
	cout << endl;
}

void Engineer::display() {
	cout << "Engineer的成员变量为: " << endl;
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