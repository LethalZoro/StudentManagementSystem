#pragma once
#include<iostream>
using namespace std;
class Admission {
private:
	string username;
	string password;
public:
	Admission();
	Admission(string un, string pa);
	string get_username();
	string get_password();
	void set_username(string un);
	void set_password(string pa);
	virtual void Change_Credentials() = 0;
};
