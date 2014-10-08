/*
 * ModelDuck.cpp
 *
 *  Created on: Oct 7, 2014
 *      Author: eolinea
 */

#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "Mute.h"

ModelDuck::ModelDuck() {
	flyBehavior = new FlyNoWay();
	quackBehavior = new Mute();

}

ModelDuck::~ModelDuck() {
	// TODO Auto-generated destructor stub
}

void ModelDuck::display(){
	cout<<"I am a model duck!";
}
