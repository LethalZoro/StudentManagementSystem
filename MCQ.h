#pragma once
#include<iostream>
#include<algorithm>
using namespace std;
class Admin;
class MCQ {
	friend Admin;
private:
	string questions;
	string options[4];
	int answers;
public:
	MCQ();
	MCQ(string q, string* o, int a);
	void set_questions(string q);
	void set_options(string* o);
	void set_answers(int a);
	string get_questions();
	string* get_options();
	int get_answers();
	
};
