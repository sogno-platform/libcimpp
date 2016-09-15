///////////////////////////////////////////////////////////
//  CostRate.cpp
//  Implementation of the Class CostRate
//  Created on:      28-Jan-2016 12:43:45
///////////////////////////////////////////////////////////

#include "CostRate.h"

using IEC61970::Base::Domain::CostRate;


CostRate::CostRate(){

}



CostRate::~CostRate(){

}


const IEC61970::Base::Domain::UnitMultiplier CostRate::denominatorMultiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol CostRate::denominatorUnit = IEC61970::Base::Domain::UnitSymbol::s;
