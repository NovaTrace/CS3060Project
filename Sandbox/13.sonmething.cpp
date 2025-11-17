#include <iostream>
#include <string>
using namespace std;


class PersonalInfo
{
private:

	string name;
	string address;
	int age;
	string phone;

public:

	PersonalInfo()
	{
		name = "";
		address = "";
		age = 0;
		phone = "";

	}

	PersonalInfo(string n, string addr, int a, string p)
	{
		setName(n);
		setAddress(addr);
		setAge(a);
		setPhone(p);	
	}

	void setName(string n) { name = n; }
	void setAddress(string addr) { address = addr; }
	void setAge(int a) { age = a; }
	void setPhone(string p) { phone = p; }

	string getName() const { return name; }
	string getAddress() const { return address; }	
	int getAge() const { return age; }	
	string getPhone() const { return phone; }	
};

void displayPersonalInfo(PersonalInfo);

int main()
{

	PersonalInfo me("Herb Dorfmann", "27 Technolgy Drive", 25, "555-1212");

	PersonalInfo auntSally("Sally Dorfmann", "48 Friendly Street", 50, "555-8484");

	PersonalInfo joe("Joe Looney", "191 APple Mountain Road", 30, "555-2222");

	displayPersonalInfo(me);	
	displayPersonalInfo(auntSally);
	displayPersonalInfo(joe);

	return 0;
}

void displayPersonalInfo(PersonalInfo obj)
{
	cout << "Name: " << obj.getName() << endl;
	cout << "Address: " << obj.getAddress() << endl;
	cout << "Age: " << obj.getAge() << endl;
	cout << "Phone: " << obj.getPhone() << endl;
	cout << endl;
}