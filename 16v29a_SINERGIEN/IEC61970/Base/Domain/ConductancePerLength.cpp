///////////////////////////////////////////////////////////
//  ConductancePerLength.cpp
//  Implementation of the Class ConductancePerLength
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#include "ConductancePerLength.h"

using IEC61970::Base::Domain::ConductancePerLength;


ConductancePerLength::ConductancePerLength(){

}



ConductancePerLength::~ConductancePerLength(){

}


const IEC61970::Base::Domain::UnitMultiplier ConductancePerLength::denominatorMultiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol ConductancePerLength::denominatorUnit = IEC61970::Base::Domain::UnitSymbol::m;
const IEC61970::Base::Domain::UnitMultiplier ConductancePerLength::multiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol ConductancePerLength::unit = IEC61970::Base::Domain::UnitSymbol::S;
