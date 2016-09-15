///////////////////////////////////////////////////////////
//  UnderexcitationLimiterDynamics.cpp
//  Implementation of the Class UnderexcitationLimiterDynamics
//  Created on:      28-Jan-2016 12:47:28
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
