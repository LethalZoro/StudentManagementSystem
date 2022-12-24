#pragma once
#include<iostream>
#include"Admission.h"
#include"MCQ.h"
using namespace std;
class Admin :public Admission {	
public:
	Admin();
	Admin(string us, string p);
	void Change_Credentials();
};
