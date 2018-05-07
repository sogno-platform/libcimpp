///////////////////////////////////////////////////////////
//  GeneratingUnit.cpp
//  Implementation of the Class GeneratingUnit
///////////////////////////////////////////////////////////

#include "GeneratingUnit.h"

using IEC61970::Base::Generation::Production::GeneratingUnit;


GeneratingUnit::GeneratingUnit()
	: m_BatteryStorage(nullptr), GenUnitOpSchedule(nullptr)
{

}



GeneratingUnit::~GeneratingUnit(){

}
