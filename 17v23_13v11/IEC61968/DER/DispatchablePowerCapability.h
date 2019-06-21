///////////////////////////////////////////////////////////
//  DispatchablePowerCapability.h
//  Implementation of the Class DispatchablePowerCapability
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef DISPATCHABLEPOWERCAPABILITY_H
#define DISPATCHABLEPOWERCAPABILITY_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/ApparentPower.h"
#include "IEC61970/Base/Domain/ReactivePower.h"

namespace IEC61968
{
	namespace DER
	{
		class DispatchablePowerCapability : public BaseClass
		{

		public:
			DispatchablePowerCapability();
			virtual ~DispatchablePowerCapability();
			/**
			 * Product of RMS value of the voltage and the RMS value of the in-phase component
			 * of the current
			 */
			IEC61970::Base::Domain::ActivePower currentActivePower;
			/**
			 * Product of the RMS value of the voltage and the RMS value of the current
			 */
			IEC61970::Base::Domain::ApparentPower currentApparentPower;
			/**
			 * Product of RMS value of the voltage and the RMS value of the quadrature
			 * component of the current
			 */
			IEC61970::Base::Domain::ReactivePower currentReactivePower;
			/**
			 * Product of RMS value of the voltage and the RMS value of the in-phase component
			 * of the current
			 */
			IEC61970::Base::Domain::ActivePower maxActivePower;
			/**
			 * Product of the RMS value of the voltage and the RMS value of the current
			 */
			IEC61970::Base::Domain::ApparentPower maxApparentPower;
			/**
			 * Product of RMS value of the voltage and the RMS value of the quadrature
			 * component of the current
			 */
			IEC61970::Base::Domain::ReactivePower maxReactivePower;
			/**
			 * Product of RMS value of the voltage and the RMS value of the in-phase component
			 * of the current
			 */
			IEC61970::Base::Domain::ActivePower minActivePower;
			/**
			 * Product of the RMS value of the voltage and the RMS value of the current
			 */
			IEC61970::Base::Domain::ApparentPower minApparentPower;
			/**
			 * Product of RMS value of the voltage and the RMS value of the quadrature
			 * component of the current
			 */
			IEC61970::Base::Domain::ReactivePower minReactivePower;

		};

	}

}
#endif // DISPATCHABLEPOWERCAPABILITY_H
