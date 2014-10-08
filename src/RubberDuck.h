/*
 * RubberDuck.h
 *
 *  Created on: Oct 7, 2014
 *      Author: eolinea
 */

#ifndef RUBBERDUCK_H_
#define RUBBERDUCK_H_

#include "Duck.h"

class RubberDuck: public Duck {
public:
	RubberDuck();
	virtual ~RubberDuck() {
		delete flyBehavior;
		delete quackBehavior;
	}
	virtual void display();
};

#endif /* RUBBERDUCK_H_ */
