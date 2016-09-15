///////////////////////////////////////////////////////////
//  PFVArControllerType1Dynamics.cpp
//  Implementation of the Class PFVArControllerType1Dynamics
//  Created on:      28-Jan-2016 12:45:59
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#include "PFVArControllerType1Dynamics.h"

using IEC61970::Dynamics::StandardModels::PFVArControllerType1Dynamics::PFVArControllerType1Dynamics;


PFVArControllerType1Dynamics::PFVArControllerType1Dynamics()
	: ExcitationSystemDynamics(nullptr), RemoteInputSignal(nullptr)
{

}



PFVArControllerType1Dynamics::~PFVArControllerType1Dynamics(){

}
