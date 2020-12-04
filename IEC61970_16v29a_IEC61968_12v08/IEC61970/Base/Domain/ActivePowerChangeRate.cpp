///////////////////////////////////////////////////////////
//  ActivePowerChangeRate.cpp
//  Implementation of the Class ActivePowerChangeRate
///////////////////////////////////////////////////////////

#include "ActivePowerChangeRate.h"

using IEC61970::Base::Domain::ActivePowerChangeRate;


ActivePowerChangeRate::ActivePowerChangeRate(){

}



ActivePowerChangeRate::~ActivePowerChangeRate(){

}


const IEC61970::Base::Domain::UnitMultiplier ActivePowerChangeRate::denominatorMultiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol ActivePowerChangeRate::denominatorUnit = IEC61970::Base::Domain::UnitSymbol::s;
const IEC61970::Base::Domain::UnitSymbol ActivePowerChangeRate::unit = IEC61970::Base::Domain::UnitSymbol::W;
