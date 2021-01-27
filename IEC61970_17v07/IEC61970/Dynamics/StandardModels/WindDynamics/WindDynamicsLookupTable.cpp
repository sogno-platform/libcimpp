///////////////////////////////////////////////////////////
//  WindDynamicsLookupTable.cpp
//  Implementation of the Class WindDynamicsLookupTable
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
