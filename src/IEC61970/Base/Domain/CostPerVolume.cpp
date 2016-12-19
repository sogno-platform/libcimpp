///////////////////////////////////////////////////////////
//  CostPerVolume.cpp
//  Implementation of the Class CostPerVolume
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#include "CostPerVolume.h"

using IEC61970::Base::Domain::CostPerVolume;


CostPerVolume::CostPerVolume(){

}



CostPerVolume::~CostPerVolume(){

}


const IEC61970::Base::Domain::UnitMultiplier CostPerVolume::denominatorMultiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol CostPerVolume::denominatorUnit = IEC61970::Base::Domain::UnitSymbol::m3;
