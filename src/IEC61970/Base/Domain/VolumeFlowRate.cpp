///////////////////////////////////////////////////////////
//  VolumeFlowRate.cpp
//  Implementation of the Class VolumeFlowRate
//  Created on:      28-Jan-2016 12:47:41
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#include "VolumeFlowRate.h"

using IEC61970::Base::Domain::VolumeFlowRate;


VolumeFlowRate::VolumeFlowRate(){

}



VolumeFlowRate::~VolumeFlowRate(){

}


const IEC61970::Base::Domain::UnitMultiplier VolumeFlowRate::multiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol VolumeFlowRate::unit = IEC61970::Base::Domain::UnitSymbol::m3Pers;
