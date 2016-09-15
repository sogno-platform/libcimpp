///////////////////////////////////////////////////////////
//  WindProtectionIEC.cpp
//  Implementation of the Class WindProtectionIEC
//  Created on:      28-Jan-2016 12:47:58
//  Original author: civanov
///////////////////////////////////////////////////////////

#include "WindProtectionIEC.h"

using IEC61970::Dynamics::StandardModels::WindDynamics::WindProtectionIEC;


WindProtectionIEC::WindProtectionIEC()
	: WindTurbineType3or4IEC(nullptr), WindTurbineType1or2IEC(nullptr)
{

}



WindProtectionIEC::~WindProtectionIEC(){

}
