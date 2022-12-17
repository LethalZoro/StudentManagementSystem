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
	vector<MCQ> mcq;
	
	Input_File(students,admin);
	login(admin, students,mcq);
	Read_MCQ(mcq);
	
	
	//this should be the last line of the main function
	Output_File(students, admin);
	Save_MCQ(mcq);
	return 0;
}