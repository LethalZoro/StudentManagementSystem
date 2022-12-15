#pragma once
#include<iostream>
using namespace std;
class Admission {
private:
	string username;
	string password;
	int* merit_list = new int;
public:
	Admission();
	Admission(string un, string pa);
	string get_username();
	string get_password();
	void set_username(string un);
	void set_password(string pa);
	int* get_merit();
	void set_merit(int* ml);
};
