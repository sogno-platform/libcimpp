///////////////////////////////////////////////////////////
//  ThermalGeneratingUnit.cpp
//  Implementation of the Class ThermalGeneratingUnit
///////////////////////////////////////////////////////////

#include "ThermalGeneratingUnit.h"

using IEC61970::Base::Generation::Production::ThermalGeneratingUnit;


ThermalGeneratingUnit::ThermalGeneratingUnit()
	: HeatRateCurve(nullptr), StartupModel(nullptr), ShutdownCurve(nullptr), IncrementalHeatRateCurve(nullptr), HeatInputCurve(nullptr)
{

}



ThermalGeneratingUnit::~ThermalGeneratingUnit(){

}
