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
	char answers;
public:
	MCQ();
	MCQ(string q, string* o, char a);
	void set_questions(string q);
	void set_options(string* o);
	void set_answers(char a);
	string get_questions();
	string* get_options();
	char get_answers();
};
