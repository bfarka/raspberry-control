/*
 * GPIOValidator.h
 *
 *  Created on: Feb 1, 2016
 *      Author: fab
 */

#ifndef GPIOVALIDATOR_H_
#define GPIOVALIDATOR_H_

#include <map>
#include <string>
#include "gtest/gtest_prod.h"

namespace GPIO{

class GPIOValidator {


public:
	bool isValid(int gpio);
	GPIOValidator();
	~GPIOValidator();


private:
	FRIEND_TEST(GPIOValidatorTest, testProperties);
	GPIOValidator( std::string);
	const std::map<int, std::string> deviceProperties;

};

void loadDeviceProperties(std::string filename);

}




#endif /* GPIOVALIDATOR_H_ */
