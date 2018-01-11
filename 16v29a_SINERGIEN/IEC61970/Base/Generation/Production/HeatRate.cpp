///////////////////////////////////////////////////////////
//  HeatRate.cpp
//  Implementation of the Class HeatRate
///////////////////////////////////////////////////////////

#include "HeatRate.h"

using IEC61970::Base::Generation::Production::HeatRate;


HeatRate::HeatRate(){

}



HeatRate::~HeatRate(){

}


const IEC61970::Base::Domain::UnitMultiplier HeatRate::denominatorMultiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol HeatRate::denominatorUnit = IEC61970::Base::Domain::UnitSymbol::s;
const IEC61970::Base::Domain::UnitSymbol HeatRate::unit = IEC61970::Base::Domain::UnitSymbol::J;
