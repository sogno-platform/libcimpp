///////////////////////////////////////////////////////////
//  Damping.cpp
//  Implementation of the Class Damping
///////////////////////////////////////////////////////////

#include "Damping.h"

using IEC61970::Base::Domain::Damping;


Damping::Damping(){

}



Damping::~Damping(){

}


const IEC61970::Base::Domain::UnitMultiplier Damping::denominatorMultiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol Damping::denominatorUnit = IEC61970::Base::Domain::UnitSymbol::Hz;
const IEC61970::Base::Domain::UnitMultiplier Damping::multiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol Damping::unit = IEC61970::Base::Domain::UnitSymbol::none;
