///////////////////////////////////////////////////////////
//  CustomerNotification.cpp
//  Implementation of the Class CustomerNotification
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#include "CustomerNotification.h"
#include "IEC61968/Customers/TroubleTicket.h"
#include "IEC61968/Customers/Customer.h"

using IEC61968::Customers::CustomerNotification;


CustomerNotification::CustomerNotification()
	: Customer(nullptr)
{

}



CustomerNotification::~CustomerNotification(){

}
