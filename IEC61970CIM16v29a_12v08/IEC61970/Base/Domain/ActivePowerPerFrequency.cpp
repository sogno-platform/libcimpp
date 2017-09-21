///////////////////////////////////////////////////////////
//  ActivePowerPerFrequency.cpp
//  Implementation of the Class ActivePowerPerFrequency
///////////////////////////////////////////////////////////

#include "ActivePowerPerFrequency.h"

using IEC61970::Base::Domain::ActivePowerPerFrequency;


ActivePowerPerFrequency::ActivePowerPerFrequency(){

}



ActivePowerPerFrequency::~ActivePowerPerFrequency(){

}


const IEC61970::Base::Domain::UnitSymbol ActivePowerPerFrequency::denominatorUnit = IEC61970::Base::Domain::UnitSymbol::Hz;
const IEC61970::Base::Domain::UnitSymbol ActivePowerPerFrequency::unit = IEC61970::Base::Domain::UnitSymbol::W;
