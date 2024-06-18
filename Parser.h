#ifndef PARSER_H
#define PARSER_H

#include<iostream>
#include<sstream>

using namespace std;

template<typename T> class Parser{
	istream& in;
	string stopLine;


public:
	Parser(istream& in, const string & stopLine) : in(in), stopLine(stopLine) {}


	bool readNext(T& n) {
		string buffer;
		getline(in, buffer);
		if (buffer == stopLine) {
			return false;
		}

		istringstream iss(buffer);
		iss >> n;

		return true;
	}
};

#endif