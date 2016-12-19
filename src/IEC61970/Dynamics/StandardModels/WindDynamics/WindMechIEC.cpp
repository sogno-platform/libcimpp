///////////////////////////////////////////////////////////
//  WindMechIEC.cpp
//  Implementation of the Class WindMechIEC
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#include "WindMechIEC.h"

using IEC61970::Dynamics::StandardModels::WindDynamics::WindMechIEC;


WindMechIEC::WindMechIEC()
	: WindTurbineType4bIEC(nullptr), WindTurbineType1or2IEC(nullptr), WindGenTurbineType3IEC(nullptr)
{

}



WindMechIEC::~WindMechIEC(){

}
