///////////////////////////////////////////////////////////
//  KiloActivePower.cpp
//  Implementation of the Class KiloActivePower
///////////////////////////////////////////////////////////

#include "KiloActivePower.h"

using IEC61970::Base::Domain::KiloActivePower;


KiloActivePower::KiloActivePower(){

}



KiloActivePower::~KiloActivePower(){

}


const IEC61970::Base::Domain::UnitMultiplier KiloActivePower::multiplier = IEC61970::Base::Domain::UnitMultiplier::k;
const IEC61970::Base::Domain::UnitSymbol KiloActivePower::unit = IEC61970::Base::Domain::UnitSymbol::W;
