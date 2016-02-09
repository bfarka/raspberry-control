/*
 * GPIOValidtorTest.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: fab
 */
#include "gtest/gtest.h"
#include "GPIOValidator.h"
#include <string>

using namespace std;
namespace GPIO{

class GPIOValidatorTest : public testing::Test {
//   // ...
};

TEST_F(GPIOValidatorTest, testProperties){


	GPIO::GPIOValidator( "asdf");

}
}
