#include<iostream>
#include"Admission.h"
using namespace std;
Admission::Admission() {
	username = " "; password = " ";
}Admission::Admission(string un, string pa) {
	username = un; password = pa;
}
string Admission::get_username() {
	return username;
}
string Admission::get_password() {
	return password;
}
void Admission::set_username(string un) {
	username = un;
}
void Admission::set_password(string pa) {
	password = pa;
}
