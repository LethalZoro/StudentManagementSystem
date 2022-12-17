#include<iostream>
#include<iomanip>
#include<vector>
#include<fstream>
#include<string>
#include"Admission.h"
#include"Student.h"
#include"Admin.h"
#include"MCQ.h"
#include"HelperFucntions.h"
using namespace std;

int main() {
	vector<Student> students;
	Admin   admin;
	Input_File(students,admin);
	//Student s("abc", "xyz");
	login(admin, students);
	
	
	//this should be the last line of the main function
	Output_File(students, admin);
	return 0;
}