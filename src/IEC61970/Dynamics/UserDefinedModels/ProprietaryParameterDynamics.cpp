///////////////////////////////////////////////////////////
//  ProprietaryParameterDynamics.cpp
//  Implementation of the Class ProprietaryParameterDynamics
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#include "ProprietaryParameterDynamics.h"

using IEC61970::Dynamics::UserDefinedModels::ProprietaryParameterDynamics;


ProprietaryParameterDynamics::ProprietaryParameterDynamics()
	: TurbineGovernorUserDefined(nullptr), VoltageAdjusterUserDefined(nullptr), AsynchronousMachineUserDefined(nullptr), UnderexcitationLimiterUserDefined(nullptr), VoltageCompensatorUserDefined(nullptr), PFVArControllerType1UserDefined(nullptr), OverexcitationLimiterUserDefined(nullptr), PowerSystemStabilizerUserDefined(nullptr), DiscontinuousExcitationControlUserDefined(nullptr), PFVArControllerType2UserDefined(nullptr), MechanicalLoadUserDefined(nullptr), SynchronousMachineUserDefined(nullptr), LoadUserDefined(nullptr), TurbineLoadControllerUserDefined(nullptr), ExcitationSystemUserDefined(nullptr)
{

}



ProprietaryParameterDynamics::~ProprietaryParameterDynamics(){

}
