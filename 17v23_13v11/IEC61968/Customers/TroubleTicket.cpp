///////////////////////////////////////////////////////////
//  TroubleTicket.cpp
//  Implementation of the Class TroubleTicket
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#include "TroubleTicket.h"
#include "IEC61968/Customers/Customer.h"

using IEC61968::Customers::TroubleTicket;


TroubleTicket::TroubleTicket()
	: Customer(nullptr), Incident(nullptr)
{

}



TroubleTicket::~TroubleTicket(){

}
