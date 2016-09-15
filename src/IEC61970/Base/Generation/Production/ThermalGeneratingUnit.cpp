///////////////////////////////////////////////////////////
//  ThermalGeneratingUnit.cpp
//  Implementation of the Class ThermalGeneratingUnit
//  Created on:      28-Jan-2016 12:47:17
///////////////////////////////////////////////////////////

#include "ThermalGeneratingUnit.h"

using IEC61970::Base::Generation::Production::ThermalGeneratingUnit;


ThermalGeneratingUnit::ThermalGeneratingUnit()
	: HeatRateCurve(nullptr), StartupModel(nullptr), ShutdownCurve(nullptr), IncrementalHeatRateCurve(nullptr), HeatInputCurve(nullptr)
{

}



ThermalGeneratingUnit::~ThermalGeneratingUnit(){

}
