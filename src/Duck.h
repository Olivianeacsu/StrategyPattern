/*
 * Duck.h
 *
 *  Created on: Oct 7, 2014
 *      Author: eolinea
 */

#ifndef DUCK_H_
#define DUCK_H_
#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck {
protected:
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;
public:
	virtual ~Duck();

	virtual void setFlyBehavior(FlyBehavior* newfB);
	virtual void setQuackBehavior(QuackBehavior* newQB);
	virtual void display()=0;
	virtual void performFly();
	virtual void performQuack();
	virtual void swim();
};

#endif /* DUCK_H_ */
