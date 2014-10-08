/*
 * FlyNoWay.h
 *
 *  Created on: Oct 7, 2014
 *      Author: eolinea
 */

#ifndef FLYNOWAY_H_
#define FLYNOWAY_H_

#include "FlyBehavior.h"
#include <iostream>
using namespace std;


class FlyNoWay: public FlyBehavior {
public:
	FlyNoWay();
	virtual ~FlyNoWay();
	virtual void fly(){
			cout<<"I can't fly!" << endl;
		}
};

#endif /* FLYNOWAY_H_ */
