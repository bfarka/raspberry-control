/*
 * GPIOValidator.cpp
 *
 *  Created on: Feb 1, 2016
 *      Author: fab
 */

#include "GPIOValidator.h"
#include <stdio.h>
#include <iostream>
#include <map>
#include <string>
#include <fstream>


#define RASPBERRY_CPUINFO "/proc/cpuinfo"

using namespace std;

namespace GPIO{

	GPIOValidator::GPIOValidator(void){
		GPIOValidator(RASPBERRY_CPUINFO);
	}

	GPIOValidator::~GPIOValidator(void){


	}

	bool GPIOValidator::isValid(int gpio){

		return false;
	}



	GPIOValidator::GPIOValidator( std::string properties){
		cout << properties << endl;

		 ifstream inFile(properties);
		  if (!inFile) {
		    cerr << "File " << properties << " not found." << endl;
		  }

		  string line;
		   while (getline(inFile, line)) {
		     if (line.empty()) continue;

		     cout << line << endl;
		   }

	}

	void loadDeviceProperties(std::string filename){
		cout << "load properties" << endl;
	}




}

