///////////////////////////////////////////////////////////
//  ServiceMultiplier.h
//  Implementation of the Class ServiceMultiplier
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SERVICEMULTIPLIER_H
#define SERVICEMULTIPLIER_H

#include "IEC61968/Metering/ServiceMultiplierKind.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Multiplier applied at the usage point.
		 */
		class ServiceMultiplier : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			ServiceMultiplier();
			virtual ~ServiceMultiplier();
			/**
			 * Kind of multiplier.
			 */
			IEC61968::Metering::ServiceMultiplierKind kind = IEC61968::Metering::ServiceMultiplierKind::_undef;
			/**
			 * Multiplier value.
			 */
			IEC61970::Base::Domain::Float value;

		};

	}

}
#endif // SERVICEMULTIPLIER_H
