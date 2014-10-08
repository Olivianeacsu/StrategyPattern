/*
 * FlyWithWings.h
 *
 *  Created on: Oct 7, 2014
 *      Author: eolinea
 */


#ifndef FLYWITHWINGS_H_
#define FLYWITHWINGS_H_

#include "FlyBehavior.h"
#include <iostream>
using namespace std;

class FlyWithWings: public FlyBehavior {
public:
	FlyWithWings();
	virtual ~FlyWithWings();
	virtual void fly(){
		cout<<"I am flying!";
	}
};

#endif /* FLYWITHWINGS_H_ */
