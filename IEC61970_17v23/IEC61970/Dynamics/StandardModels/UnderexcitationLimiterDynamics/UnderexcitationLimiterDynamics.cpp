///////////////////////////////////////////////////////////
//  UnderexcitationLimiterDynamics.cpp
//  Implementation of the Class UnderexcitationLimiterDynamics
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#include "UnderexcitationLimiterDynamics.h"

using IEC61970::Dynamics::StandardModels::UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics;


UnderexcitationLimiterDynamics::UnderexcitationLimiterDynamics()
	: ExcitationSystemDynamics(nullptr), RemoteInputSignal(nullptr)
{

}



UnderexcitationLimiterDynamics::~UnderexcitationLimiterDynamics(){

}
