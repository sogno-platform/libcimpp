///////////////////////////////////////////////////////////
//  IEC61970CIMVersion.cpp
//  Implementation of the Class IEC61970CIMVersion
///////////////////////////////////////////////////////////

#include "IEC61970CIMVersion.h"

using IEC61970::IEC61970CIMVersion;


IEC61970CIMVersion::IEC61970CIMVersion(){

}



IEC61970CIMVersion::~IEC61970CIMVersion(){

}


const IEC61970::Base::Domain::Date IEC61970CIMVersion::date = IEC61970::Base::Domain::Date("2015-07-15");
const IEC61970::Base::Domain::String IEC61970CIMVersion::version = "IEC61970CIM16v29a";
