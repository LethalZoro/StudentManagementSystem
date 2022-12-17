#include<iostream>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<fstream>
#include<string>
#include <stdlib.h>
#include"Admission.h"
#include"Student.h"
#include"Admin.h"
#include"HelperFucntions.h"
#include"MCQ.h"
#define Questions_toGive 5
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
	case 8://edit Students info
		system("cls");
		cout << "##############################\n";
		cout << "|" << setw(30) << "|\n";
		cout << "|" << setw(8) << "1." << setw(20) << left << "Edit First Name" << right << "|\n";
		cout << "|" << setw(8) << "2." << setw(20) << left << "Edit Last Name" << right << "|\n";
		cout << "|" << setw(8) << "3." << setw(20) << left << "Edit Father's Name" << right << "|\n";
		cout << "|" << setw(8) << "4." << setw(20) << left << "Edit Age" << right << "|\n";
		cout << "|" << setw(8) << "5." << setw(20) << left << "Edit Fsc Marks" << right << "|\n";
		cout << "|" << setw(8) << "6." << setw(20) << left << "Return to main Menu" << right << "|\n";
		cout << "|" << setw(30) << "|\n";
		cout << "##############################\n";
		break;
	case 9://edit MCQs
		system("cls");
		cout << "##############################\n";
		cout << "|" << setw(30) << "|\n";
		cout << "|" << setw(10) << "1." << setw(18) << left << "Add MCQ" << right << "|\n";
		cout << "|" << setw(30) << "|\n";
		cout << "|" << setw(10) << "2." << setw(18) << left << "Edit MCQ" << right << "|\n";
		cout << "|" << setw(30) << "|\n";
		cout << "|" << setw(10) << "3." << setw(18) << left << "Delete MCQ" << right << "|\n";
		cout << "|" << setw(30) << "|\n";
		cout << "|" << setw(10) << "4." << setw(18) << left << "Back" << right << "|\n";
		cout << "|" << setw(30) << "|\n";
		cout << "##############################\n";
		break;
		
	default:
		break;
	}
}

//To login the login module per say &to direct the control to the desired position
void login(Admin a, vector<Student>& s,vector<MCQ>& mcq) {
label:
	int op_start, op_student, op_admin=0;
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
			while (op_admin != 4) {
				display(6);
				cin >> op_admin;
				switch (op_admin)
				{
				case 1://Generate merit list
					Generate_merit(s);
					break;
				case 2:
					Edit_Studentinfo(s);
					break;
				case 3:
					Add_MCQ(mcq);
					break;
				case 4:
					return;//logout
					break;
				default:
					break;
				}
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
					//take test for student
					if (s[i].get_netmarks()!=0)
					{
						s[i].set_netmarks(Take_test(s, mcq));
					}
					else {
						StudentReg(s);
					}
					break;
				}

			}
			if (!is_correct) {
				cout << "Incorrect username and password:\n";
				system("pause");
				system("cls");
				goto label;
			}
			
			break;
		case 2:
			NewStudent(s);
			StudentReg(s);
			s[s.size() - 1].set_netmarks(Take_test(s, mcq));
		case 3://3. for logout
			
			return;
		default:

			break;
		}
	}
}
void Edit_Studentinfo(vector<Student>& s) {
	long long int id;
	int op_edit=0,age,fscmarks;
	string new_fname, new_lname,fathername;
	cout << "Enter the Cnic of the student you want to edit: ";
	cin >> id;
	for (int i = 0; i < s.size(); i++) {
		if (s[i].get_cnic() == id) {
			while(op_edit!=6)
			{
				display(8);
				cin >> op_edit;
				switch (op_edit)
				{
				case 1:
					cout << "The old first name is: " << s[i].get_firstname() << endl;
					cout << "Enter the new First name: ";
					cin >> new_fname;
					s[i].set_firstname(new_fname);
					break;
				case 2:
					cout << "The old last name is:   " << s[i].get_lastname() << endl;
					cout << "Enter the new Last name: ";
					cin >> new_lname;
					s[i].set_lastname(new_lname);
					break;
				case 3:
					cout << "The old father's name is:   " << s[i].get_fname() << endl;
					cout << "Enter the new Father's name: ";
					cin >> fathername;
					s[i].set_fname(fathername);
					break;
				case 4:
					cout << "The old age is:   " << s[i].get_age() << endl;
					cout << "Enter the new Age: ";
					cin >> age;
					s[i].set_age(age);
					break;
				case 5:
					cout << "The old Fsc marks are:   " << s[i].get_fscm() << endl;
					cout << "Enter the new Fsc marks: ";
					cin >> fscmarks;
					s[i].set_fscm(fscmarks);
					break;
				case 6:
					return;
					break;
				default:
					break;
				}
			}
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
	/*for (int i = 0; i < s.size(); i++) {
		cout << s[i].get_firstname() <<" " << s[i].get_lastname() << s[i].get_netmarks() << endl;
	}*/
	cout << "Merit list generated successfully\n";
	system("pause");
};
int Take_test(vector<Student>& s,vector<MCQ>& mcq) {
	//here write the code for the student menu and every thing related to it
	int op_student;
	int* Q_done = new int[mcq.size()];
	int count = 0;
	display(7);
	cin >> op_student;
	system("cls");
	switch (op_student)
	{
	case 1:
		//Place for Test function
		//cout << "test starts";
		//generate random number between 1 to 10
		for (int i = 0; i < Questions_toGive;i++) {
			
			
				srand(time(NULL));
				int random = rand() % mcq.size() + 1;
				//check if the random number is already generated or not
				for (int j = 0; j < mcq.size(); j++) {
					if (Q_done[j] == random) {
						random = rand() % mcq.size() + 1;
						j = 0;
					}
				}
				Q_done[i] = random;
				
				cout <<setw(15)<< mcq[random].get_questions() << endl;
				cout << "a. " << setw(15) << left << mcq[random].get_options()[0] << right << "b. " << setw(15) << left << mcq[random].get_options()[1] << right << endl;
				//cout <<"c. "<<setw(15) <<left << mcq[random].get_options()[2]<<right<< "d. " <<setw(15) <<left<< mcq[random].get_options()[3]<<right << endl;
				cout << "c. " << setw(15) << left << mcq[random].get_options()[2] << right << "d. " << setw(15) << left << mcq[random].get_options()[3] << right << endl;
				cout << setw(15)<<"Enter the correct option: ";
				char op;
				cin >> op;
				if (mcq[random].get_answers() == op) {
					cout << "Correct answer\n";
					count++;
				}
				else {
					cout << "Wrong answer\n";
				}
				system("pause");
				system("cls");
		}
		break;
	case 2:
		return 0;
		break;
	default:
		break;
	}
	return count;
}



void StudentReg(vector<Student>& s) {
	display(5);
	string first_name,last_name;
	string father_name;
	int age;
	long long int cnic;
	int fsc_marks;
	cout << "Enter students's First name : ";
	cin >> first_name;
	cout << "Enter students's Last name : ";
	cin >> last_name;
	cout << "Enter your father's name : ";
	cin >> father_name;
	cout << "Enter your age : ";
	cin >> age;
	cout << "Enter your CNIC : ";
	cin >> cnic;
	cout << "Enter your fsc marks : ";
	cin >> fsc_marks;
	
	

	s[s.size() - 1].set_firstname(first_name);
	s[s.size() - 1].set_lastname(last_name);
	s[s.size() - 1].set_fname(father_name);
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
void Input_File(vector<Student>& s,Admin& admin) {
	//here write the code for the file opening and reading
	ifstream file;
	file.open("data.csv");
	vector<string> row;
	string user, pass, first_name, last_name, fname;
	int age = 0,fsc_marks = 0, net_marks = 0;
	long long int cnic = 0;
	string line, word, a_user, a_pass;
	int linesRead = -1, temp = 0;
	while (file >> line)
	{
		linesRead++;
		if (linesRead == 0)
		{
			for (auto x : line)
			{
				if (x == ',' || x == '\n')
				{
					//cout << word << endl;
					row.push_back(word);
					switch (temp)
					{
					case 0:
						a_user = word;
						cout << a_user << endl;
						break;
					case 1:
						a_pass = word;
						cout << a_pass << endl;

						break;
					default:
						break;
					}temp++;
					word = "";
				}
				else if (x != '\n')
				{
					word += x;
				}
			}

			//continue;
		}
		else if (linesRead == 1) {
			temp = 0;
			continue;
		}
		else {
			for (auto x : line)
			{
				if (x == ',' || x == '\n'||x ==' ')
				{
					if (temp == 9) {
						temp = 0;
					}
					temp++;
					//cout << word << endl;
					row.push_back(word);
					switch (temp)
					{
					case 1:
						
						user = word;
						break;
					case 2:
						pass = word;
						break;
					case 3:
						//cout << word << endl;
						first_name = word;
						break;
					case 4:
						last_name = word;
					case 5:
						fname = word;
						break;
					case 6:
						age = stoi(word);
						break;
					case 7:
						cnic = stoll(word);
						break;
					case 8:
						fsc_marks = stoi(word);
						break;
					case 9:
						net_marks = stoi(word);
						break;
					default:
						break;
					}

					word = "";
				}
				else if (x != '\n')
				{
					word += x;
				}
			}
			//cout << linesRead;
			s.push_back(Student(user, pass, first_name,last_name, fname, age, cnic, fsc_marks, net_marks));
		}
	}
	Admin   a(a_user, a_pass);
	admin = a;
	file.close();
}
void Output_File(vector<Student>& s, Admin& admin) {
	//here write the code for the file opening and writing
	ofstream file;
	file.open("data.csv");
	file << admin.get_username() << "," << admin.get_password() <<"," << endl;
	file << "Username,Password,First_Name,Last_Name,Father_Name,Age,CNIC,FSC_Marks,NET_Marks"<<"," << endl;
	for (int i = 0; i < s.size(); i++) {
		file << s[i].get_username() << "," << s[i].get_password() << "," << s[i].get_firstname() << "," << s[i].get_lastname() << "," << s[i].get_fname() << "," << s[i].get_age() << "," << s[i].get_cnic() << "," << s[i].get_fscm() << "," << s[i].get_netmarks() <<"," << endl;
	}
	file.close();
}
void Add_MCQ(vector<MCQ>& m) {
	string q, option[4];
	char correct_option;
	cout << "Enter the question" << endl;
	getline(cin, q);
	system("pause");
	system("cls");
	cout << "Enter the options 1" << endl;
	getline(cin, option[0]);
	system("pause");
	system("cls");
	cout << "Enter the options 2" << endl;
	getline(cin, option[1]);
	system("pause");
	system("cls");
	cout << "Enter the options 3" << endl;
	getline(cin, option[2]);
	system("pause");
	system("cls");
	cout << "Enter the options 4" << endl;
	getline(cin, option[3]);
	system("pause");
	system("cls");
	cout << "Enter the correct option" << endl;
	cin >> correct_option;
	system("pause");
	system("cls");
	m.push_back(MCQ(q, option, correct_option));
}
void Read_MCQ(vector<MCQ>& m) {
	//here write the code for the file opening and reading
	ifstream file;
	file.open("QuestionBank.csv");
	vector<string> row;
	string question, option[4];
	char correct_option=' ';
	string line, word;
	int linesRead = -1, temp = 0;
	while (getline(file,line))
	{
		linesRead++;
		if (linesRead == 0)
		{
			continue;
		}
		else {
			for (auto x : line)
			{
				if (x == ',' || x == '\n')
				{
					if (temp == 6) {
						temp = 0;
					}
					temp++;
					//cout << word << endl;
					row.push_back(word);
					switch (temp)
					{
					case 1:

						question = word;
						break;
					case 2:
						option[0] = word;
						break;
					case 3:
						//cout << word << endl;
						option[1] = word;
						break;
					case 4:
						option[2] = word;
						break;
					case 5:
						option[3] = word;
						break;
					case 6:
						correct_option = word[0];
						break;
					default:
						break;

					}
					word = "";
				}
				else if (x != '\n')
				{
					word += x;
				}
			}
			m.push_back(MCQ(question, option, correct_option));
		}
	}
}
void Save_MCQ(vector<MCQ>& mcq) {
	ofstream file;
	file.open("QuestionBank.csv");
	file << "Question,Option1,Option2,Option3,Option4,Correct_Option" << endl;
	for (int i = 0; i < mcq.size(); i++) {
		file << mcq[i].get_questions() << "," << mcq[i].get_options()[0] << "," << mcq[i].get_options()[1] << "," << mcq[i].get_options()[2] << "," << mcq[i].get_options()[3] << "," << mcq[i].get_answers()<<"," << endl;
	}
	file.close();
}