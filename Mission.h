#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Mission
{
public:
	Mission(string id, string title, string description);
	Mission(string title, string description);

	string id;
	string title;
	string description;

	bool completed;
	bool failed;

	void complete(bool failed);
};