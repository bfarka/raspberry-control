/*
 * ContainsTest.cpp
 *
 *  Created on: Feb 1, 2016
 *      Author: fab
 */
#include "contains.h"
#include "gtest/gtest.h"


template bool contains(int,int,int);


TEST(Contains,DEFAULT){
	ASSERT_TRUE(contains(2,4,3));
	ASSERT_TRUE(contains(3,4,3));
	ASSERT_TRUE(contains(2,3,3));
	ASSERT_FALSE(contains(2,3,5));

}

