/*
 * FlyRocketPowered.h
 *
 *  Created on: Oct 8, 2014
 *      Author: eolinea
 */

#ifndef FLYROCKETPOWERED_H_
#define FLYROCKETPOWERED_H_

#include "FlyBehavior.h"

class FlyRocketPowered: public FlyBehavior {
public:
	FlyRocketPowered();
	virtual ~FlyRocketPowered();
	virtual void fly();
};

#endif /* FLYROCKETPOWERED_H_ */
