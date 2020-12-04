///////////////////////////////////////////////////////////
//  WorkCostDetail.cpp
//  Implementation of the Class WorkCostDetail
///////////////////////////////////////////////////////////

#include "WorkCostDetail.h"
#include "IEC61968/InfIEC61968/InfWork/OldWorkTask.h"

using IEC61968::InfIEC61968::InfWork::WorkCostDetail;


WorkCostDetail::WorkCostDetail()
	: ErpProjectAccounting(nullptr), WorkCostSummary(nullptr), WorkTask(nullptr)
{

}



WorkCostDetail::~WorkCostDetail(){

}
