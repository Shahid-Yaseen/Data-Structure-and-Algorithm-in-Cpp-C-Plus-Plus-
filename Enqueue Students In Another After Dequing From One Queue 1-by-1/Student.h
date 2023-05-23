#pragma once
#include<iostream>
#include<string>
#include<ctime>
class Student
{
protected:
	std::string name;
	int score, timeTaken;
public:
	Student();
	~Student();
	Student& startQuizGenerateScore();
	friend std::istream& operator>>(std::istream& c, Student& s);
	friend std::ostream& operator<<(std::ostream& c, Student& s);
};
std::istream& operator>>(std::istream& c, Student& s){
	c >> s.name;
	return c;
}
std::ostream& operator<<(std::ostream& c, Student& s){
	c << "Student Name is " << s.name << std::endl;
	c << "Student Score is " << s.score << std::endl;
	c << "Student Quiz Time taken is  " << s.timeTaken << std::endl;
	return c;
}
Student::Student()
{
	score = 0;
	timeTaken = 0;
}
Student& Student::startQuizGenerateScore(){
	srand(time(0));
	score = rand() % 100;
	timeTaken = 1 + (rand() % 120);
	return *this;
}


Student::~Student()
{
}
