#include "Mission.h"

Mission::Mission(string id, string title, string description)
{
	this->id = id;
	this->title = title;
	this->description = description;

	this->completed = false;
	this->failed = false;
}

Mission::Mission(string title, string description) : Mission(title, description)
{
	string id;
	for (char& ch : title)
	{
		id += tolower(ch);
	}
	this->id = id;
}

void Mission::complete(bool failed)
{
	this->completed = true;
	this->failed = failed;
}