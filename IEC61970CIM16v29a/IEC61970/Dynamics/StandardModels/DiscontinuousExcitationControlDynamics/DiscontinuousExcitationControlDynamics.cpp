///////////////////////////////////////////////////////////
//  DiscontinuousExcitationControlDynamics.cpp
//  Implementation of the Class DiscontinuousExcitationControlDynamics
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
