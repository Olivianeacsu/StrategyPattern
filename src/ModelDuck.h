/*
 * ModelDuck.h
 *
 *  Created on: Oct 7, 2014
 *      Author: eolinea
 */

#ifndef MODELDUCK_H_
#define MODELDUCK_H_

#include "Duck.h"

class ModelDuck: public Duck {
public:
	ModelDuck();
	virtual ~ModelDuck();
	virtual void display();
};

#endif /* MODELDUCK_H_ */
