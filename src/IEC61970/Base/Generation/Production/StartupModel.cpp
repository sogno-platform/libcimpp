///////////////////////////////////////////////////////////
//  StartupModel.cpp
//  Implementation of the Class StartupModel
//  Created on:      28-Jan-2016 12:46:45
///////////////////////////////////////////////////////////

#include "StartupModel.h"

using IEC61970::Base::Generation::Production::StartupModel;


StartupModel::StartupModel()
	: StartRampCurve(nullptr), StartIgnFuelCurve(nullptr), StartMainFuelCurve(nullptr)
{

}



StartupModel::~StartupModel(){

}
