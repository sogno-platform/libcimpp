///////////////////////////////////////////////////////////
//  InductancePerLength.cpp
//  Implementation of the Class InductancePerLength
//  Created on:      28-Jan-2016 12:45:28
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#include "InductancePerLength.h"

using IEC61970::Base::Domain::InductancePerLength;


InductancePerLength::InductancePerLength(){

}



InductancePerLength::~InductancePerLength(){

}


const IEC61970::Base::Domain::UnitMultiplier InductancePerLength::multiplier = IEC61970::Base::Domain::UnitMultiplier::none;
const IEC61970::Base::Domain::UnitSymbol InductancePerLength::unit = IEC61970::Base::Domain::UnitSymbol::HPerm;
