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
	ifstream file;
	file.open("data.csv");
	vector<string> row;
	string user, pass, name, fname;
	int age, cnic, fsc_marks, net_marks;
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
				if (x == ',' || x == '\n')
				{
					if (temp == 8) {
						temp = 0;
					}
					temp++;
					//cout << word << endl;
					row.push_back(word);
					switch (temp)
					{
					case 1:
						cout << "hehe" << endl;
						//students[linesRead - 1].set_username(word);
						user = word;
						break;
					case 2:
						//students[linesRead - 2].set_password(word); cout << "hehe" << endl;
						pass = word;
						break;
					case 3:
						//students[linesRead - 2].set_name(word); cout << "hehe" << endl;
						name = word;
						break;
					case 4:
						//students[linesRead - 2].set_fn(word); cout << "hehe" << endl;
						fname = word;
						break;
					case 5:

						//students[linesRead - 2].set_age(stoi(word)); cout << "hehe" << endl;
						age = stoi(word);
						break;
					case 6:
						//students[linesRead - 2].set_cnic(stoi(word)); cout << "hehe" << endl;
						cnic = stoi(word);
						break;
					case 7:
						//students[linesRead - 2].set_fscm(stoi(word)); cout << "hehe" << endl;
						fsc_marks = stoi(word);
						break;
					case 8:
						//students[linesRead - 2].set_netmarks(stoi(word)); cout << "hehe" << endl;
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
			/*Student =new Student(user, pass, name, fname, age, cnic, fsc_marks);*/
			cout << linesRead;
			students.push_back(Student(user, pass, name, fname, age, cnic, fsc_marks, net_marks));
		}
	}
	file.close();
	Admin   a(a_user, a_pass);
	//Student s("abc", "xyz");
	login(a, students);
	vector<MCQ> Exam;
	// test
	return 0;
}