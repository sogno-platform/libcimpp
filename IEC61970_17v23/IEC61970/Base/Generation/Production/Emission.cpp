///////////////////////////////////////////////////////////
//  Emission.cpp
//  Implementation of the Class Emission
///////////////////////////////////////////////////////////

#include "Emission.h"

using IEC61970::Base::Generation::Production::Emission;


Emission::Emission(){

}



Emission::~Emission(){

}


const IEC61970::Base::Domain::UnitMultiplier Emission::multiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol Emission::unit = IEC61970::Base::Domain::UnitSymbol::kgPerJ;
