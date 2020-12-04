///////////////////////////////////////////////////////////
//  Speed.cpp
//  Implementation of the Class Speed
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#include "Speed.h"

using IEC61970::Base::Domain::Speed;


Speed::Speed(){

}



Speed::~Speed(){

}


const IEC61970::Base::Domain::UnitMultiplier Speed::denominatorMultiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol Speed::denominatorUnit = IEC61970::Base::Domain::UnitSymbol::s;
const IEC61970::Base::Domain::UnitMultiplier Speed::multiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol Speed::unit = IEC61970::Base::Domain::UnitSymbol::m;
