///////////////////////////////////////////////////////////
//  CostPerEnergyUnit.cpp
//  Implementation of the Class CostPerEnergyUnit
//  Created on:      28-Jan-2016 12:43:44
///////////////////////////////////////////////////////////

#include "CostPerEnergyUnit.h"

using IEC61970::Base::Domain::CostPerEnergyUnit;


CostPerEnergyUnit::CostPerEnergyUnit(){

}



CostPerEnergyUnit::~CostPerEnergyUnit(){

}


const IEC61970::Base::Domain::UnitMultiplier CostPerEnergyUnit::denominatorMultiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol CostPerEnergyUnit::denominatorUnit = IEC61970::Base::Domain::UnitSymbol::Wh;
