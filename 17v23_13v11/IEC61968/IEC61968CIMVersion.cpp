///////////////////////////////////////////////////////////
//  IEC61968CIMVersion.cpp
//  Implementation of the Class IEC61968CIMVersion
///////////////////////////////////////////////////////////

#include "IEC61968CIMVersion.h"

using IEC61968::IEC61968CIMVersion;


IEC61968CIMVersion::IEC61968CIMVersion(){

}



IEC61968CIMVersion::~IEC61968CIMVersion(){

}


const IEC61970::Base::Domain::Date IEC61968CIMVersion::date = IEC61970::Base::Domain::Date("2017-06-11");
const IEC61970::Base::Domain::String IEC61968CIMVersion::version = "IEC61968CIM13v11";
