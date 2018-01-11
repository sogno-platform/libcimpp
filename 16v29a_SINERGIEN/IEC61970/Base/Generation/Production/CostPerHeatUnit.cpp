///////////////////////////////////////////////////////////
//  CostPerHeatUnit.cpp
//  Implementation of the Class CostPerHeatUnit
///////////////////////////////////////////////////////////

#include "CostPerHeatUnit.h"

using IEC61970::Base::Generation::Production::CostPerHeatUnit;


CostPerHeatUnit::CostPerHeatUnit(){

}



CostPerHeatUnit::~CostPerHeatUnit(){

}


const IEC61970::Base::Domain::UnitMultiplier CostPerHeatUnit::denominatorMultiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol CostPerHeatUnit::denominatorUnit = IEC61970::Base::Domain::UnitSymbol::J;
