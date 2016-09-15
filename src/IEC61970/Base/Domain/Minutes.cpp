///////////////////////////////////////////////////////////
//  Minutes.cpp
//  Implementation of the Class Minutes
//  Created on:      28-Jan-2016 12:45:44
///////////////////////////////////////////////////////////

#include "Minutes.h"

using IEC61970::Base::Domain::Minutes;


Minutes::Minutes(){

}



Minutes::~Minutes(){

}


const IEC61970::Base::Domain::UnitMultiplier Minutes::multiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol Minutes::unit = IEC61970::Base::Domain::UnitSymbol::min;
