///////////////////////////////////////////////////////////
//  InductancePerLength.cpp
//  Implementation of the Class InductancePerLength
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#include "InductancePerLength.h"

using IEC61970::Base::Domain::InductancePerLength;


InductancePerLength::InductancePerLength(){

}



InductancePerLength::~InductancePerLength(){

}


const IEC61970::Base::Domain::UnitMultiplier InductancePerLength::denominatorMultiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol InductancePerLength::denominatorUnit = IEC61970::Base::Domain::UnitSymbol::m;
const IEC61970::Base::Domain::UnitMultiplier InductancePerLength::multiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol InductancePerLength::unit = IEC61970::Base::Domain::UnitSymbol::H;
