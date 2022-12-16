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
	File_Open(students,admin);
	//Student s("abc", "xyz");
	login(admin, students);
	vector<MCQ> Exam;
	return 0;
}