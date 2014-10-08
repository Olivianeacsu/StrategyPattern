/*
 * Squeak.h
 *
 *  Created on: Oct 8, 2014
 *      Author: eolinea
 */

#ifndef SQUEAK_H_
#define SQUEAK_H_

#include "QuackBehavior.h"

class Squeak: public QuackBehavior {
public:
	Squeak();
	virtual ~Squeak();
	virtual void quack();
};

#endif /* SQUEAK_H_ */
