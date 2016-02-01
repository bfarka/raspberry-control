/*
 * contains.h
 *
 *  Created on: Feb 1, 2016
 *      Author: fab
 */

#ifndef CONTAINS_H_
#define CONTAINS_H_


	template<typename T>
	bool contains(T lower, T upper, T value){
		return lower <= value && upper >= value;
	}

#endif /* CONTAINS_H_ */
