///////////////////////////////////////////////////////////
//  IEC61970CIMVersion.cpp
//  Implementation of the Class IEC61970CIMVersion
//  Created on:      28-Jan-2016 12:45:26
///////////////////////////////////////////////////////////

#include "IEC61970CIMVersion.h"

using IEC61970::IEC61970CIMVersion;


IEC61970CIMVersion::IEC61970CIMVersion(){

}



IEC61970CIMVersion::~IEC61970CIMVersion(){

}


const IEC61970::Base::Domain::Date IEC61970CIMVersion::date = IEC61970::Base::Domain::Date("2015-04-28");
const IEC61970::Base::Domain::String IEC61970CIMVersion::version = "IEC61970CIM17v07";
