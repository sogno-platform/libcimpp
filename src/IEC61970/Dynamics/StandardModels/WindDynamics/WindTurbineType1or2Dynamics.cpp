///////////////////////////////////////////////////////////
//  WindTurbineType1or2Dynamics.cpp
//  Implementation of the Class WindTurbineType1or2Dynamics
//  Original author: civanov
///////////////////////////////////////////////////////////

#include "WindTurbineType1or2Dynamics.h"

using IEC61970::Dynamics::StandardModels::WindDynamics::WindTurbineType1or2Dynamics;


WindTurbineType1or2Dynamics::WindTurbineType1or2Dynamics()
	: AsynchronousMachineDynamics(nullptr), RemoteInputSignal(nullptr)
{

}



WindTurbineType1or2Dynamics::~WindTurbineType1or2Dynamics(){

}
