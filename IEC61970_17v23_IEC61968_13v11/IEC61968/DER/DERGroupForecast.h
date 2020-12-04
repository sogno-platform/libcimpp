///////////////////////////////////////////////////////////
//  DERGroupForecast.h
//  Implementation of the Class DERGroupForecast
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef DERGROUPFORECAST_H
#define DERGROUPFORECAST_H

#include <list>

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/Metering/EndDeviceGroup.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace DER
	{
		class DERGroupForecast : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			DERGroupForecast();
			virtual ~DERGroupForecast();
			IEC61970::Base::Domain::DateTime predictionCreationDate;
			std::list<IEC61968::Metering::EndDeviceGroup*> EndDeviceGroup;

		};

	}

}
#endif // DERGROUPFORECAST_H
