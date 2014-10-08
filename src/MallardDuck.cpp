/*
 * MallardDuck.cpp
 *
 *  Created on: Oct 7, 2014
 *      Author: eolinea
 */

#include "MallardDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"

#include <iostream>
using namespace std;

MallardDuck::MallardDuck() {
	flyBehavior = new FlyWithWings();
	quackBehavior = new Quack();

}

MallardDuck::~MallardDuck() {
	delete flyBehavior;
	delete quackBehavior;
}

void MallardDuck::display(){
	cout<<"I am a mallard duck!";
}

