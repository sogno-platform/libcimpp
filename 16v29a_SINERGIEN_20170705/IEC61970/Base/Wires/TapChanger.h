///////////////////////////////////////////////////////////
//  TapChanger.h
//  Implementation of the Class TapChanger
///////////////////////////////////////////////////////////

#ifndef TAPCHANGER_H
#define TAPCHANGER_H

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Wires/TapChangerControl.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Mechanism for changing transformer winding tap positions.
			 */
			class TapChanger : public IEC61970::Base::Core::PowerSystemResource
			{

			public:
				TapChanger();
				virtual ~TapChanger();
				/**
				 * Specifies the regulation status of the equipment.  True is regulating, false is
				 * not regulating.
				 */
				IEC61970::Base::Domain::Boolean controlEnabled;
				/**
				 * Highest possible tap step position, advance from neutral.
				 * The attribute shall be greater than lowStep.
				 */
				IEC61970::Base::Domain::Integer highStep;
				/**
				 * For an LTC, the delay for initial tap changer operation (first step change)
				 */
				IEC61970::Base::Domain::Seconds initialDelay;
				/**
				 * Lowest possible tap step position, retard from neutral
				 */
				IEC61970::Base::Domain::Integer lowStep;
				/**
				 * Specifies whether or not a TapChanger has load tap changing capabilities.
				 */
				IEC61970::Base::Domain::Boolean ltcFlag;
				/**
				 * The neutral tap step position for this winding.
				 * The attribute shall be equal or greater than lowStep and equal or less than
				 * highStep.
				 */
				IEC61970::Base::Domain::Integer neutralStep;
				/**
				 * Voltage at which the winding operates at the neutral tap setting.
				 */
				IEC61970::Base::Domain::Voltage neutralU;
				/**
				 * The tap step position used in "normal" network operation for this winding. For
				 * a "Fixed" tap changer indicates the current physical tap setting.
				 * The attribute shall be equal or greater than lowStep and equal or less than
				 * highStep.
				 */
				IEC61970::Base::Domain::Integer normalStep;
				/**
				 * Tap changer position.
				 * Starting step for a steady state solution. Non integer values are allowed to
				 * support continuous tap variables. The reasons for continuous value are to
				 * support study cases where no discrete tap changers has yet been designed, a
				 * solutions where a narrow voltage band force the tap step to oscillate or
				 * accommodate for a continuous solution as input.
				 * The attribute shall be equal or greater than lowStep and equal or less than
				 * highStep.
				 */
				IEC61970::Base::Domain::Float step;
				/**
				 * For an LTC, the delay for subsequent tap changer operation (second and later
				 * step changes)
				 */
				IEC61970::Base::Domain::Seconds subsequentDelay;
				/**
				 * The regulating control scheme in which this tap changer participates.
				 */
				IEC61970::Base::Wires::TapChangerControl *TapChangerControl;

			};

		}

	}

}
#endif // TAPCHANGER_H
