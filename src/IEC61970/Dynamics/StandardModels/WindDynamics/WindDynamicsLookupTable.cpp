///////////////////////////////////////////////////////////
//  WindDynamicsLookupTable.cpp
//  Implementation of the Class WindDynamicsLookupTable
//  Created on:      28-Jan-2016 12:47:50
//  Original author: civanov
///////////////////////////////////////////////////////////

#include "WindDynamicsLookupTable.h"

using IEC61970::Dynamics::StandardModels::WindDynamics::WindDynamicsLookupTable;


WindDynamicsLookupTable::WindDynamicsLookupTable()
	: WindContRotorRIEC(nullptr), WindContCurrLimIEC(nullptr), WindPlantFreqPcontrolIEC(nullptr), WindContPType3IEC(nullptr)
{

}



WindDynamicsLookupTable::~WindDynamicsLookupTable(){

}
