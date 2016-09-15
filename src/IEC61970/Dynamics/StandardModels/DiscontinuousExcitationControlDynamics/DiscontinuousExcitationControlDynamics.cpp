///////////////////////////////////////////////////////////
//  DiscontinuousExcitationControlDynamics.cpp
//  Implementation of the Class DiscontinuousExcitationControlDynamics
//  Created on:      28-Jan-2016 12:44:08
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#include "DiscontinuousExcitationControlDynamics.h"

using IEC61970::Dynamics::StandardModels::DiscontinuousExcitationControlDynamics::DiscontinuousExcitationControlDynamics;


DiscontinuousExcitationControlDynamics::DiscontinuousExcitationControlDynamics()
	: ExcitationSystemDynamics(nullptr), RemoteInputSignal(nullptr)
{

}



DiscontinuousExcitationControlDynamics::~DiscontinuousExcitationControlDynamics(){

}
