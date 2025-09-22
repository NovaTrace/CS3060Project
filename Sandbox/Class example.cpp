//メモ
// Damn Monkeys - classes
//
//#include <bits/stdc++.h>
//using namespace std;
//class Monkey {
//	public:
//	string monkeyname;
//	void printname()
//	{
//		cout << "Monkey name is: " << monkeyname;
//	}
//};
//
//int main()
//{
//	Monkey obj1;
//	obj1.monkeyname = "vervet";
//	obj1.printname();
//	return 0;
//}

//using namespace std;
//
//// Abstract class
//class Person {
//public:
//	string name;
//	virtual void role() = 0; // pure virtual function - makes person abstract
//};
//
//// Concrete class
//class Student : public Person {
//public:
//	void role() override {
//		cout << name << " is a Student." << endl;
//	}
//};
//
//int main() {
//	Student s;
//	s.name = "Alice";
//	s.role();
//}


//メモ
//class Rectangle
//{
//private:
//	double width;
//	double height;
//public:
//	void setWidth(double);
//	void setHeight(double);
//	double getWidth() const;
//	double getLength() const;
//	double getArea() const;
//};


//メモ - constructors and destructors

#include <iostream>
class C1 {
	int i = 0;
public:
	void setvalue(int value) { i = value; }
	int getvalue() { return i; }
};

int main() {
	int i = 47;
	C1 o1;

	o1.setvalue(i);
	printf("value is %d\n", o1.getvalue());
	return 0;
}

