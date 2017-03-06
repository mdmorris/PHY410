#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include "StudentRecord.h"



StudentRecord::StudentRecord(std::string const lastname, std::string const firstname, float const score) {

			lastname_ = lastname;
			firstname_ = firstname;
			score_ = score;	
		}

StudentRecord::~StudentRecord(){}

void StudentRecord::print() const {std::cout << lastname_ << "," << firstname_ << "," << score_ << std::endl;}
std::string const StudentRecord::lastname() {return lastname_;}
std::string const StudentRecord::firstname() {return firstname_;}
float const StudentRecord::score() const {return score_;}
	

int main(int argc, char * argv[]){

	std::ifstream file(argv[1]);
	std::freopen("sorted.txt","w",stdout);

	std::string line = "";
	std::string last = "";
	std::string first = "";
	float score = 0.;

	std::vector<StudentRecord> records;


	while(std::getline(file,line,',') && line != "") {

		last = line;
		std::getline(file,line,','); first = line;
		std::getline(file,line); score = std::atof(line.c_str());

		StudentRecord r(last,first,score);

		records.push_back(r);
	
	}


	std::sort(records.begin(), records.end());

	for(int i = 0; i < records.size(); i++){

		records[i].print();
	
	}

//	out.close();


	return 0;

}
