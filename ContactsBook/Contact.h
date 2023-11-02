#pragma once
class Contact
{
	string name;
	string city;
	string phone;
public:
	Contact();
	Contact(string name, string city, string phone);
	string getName() const;
	string getCity() const;
	string getPhone() const;
};

