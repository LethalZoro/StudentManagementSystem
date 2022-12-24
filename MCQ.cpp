#include<iostream>
#include<algorithm>
#include "MCQ.h"
using namespace std;
	MCQ::MCQ() {
		questions = "";
		
		answers = 0;
	}
	MCQ::MCQ(string q, string* o, char a) {
		questions = q;
		copy(o, o + 4, options);
		answers = a;
	}
	void MCQ::set_questions(string q) {
		questions = q;
	}
	void MCQ::set_options(string* o) {
		copy(o, o + 4, options);
	}
	void MCQ::set_answers(char a) {
		answers = a;
	}
	string MCQ::get_questions() {
		return questions;
	}
	string* MCQ::get_options() {
		return options;
	}
	char MCQ::get_answers() {
		return answers;
	}
