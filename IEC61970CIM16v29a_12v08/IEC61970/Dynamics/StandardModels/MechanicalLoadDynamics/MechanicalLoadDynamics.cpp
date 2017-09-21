///////////////////////////////////////////////////////////
//  MechanicalLoadDynamics.cpp
//  Implementation of the Class MechanicalLoadDynamics
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
