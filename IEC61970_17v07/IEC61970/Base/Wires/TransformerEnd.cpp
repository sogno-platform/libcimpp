///////////////////////////////////////////////////////////
//  TransformerEnd.cpp
//  Implementation of the Class TransformerEnd
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#include "TransformerEnd.h"

using IEC61970::Base::Wires::TransformerEnd;


TransformerEnd::TransformerEnd()
	: PhaseTapChanger(nullptr), StarImpedance(nullptr), RatioTapChanger(nullptr), BaseVoltage(nullptr), Terminal(nullptr)
{

}



TransformerEnd::~TransformerEnd(){

}
