#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include "StudentRecord.h"



StudentRecord::StudentRecord(std::string lastname, std::string firstname, float score){

			lastname_ = lastname;
			firstname_ = firstname;
			score_ = score;	
		}

StudentRecord::~StudentRecord(){}

void StudentRecord::print() const {std::cout << lastname_ << "," << firstname_ << "," << score_ << std::endl;}
std::string StudentRecord::lastname() {return lastname_;}
std::string StudentRecord::firstname() {return firstname_;}
float StudentRecord::score() {return score_;}

	

int main(int argc, char * argv[]){

	std::ifstream file(argv[1]);
	std::string line = "";
	
	std::string last = "";
	std::string first = "";
	float score = 0.;

	std::vector<StudentRecord> records;

	int i = 0;

	while(std::getline(file,line,',') && line != "") {

		last = line;
		std::getline(file,line,','); first = line;
		std::getline(file,line); score = std::atof(line.c_str());

		StudentRecord r(last,first,score);

		records.push_back(r);
	
	}


	float sum = 0.;
	float average = 0.;

	for (int j = 0; j < records.size(); j++){

		sum += records[j].score();
	}
	
	average = sum / records.size();

	std::cout << std::setprecision(2) << std::fixed << "The Average Score is: " << average << std::endl;

	return 0;

}
