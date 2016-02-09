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

using namespace std;

namespace GPIO{

	GPIOValidator::GPIOValidator(void){

	}

	GPIOValidator::~GPIOValidator(void){


	}

	bool GPIOValidator::isValid(int gpio){

		return false;
	}



	GPIOValidator::GPIOValidator( std::string properties){


	}

	void loadDeviceProperties(std::string filename){
		cout << "load properties" << endl;
	}




}

