///////////////////////////////////////////////////////////
//  Temperature.cpp
//  Implementation of the Class Temperature
//  Created on:      28-Jan-2016 12:47:13
///////////////////////////////////////////////////////////

#include "Temperature.h"

using IEC61970::Base::Domain::Temperature;


Temperature::Temperature(){

}



Temperature::~Temperature(){

}


const IEC61970::Base::Domain::UnitMultiplier Temperature::multiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol Temperature::unit = IEC61970::Base::Domain::UnitSymbol::degC;
