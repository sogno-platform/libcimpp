///////////////////////////////////////////////////////////
//  CostPerHeatUnit.cpp
//  Implementation of the Class CostPerHeatUnit
//  Created on:      28-Jan-2016 12:43:45
///////////////////////////////////////////////////////////

#include "CostPerHeatUnit.h"

using IEC61970::Base::Generation::Production::CostPerHeatUnit;


CostPerHeatUnit::CostPerHeatUnit(){

}



CostPerHeatUnit::~CostPerHeatUnit(){

}


const IEC61970::Base::Domain::UnitMultiplier CostPerHeatUnit::denominatorMultiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol CostPerHeatUnit::denominatorUnit = IEC61970::Base::Domain::UnitSymbol::J;
