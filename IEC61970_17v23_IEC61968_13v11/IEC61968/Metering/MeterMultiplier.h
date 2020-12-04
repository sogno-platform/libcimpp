///////////////////////////////////////////////////////////
//  MeterMultiplier.h
//  Implementation of the Class MeterMultiplier
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef METERMULTIPLIER_H
#define METERMULTIPLIER_H

#include "IEC61968/Metering/MeterMultiplierKind.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Multiplier applied at the meter.
		 */
		class MeterMultiplier : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			MeterMultiplier();
			virtual ~MeterMultiplier();
			/**
			 * Kind of multiplier.
			 */
			IEC61968::Metering::MeterMultiplierKind kind = IEC61968::Metering::MeterMultiplierKind::_undef;
			/**
			 * Multiplier value.
			 */
			IEC61970::Base::Domain::Float value;

		};

	}

}
#endif // METERMULTIPLIER_H
