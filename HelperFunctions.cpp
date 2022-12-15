#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include"Admission.h"
#include"Student.h"
#include"Admin.h"
#include"HelperFucntions.h"
using namespace std;

//Display function
void display(int x) {

	switch (x)
	{
	case 0://start menu
		system("cls");
		cout << "##############################\n";
		cout << "|" << setw(30) << "|\n";
		cout << "|" << setw(10) << "1." << setw(18) << left << "Admin" << right << "|\n";
		cout << "|" << setw(10) << "2." << setw(18) << left << "Student" << right << "|\n";
		cout << "|" << setw(10) << "3." << setw(18) << left << "Logout" << right << "|\n";
		cout << "|" << setw(30) << "|\n";
		cout << "##############################\n";
		break;
	case 1:
		system("cls");
		cout << "Enter username: ";
		break;
	case 2:
		//system("cls");
		cout << "Enter Password: ";
		break;
	case 3://after sselecting student 
		system("cls");
		cout << "##############################\n";
		cout << "|" << setw(30) << "|\n";
		cout << "|" << setw(10) << "1." << setw(18) << left << "Login" << right << "|\n";
		cout << "|" << setw(30) << "|\n";
		cout << "|" << setw(10) << "2." << setw(18) << left << "New User" << right << "|\n";
		cout << "|" << setw(30) << "|\n";
		cout << "##############################\n";
		break;
	case 4://For new student
		system("cls");
		cout << "##############################\n";
		cout << "|" << setw(30) << "|\n";
		cout << "|" << setw(15) << "Login" << setw(15) << "|\n";
		cout << "|" << setw(30) << "|\n";
		cout << "|" << setw(10) << " " << setw(18) << left << "For New User" << right << "|\n";
		cout << "|" << setw(30) << "|\n";
		cout << "##############################\n";
		break;
	case 5://students menu
		system("cls");
		cout << "##############################\n";
		cout << "|" << setw(30) << "|\n";
		cout << "|" << setw(23) << "You need to Register" << setw(7) << "|\n";
		cout << "|" << setw(30) << "|\n";
		cout << "|" << setw(30) << "|\n";
		cout << "|" << setw(30) << "|\n";
		cout << "##############################\n";
		break;
	case 6://Admin menu
		system("cls");
		cout << "###################################\n";
		cout << "|" << setw(35) << "|\n";
		cout << "|" << setw(8) << "1." << setw(25) << left << "Generate merit list" << right << "|\n";
		cout << "|" << setw(8) << "2." << setw(25) << left << "Edit Student info" << right << "|\n";
		cout << "|" << setw(8) << "3." << setw(25) << left << "Add or Edit MCQs" << right << "|\n";
		cout << "|" << setw(8) << "4." << setw(25) << left << "Logout" << right << "|\n";
		cout << "|" << setw(35) << "|\n";
		cout << "###################################\n";
		break;
	case 7:// Student take test
		system("cls");
		cout << "##############################\n";
		cout << "|" << setw(30) << "|\n";
		cout << "|" << setw(10) << "1." << setw(18) << left << "Take test" << right << "|\n";
		cout << "|" << setw(30) << "|\n";
		cout << "|" << setw(10) << "2." << setw(18) << left << "Logout" << right << "|\n";
		cout << "|" << setw(30) << "|\n";
		cout << "##############################\n";
		break;
	default:
		break;
	}
}

//To login the login module per say &to direct the control to the desired position
void login(Admin a, vector<Student>& s) {
label:
	int op_start, op_student, op_admin;
	int* net_score = new int;
	bool is_correct = false;
	string us, p;
	display(0);
	cout << "Enter you option: ";
	cin >> op_start;

	switch (op_start)
	{
	case 1://For Admin
		display(1);
		cin >> us;
		display(2);
		cin >> p;
		if (a.get_username().compare(us) == 0 && a.get_password().compare(p) == 0) {
			//code about every thing related to admin
			//cout << "Correct ##";
			display(6);
			cin >> op_admin;
			switch (op_admin)
			{
			case 1:
				//generate merit list
				/*for (int i = 0; i < s.size(); i++) {
					net_score[i] = s[i].get_netmarks();
				}
				sort(net_score, net_score + s.size(), greater<int>());
				a.set_merit(net_score);*/
				Generate_merit(s);
				break;
			case 2:

				break;
			case 3:

				break;
			case 4:
				return;//logout
				break;
			default:
				break;
			}

		}
		else {
			cout << "Incorrect username and password:\n";
			system("pause");
			system("cls");
			goto label;
		}
		break;

	case 2://For student 
		display(3);
		cin >> op_student;
		if (op_student == 1 && s.size() == 0) {
			op_student = 2;
		}
		switch (op_student)
		{
		case 1:
			display(1);
			cin >> us;
			display(2);
			cin >> p;
			for (int i = 0; i < s.size(); i++) {

				if (s[i].get_username().compare(us) == 0 && s[i].get_password().compare(p) == 0) {
					cout << "Correct ##";
					system("pause");
					is_correct = true;
					break;
				}

			}
			if (!is_correct) {
				cout << "Incorrect username and password:\n";
				system("pause");
				system("cls");
				goto label;
			}
			//take test for student
			Take_test(s);
			break;
		case 2:
			NewStudent(s);
			StudentReg(s);
			Take_test(s);
		case 3://3. for logout
			
			return;
		default:

			break;
		}
	}
}
void Generate_merit(vector<Student>& s) {
	Student temp;

	for (int i = 0; i < s.size(); i++)
	{
		for (int j = i; j < s.size(); j++)
		{
			if (s[i].get_netmarks() < s[j].get_netmarks())
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	for (int i = 0; i < s.size(); i++) {
		cout << s[i].get_name() << s[i].get_netmarks() << endl;
	}
};
void Take_test(vector<Student>& s) {
	//here write the code for the student menu and every thing related to it
	int op_student;
	display(7);
	cin >> op_student;
	switch (op_student)
	{
	case 1:
		//Place for Test function
		cout << "test starts";
		break;
	case 2:
		return;
		break;
	default:
		break;
	}
}



void StudentReg(vector<Student>& s) {
	display(5);
	string name;
	string father_name;
	int age;
	long long int cnic;
	int fsc_marks;
	cout << "Enter students's name : ";
	cin >> name;
	cout << "Enter your father's name : ";
	cin >> father_name;
	cout << "Enter your age : ";
	cin >> age;
	cout << "Enter your CNIC : ";
	cin >> cnic;
	cout << "Enter your fsc marks : ";
	cin >> fsc_marks;
	
	

	s[s.size() - 1].set_name(name);
	s[s.size() - 1].set_fn(father_name);
	s[s.size() - 1].set_age(age);
	s[s.size() - 1].set_cnic(cnic);
	s[s.size() - 1].set_fscm(fsc_marks);

}
void NewStudent(vector<Student>& s) {
	string un, pa;
	Student temp;
	display(4);
	system("pause");
	display(1);
	cin >> un;
	display(2);
	cin >> pa;
	temp.set_username(un);
	temp.set_password(pa);
	s.push_back(temp);
	return;
}
