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
	void input(int id, string name, float salary);
	void display();
	float getSalary() const { return salary; }
private:
	float salary;
};

void Staff::input(int id, string name) {
	cout << "������id�� " << id;
	cin >> id;
	cout << "������name�� " << name;
	cin >> name;
}

void Engineer::input(int id, string name, float salary) {
	cout << "������salary�� " << salary;
	cin >> salary;
}

void Engineer::display() {
	cout << "Enginner�ĳ�Ա����Ϊ: " << endl;
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