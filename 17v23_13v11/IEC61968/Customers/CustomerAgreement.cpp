///////////////////////////////////////////////////////////
//  CustomerAgreement.cpp
//  Implementation of the Class CustomerAgreement
///////////////////////////////////////////////////////////

#include "CustomerAgreement.h"
#include "IEC61968/Customers/PricingStructure.h"
#include "IEC61968/Customers/ServiceCategory.h"

using IEC61968::Customers::CustomerAgreement;


CustomerAgreement::CustomerAgreement()
	: StandardIndustryCode(nullptr), ServiceCategory(nullptr)
{

}



CustomerAgreement::~CustomerAgreement(){

}
