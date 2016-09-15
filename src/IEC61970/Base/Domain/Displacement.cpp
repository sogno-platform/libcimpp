///////////////////////////////////////////////////////////
//  Displacement.cpp
//  Implementation of the Class Displacement
//  Created on:      28-Jan-2016 12:44:10
//  Original author: LOO
///////////////////////////////////////////////////////////

#include "Displacement.h"

using IEC61970::Base::Domain::Displacement;


Displacement::Displacement(){

}



Displacement::~Displacement(){

}


const IEC61970::Base::Domain::UnitMultiplier Displacement::multiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol Displacement::unit = IEC61970::Base::Domain::UnitSymbol::m;
