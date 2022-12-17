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
	Student(string us, string p, string n,string , string fn, int ag, string cnic, int fsc,int net);
	void set_age(int a);
	void set_fname(string fn);
	void set_cnic(string cinc);
	void set_fscm(int fm);
	void set_netmarks(int nm);
	int get_age();
	string get_fname();
	string get_cnic();
	int get_fscm();
	int get_netmarks();
	void set_firstname(string fn);
	void set_lastname(string ln);
	string get_firstname();
	string get_lastname();

};
