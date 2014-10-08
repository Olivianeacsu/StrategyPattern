/*
 * QuackBehavior.h
 *
 *  Created on: Oct 7, 2014
 *      Author: eolinea
 */

#ifndef QUACKBEHAVIOR_H_
#define QUACKBEHAVIOR_H_

class QuackBehavior {
public:
	virtual ~QuackBehavior();
	virtual void quack()=0;
};

#endif /* QUACKBEHAVIOR_H_ */
