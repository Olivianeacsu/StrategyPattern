/*
 * Duck.cpp
 *
 *  Created on: Oct 7, 2014
 *      Author: eolinea
 */

#include "Duck.h"
#include <iostream>
using namespace std;

Duck::~Duck() {
	delete flyBehavior;
	delete quackBehavior;
}

void Duck::setFlyBehavior(FlyBehavior* newfB){
	flyBehavior = newfB;
}
void Duck::setQuackBehavior(QuackBehavior* newQB){
	quackBehavior = newQB;
}

void Duck::performFly(){
	flyBehavior->fly();
}
void Duck::performQuack(){
	quackBehavior->quack();
}

void Duck::swim(){
	cout << "i am swimming" << endl;
}
