#include<iostream>
using namespace std;
#include"Student.h"
Student::Student() {
	first_name = " ";
	last_name = " ";
	father_name = " ";
	age = 0;
	cnic = 0;
	fsc_marks = 0;
	roll_num++;
}

Student::Student(string us, string p, string first_n,string last_n, string father_n, int ag, int cnic, int fsc,int net) :Admission(us, p) {
	roll_num++;
	first_name = first_n;
	last_name = last_n;
	father_name = father_n;
	age = ag;
	this->cnic = cnic;
	fsc_marks = fsc;
	net_marks = net;
}
int Student::Student::roll_num = 0;

int Student::get_age() {
	return age;
}
string Student::get_fname() {
	return father_name;
}long long int Student::get_cnic() {
	return cnic;
}
int Student::Student::get_fscm() {
	return fsc_marks;
}
int Student::get_netmarks() {
	return net_marks;
}
string Student::get_firstname() {
	return first_name;
}
string Student::get_lastname() {
	return last_name;
}
void Student::set_age(int age) {
	this->age = age;
};
void Student::set_fn(string fn) {
	father_name = fn;
};
void Student::set_cnic(long long int c) {
	cnic = c;
};
void Student::set_fscm(int fm) {
	fsc_marks = fm;
};
void Student::set_netmarks(int nm) {
	net_marks = nm;
};
void Student::set_firstname(string fn) {
	first_name = fn;
};
void Student::set_lastname(string ln) {
	last_name = ln;
};


