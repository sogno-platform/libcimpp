///////////////////////////////////////////////////////////
//  TroubleTicket.cpp
//  Implementation of the Class TroubleTicket
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#include "TroubleTicket.h"
#include "IEC61968/Operations/Incident.h"

using IEC61968::Customers::TroubleTicket;


TroubleTicket::TroubleTicket()
	: Incident(nullptr), Customer(nullptr)
{

}



TroubleTicket::~TroubleTicket(){

}
