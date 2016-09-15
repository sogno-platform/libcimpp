///////////////////////////////////////////////////////////
//  VoltageCompensatorDynamics.cpp
//  Implementation of the Class VoltageCompensatorDynamics
//  Created on:      28-Jan-2016 12:47:37
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#include "VoltageCompensatorDynamics.h"

using IEC61970::Dynamics::StandardModels::VoltageCompensatorDynamics::VoltageCompensatorDynamics;


VoltageCompensatorDynamics::VoltageCompensatorDynamics()
	: ExcitationSystemDynamics(nullptr), RemoteInputSignal(nullptr)
{

}



VoltageCompensatorDynamics::~VoltageCompensatorDynamics(){

}
