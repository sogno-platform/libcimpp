///////////////////////////////////////////////////////////
//  CombustionTurbine.cpp
//  Implementation of the Class CombustionTurbine
///////////////////////////////////////////////////////////

#include "CombustionTurbine.h"

using IEC61970::Base::Generation::GenerationTrainingSimulation::CombustionTurbine;


CombustionTurbine::CombustionTurbine()
	: AirCompressor(nullptr), CTTempActivePowerCurve(nullptr)
{

}



CombustionTurbine::~CombustionTurbine(){

}
