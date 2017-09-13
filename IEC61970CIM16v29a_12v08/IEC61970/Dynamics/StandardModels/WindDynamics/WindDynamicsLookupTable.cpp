///////////////////////////////////////////////////////////
//  WindDynamicsLookupTable.cpp
//  Implementation of the Class WindDynamicsLookupTable
//  Original author: civanov
///////////////////////////////////////////////////////////

#include "WindDynamicsLookupTable.h"

using IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable;


WindDynamicsLookupTable::WindDynamicsLookupTable()
	: WindPlantFreqPcontrolIEC(nullptr), WindPlantReactiveControlIEC(nullptr), WindProtectionIEC(nullptr), WindContQPQULimIEC(nullptr), WindContCurrLimIEC(nullptr), WindContPType3IEC(nullptr), WindContRotorRIEC(nullptr), WindPitchContPowerIEC(nullptr), WindGenType3bIEC(nullptr)
{

}



WindDynamicsLookupTable::~WindDynamicsLookupTable(){

}
