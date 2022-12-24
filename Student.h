#pragma once
#include<iostream>
#include"Admission.h"
using namespace std;
class Student : public Admission {
private:
	string first_name;
	string last_name;
	string father_name;
	int age;
	string cnic;
	int fsc_marks;
	int net_marks;//to be given after the test
public:
	static int roll_num;
	Student();
	Student(string username, string password, string First_name, string Second_Name, string Father_name, int age, string cnic, int fsc, int net);
	void Change_Credentials();
	void set_firstname(string fn);
	void set_lastname(string ln);
	void set_fname(string fn);
	void set_age(int a);
	void set_cnic(string cnic);
	void set_fscm(int fm);
	void set_netmarks(int nm);
	string get_firstname();
	string get_lastname();
	string get_fname();
	int get_age();
	string get_cnic();
	int get_fscm();
	int get_netmarks();
};
