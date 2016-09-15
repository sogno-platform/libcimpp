///////////////////////////////////////////////////////////
//  DiscreteValue.h
//  Implementation of the Class DiscreteValue
//  Created on:      28-Jan-2016 12:44:09
///////////////////////////////////////////////////////////

#if !defined(EA_3C91C112_0A16_4253_B6D2_34C18FB01FB4__INCLUDED_)
#define EA_3C91C112_0A16_4253_B6D2_34C18FB01FB4__INCLUDED_

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Meas/Command.h"
#include "IEC61970/Base/Meas/MeasurementValue.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * DiscreteValue represents a discrete MeasurementValue.
			 */
			class DiscreteValue : public IEC61970::Base::Meas::MeasurementValue
			{

			public:
				DiscreteValue();
				virtual ~DiscreteValue();
				/**
				 * The value to supervise.
				 */
				IEC61970::Base::Domain::Integer value;
				/**
				 * The Control variable associated with the MeasurementValue.
				 */
				IEC61970::Base::Meas::Command *Command;

			};

		}

	}

}
#endif // !defined(EA_3C91C112_0A16_4253_B6D2_34C18FB01FB4__INCLUDED_)
