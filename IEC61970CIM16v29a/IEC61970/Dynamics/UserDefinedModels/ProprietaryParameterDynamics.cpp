///////////////////////////////////////////////////////////
//  ProprietaryParameterDynamics.cpp
//  Implementation of the Class ProprietaryParameterDynamics
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#include "ProprietaryParameterDynamics.h"

using IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics;


ProprietaryParameterDynamics::ProprietaryParameterDynamics()
	: LoadUserDefined(nullptr), VoltageCompensatorUserDefined(nullptr), PFVArControllerType2UserDefined(nullptr), VoltageAdjusterUserDefined(nullptr), PFVArControllerType1UserDefined(nullptr), DiscontinuousExcitationControlUserDefined(nullptr), PowerSystemStabilizerUserDefined(nullptr), UnderexcitationLimiterUserDefined(nullptr), OverexcitationLimiterUserDefined(nullptr), ExcitationSystemUserDefined(nullptr), MechanicalLoadUserDefined(nullptr), TurbineLoadControllerUserDefined(nullptr), TurbineGovernorUserDefined(nullptr), AsynchronousMachineUserDefined(nullptr), SynchronousMachineUserDefined(nullptr)
{

}



ProprietaryParameterDynamics::~ProprietaryParameterDynamics(){

}
