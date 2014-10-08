/*
 * Mute.h
 *
 *  Created on: Oct 8, 2014
 *      Author: eolinea
 */

#ifndef MUTE_H_
#define MUTE_H_

#include "QuackBehavior.h"

class Mute: public QuackBehavior {
public:
	Mute();
	virtual ~Mute();
	virtual void quack();
};

#endif /* MUTE_H_ */
