#include "framework.h"
#include "Contact.h"

Contact::Contact() : name(""), city(""), phone("")
{
}

Contact::Contact(string name, string city, string phone)
	: name(name), city(city), phone(phone)
{
}

string Contact::getName() const
{
	return name;
}

string Contact::getCity() const
{
	return city;
}

string Contact::getPhone() const
{
	return phone;
}
