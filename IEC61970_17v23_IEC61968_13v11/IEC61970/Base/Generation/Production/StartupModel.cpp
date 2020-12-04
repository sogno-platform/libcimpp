///////////////////////////////////////////////////////////
//  StartupModel.cpp
//  Implementation of the Class StartupModel
///////////////////////////////////////////////////////////

#include "StartupModel.h"

using IEC61970::Base::Generation::Production::StartupModel;


StartupModel::StartupModel()
	: StartRampCurve(nullptr), StartIgnFuelCurve(nullptr), StartMainFuelCurve(nullptr)
{

}



StartupModel::~StartupModel(){

}
