///////////////////////////////////////////////////////////
//  MeterReading.cpp
//  Implementation of the Class MeterReading
///////////////////////////////////////////////////////////

#include "MeterReading.h"
#include "IEC61968/Customers/CustomerAgreement.h"

using IEC61968::Metering::MeterReading;


MeterReading::MeterReading()
	: UsagePoint(nullptr), CustomerAgreement(nullptr)
{

}



MeterReading::~MeterReading(){

}
