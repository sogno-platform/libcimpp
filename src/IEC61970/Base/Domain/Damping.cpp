///////////////////////////////////////////////////////////
//  Damping.cpp
//  Implementation of the Class Damping
//  Created on:      28-Jan-2016 12:43:52
///////////////////////////////////////////////////////////

#include "Damping.h"

using IEC61970::Base::Domain::Damping;


Damping::Damping(){

}



Damping::~Damping(){

}


const IEC61970::Base::Domain::UnitMultiplier Damping::multiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol Damping::unit = IEC61970::Base::Domain::UnitSymbol::onePerHz;
