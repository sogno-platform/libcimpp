///////////////////////////////////////////////////////////
//  Fault.cpp
//  Implementation of the Class Fault
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#include "Fault.h"
#include "IEC61968/Common/Location.h"

using IEC61970::Base::Faults::Fault;


Fault::Fault()
	: FaultyEquipment(nullptr), Location(nullptr)
{

}



Fault::~Fault(){

}
