///////////////////////////////////////////////////////////
//  RotationSpeed.cpp
//  Implementation of the Class RotationSpeed
///////////////////////////////////////////////////////////

#include "RotationSpeed.h"

using IEC61970::Base::Domain::RotationSpeed;


RotationSpeed::RotationSpeed(){

}



RotationSpeed::~RotationSpeed(){

}


const IEC61970::Base::Domain::UnitMultiplier RotationSpeed::multiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol RotationSpeed::unit = IEC61970::Base::Domain::UnitSymbol::Hz;
