#include<iostream>
using namespace std;
#include"Student.h"
Student::Student() {
	first_name = " ";
	last_name = " ";
	father_name = " ";
	age = 0;
	cnic = "";
	fsc_marks = 0;
	roll_num++;
}
Student::Student(string username, string password, string first_n,string last_n, string father_n, int Age,string Cnic, int fsc,int net) :Admission(username, password) {
	roll_num++;
	first_name = first_n;
	last_name = last_n;
	father_name = father_n;
	age = Age;
	cnic = Cnic;
	fsc_marks = fsc;
	net_marks = net;
}
int Student::Student::roll_num = 0;
void Student::Change_Credentials() {
	system("cls");
	cout << "For Student Credentials" << endl;
	string un, pa;
	cout << "Enter new username: ";
	cin >> un;
	cout << "Enter new password: ";
	cin >> pa;
	set_username(un);
	set_password(pa);
}
void Student::set_firstname(string fn) {
	first_name = fn;
}
void Student::set_lastname(string ln) {
	last_name = ln;
}
void Student::set_fname(string fn) {
	father_name = fn;
}
int Student::get_age() {
	return age;
}
void Student::set_cnic(string c) {
	cnic = c;
}
void Student::set_fscm(int fm) {
	fsc_marks = fm;
}
void Student::set_netmarks(int nm) {
	net_marks = nm;
}
string Student::get_firstname() {
	return first_name;
}
string Student::get_lastname() {
	return last_name;
}
string Student::get_fname() {
	return father_name;
}
void Student::set_age(int age) {
	this->age = age;
}
string Student::get_cnic() {
	return cnic;
}
int Student::Student::get_fscm() {
	return fsc_marks;
}
int Student::get_netmarks() {
	return net_marks;
}

