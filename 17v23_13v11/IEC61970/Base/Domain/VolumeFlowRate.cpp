///////////////////////////////////////////////////////////
//  VolumeFlowRate.cpp
//  Implementation of the Class VolumeFlowRate
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
