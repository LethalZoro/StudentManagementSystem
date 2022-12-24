#pragma once
#include<iostream>
#include<vector>
using namespace std;
class Admin;
class Student;
template<typename T>
void display(T x);
void login(Admin& a, vector<Student>& s, vector<MCQ>& mcq);
void NewStudent(vector<Student>& s);
void StudentReg(vector<Student>& s);
int Take_test(vector<Student>& s,vector<MCQ>&mcq );
void Generate_merit(vector<Student>& s);
void Input_File(vector<Student>& s,Admin &admin);
void Output_File(vector<Student>& s, Admin& admin);
void Edit_Studentinfo(vector<Student>& s);
void Add_MCQ(vector<MCQ>& m);
void Read_MCQ(vector<MCQ>& m);
void Save_MCQ(vector<MCQ>& mcq);
void Show_Student(vector<Student>& s);