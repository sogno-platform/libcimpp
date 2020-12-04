///////////////////////////////////////////////////////////
//  VoltageCompensatorDynamics.cpp
//  Implementation of the Class VoltageCompensatorDynamics
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
