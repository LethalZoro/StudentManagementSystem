#pragma once
#include<iostream>
#include<vector>
using namespace std;
class Admin;
class Student;
void display(int x);
void login(Admin a, vector<Student>& s, vector<MCQ>& mcq);
void NewStudent(vector<Student>& s);
void StudentReg(vector<Student>& s);
void Take_test(vector<Student>& s);
void Generate_merit(vector<Student>& s);
void Input_File(vector<Student>& s,Admin &admin);
void Output_File(vector<Student>& s, Admin& admin);
void Edit_Studentinfo(vector<Student>& s);
void Add_MCQ(vector<MCQ>& m);
void Read_MCQ(vector<MCQ>& m);
void Save_MCQ(vector<MCQ>& mcq);