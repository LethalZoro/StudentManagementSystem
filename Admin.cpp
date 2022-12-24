#include<iostream>
#include"Admin.h"
using namespace std;
	Admin::Admin() {

	}
	Admin::Admin(string us, string p) :Admission(us, p) {

	}
	void Admin::Change_Credentials() {
		system("cls");
		cout << "For Admin Credentials" << endl;
		string un, pa;
		cout << "Enter new username: ";
		cin >> un;
		cout << "Enter new password: ";
		cin >> pa;
		set_username(un);
		set_password(pa);
	}

