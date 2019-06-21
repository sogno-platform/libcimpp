///////////////////////////////////////////////////////////
//  Seconds.cpp
//  Implementation of the Class Seconds
///////////////////////////////////////////////////////////

#include "Seconds.h"

using IEC61970::Base::Domain::Seconds;


Seconds::Seconds(){

}



Seconds::~Seconds(){

}


const IEC61970::Base::Domain::UnitMultiplier Seconds::multiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol Seconds::unit = IEC61970::Base::Domain::UnitSymbol::s;
