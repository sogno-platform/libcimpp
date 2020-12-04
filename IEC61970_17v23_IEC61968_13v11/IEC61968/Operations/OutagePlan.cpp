///////////////////////////////////////////////////////////
//  OutagePlan.cpp
//  Implementation of the Class OutagePlan
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#include "OutagePlan.h"
#include "IEC61968/Operations/PlannedOutage.h"

using IEC61968::Operations::OutagePlan;


OutagePlan::OutagePlan()
	: OutageOrder(nullptr), PlannedOutage(nullptr)
{

}



OutagePlan::~OutagePlan(){

}
