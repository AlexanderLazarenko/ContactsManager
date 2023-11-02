#pragma once
#include "Contact.h"
class Group
{
	string name;
	int size;
	int count;
	Contact* contacts;
public:
	Group();
	Group(string name, int size);
	~Group();
	string getName() const;
	int getSize() const;
	int getCount() const;
	Contact* getContacts() const;
	void getContact(const Contact& c);
	void delContact(string name);
};

