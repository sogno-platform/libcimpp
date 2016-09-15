///////////////////////////////////////////////////////////
//  MechanicalLoadDynamics.cpp
//  Implementation of the Class MechanicalLoadDynamics
//  Created on:      28-Jan-2016 12:45:42
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#include "MechanicalLoadDynamics.h"

using IEC61970::Dynamics::StandardModels::MechanicalLoadDynamics::MechanicalLoadDynamics;


MechanicalLoadDynamics::MechanicalLoadDynamics()
	: AsynchronousMachineDynamics(nullptr), SynchronousMachineDynamics(nullptr)
{

}



MechanicalLoadDynamics::~MechanicalLoadDynamics(){

}
