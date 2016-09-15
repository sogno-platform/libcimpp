///////////////////////////////////////////////////////////
//  CombustionTurbine.cpp
//  Implementation of the Class CombustionTurbine
//  Created on:      28-Jan-2016 12:43:35
///////////////////////////////////////////////////////////

#include "CombustionTurbine.h"

using IEC61970::Base::Generation::GenerationTrainingSimulation::CombustionTurbine;


CombustionTurbine::CombustionTurbine()
	: AirCompressor(nullptr), CTTempActivePowerCurve(nullptr)
{

}



CombustionTurbine::~CombustionTurbine(){

}
