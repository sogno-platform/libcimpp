///////////////////////////////////////////////////////////
//  SwitchingPlan.cpp
//  Implementation of the Class SwitchingPlan
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#include "SwitchingPlan.h"
#include "IEC61968/Operations/OutagePlan.h"
#include "IEC61968/Work/WorkTask.h"

using IEC61968::Operations::SwitchingPlan;


SwitchingPlan::SwitchingPlan()
	: Outage(nullptr), OutagePlan(nullptr)
{

}



SwitchingPlan::~SwitchingPlan(){

}
