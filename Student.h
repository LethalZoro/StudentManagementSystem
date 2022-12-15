#pragma once
#include<iostream>
#include"Admission.h"
using namespace std;
class Student : public Admission {
private:
	string name;
	string father_name;
	int age;
	long long int cnic;
	int fsc_marks;
	int net_marks;//to be given after the test
public:
	static int roll_num;
	Student();
	Student(string us, string p, string n, string fn, int ag, int cnic, int fsc,int net);
	void set_age(int a);
	void set_name(string n);
	void set_fn(string fn);
	void set_cnic(long long int cinc);
	void set_fscm(int fm);
	void set_netmarks(int nm);
	int get_age();
	string get_name();
	string get_fname();
	long long int get_cnic();
	int get_fscm();
	int get_netmarks();
	


};
