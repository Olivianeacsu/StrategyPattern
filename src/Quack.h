/*
 * Quack.h
 *
 *  Created on: Oct 7, 2014
 *      Author: eolinea
 */

#ifndef QUACK_H_
#define QUACK_H_

#include "QuackBehavior.h"
#include <iostream>
using namespace std;

class Quack: public QuackBehavior {
public:
	virtual ~Quack();
	Quack();
	virtual void quack(){
		cout<<"Quack!" << endl;
	}
};

#endif /* QUACK_H_ */
