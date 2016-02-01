/*
 * GPIOValidator.h
 *
 *  Created on: Feb 1, 2016
 *      Author: fab
 */

#ifndef GPIOVALIDATOR_H_
#define GPIOVALIDATOR_H_

namespace GPIO{

class GPIOValidator {
public:
	bool isValid(int gpio);
	GPIOValidator();
	~GPIOValidator();
};

}



#endif /* GPIOVALIDATOR_H_ */
