/*
 * MallardDuck.h
 *
 *  Created on: Oct 7, 2014
 *      Author: eolinea
 */

#ifndef MALLARDDUCK_H_
#define MALLARDDUCK_H_

#include "Duck.h"

class MallardDuck: public Duck {
public:
	MallardDuck();
	virtual ~MallardDuck();
	virtual void display();

};

#endif /* MALLARDDUCK_H_ */
