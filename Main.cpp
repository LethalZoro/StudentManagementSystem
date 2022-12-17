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
	
	/*Input_File(students,admin);
	login(admin, students);*/
	Read_MCQ(mcq);
	cout<<mcq[0].get_questions()<<endl;
	cout << mcq[0].get_options()[0]<<endl;
	cout << mcq[0].get_options()[1] <<endl;
	cout << mcq[0].get_options()[2]<<endl;
	cout << mcq[0].get_options()[3]<<endl;
	cout << mcq[0].get_answers()<<endl;
	//this should be the last line of the main function
	//Output_File(students, admin);
	return 0;
}