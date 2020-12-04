///////////////////////////////////////////////////////////
//  EndDeviceEvent.cpp
//  Implementation of the Class EndDeviceEvent
///////////////////////////////////////////////////////////

#include "EndDeviceEvent.h"
#include "IEC61968/Metering/UsagePoint.h"

using IEC61968::Metering::EndDeviceEvent;


EndDeviceEvent::EndDeviceEvent()
	: EndDeviceEventType(nullptr), EndDevice(nullptr), UsagePoint(nullptr)
{

}



EndDeviceEvent::~EndDeviceEvent(){

}
