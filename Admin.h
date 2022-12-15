#pragma once
#include<iostream>
#include"Admission.h"
#include"MCQ.h"
using namespace std;
class Admin :public Admission {
private:
	MCQ* a = new MCQ;

public:
	Admin() {

	}
	Admin(string us, string p) :Admission(us, p) {

	}
};
