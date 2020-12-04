///////////////////////////////////////////////////////////
//  UserAttribute.cpp
//  Implementation of the Class UserAttribute
///////////////////////////////////////////////////////////

#include "UserAttribute.h"
#include "IEC61968/PaymentMetering/Transaction.h"

using IEC61968::Common::UserAttribute;


UserAttribute::UserAttribute()
	: RatingSpecification(nullptr), PropertySpecification(nullptr), Transaction(nullptr)
{

}



UserAttribute::~UserAttribute(){

}
