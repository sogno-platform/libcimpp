///////////////////////////////////////////////////////////
//  RegulatingControl.h
//  Implementation of the Class RegulatingControl
//  Created on:      28-Jan-2016 12:46:29
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_D173BBE0_16A6_4965_9756_0049948AFAEA__INCLUDED_)
#define EA_D173BBE0_16A6_4965_9756_0049948AFAEA__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Wires/RegulatingControlModeKind.h"
#include "IEC61970/Base/Core/PhaseCode.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Specifies a set of equipment that works together to control a power system
			 * quantity such as voltage or flow.
			 * Remote bus voltage control is possible by specifying the controlled terminal
			 * located at some place remote from the controlling equipment.
			 * In case multiple equipment, possibly of different types, control same terminal
			 * there must be only one RegulatingControl at that terminal. The most specific
			 * subtype of RegulatingControl shall be used in case such equipment participate
			 * in the control, e.g. TapChangerControl for tap changers.
			 * For flow control  load sign convention is used, i.e. positive sign means flow
			 * out from a TopologicalNode (bus) into the conducting equipment.
			 */
			class RegulatingControl : public IEC61970::Base::Core::PowerSystemResource
			{

			public:
				RegulatingControl();
				virtual ~RegulatingControl();
				/**
				 * The regulation is performed in a discrete mode. This applies to equipment with
				 * discrete controls, e.g. tap changers and shunt compensators.
				 */
				IEC61970::Base::Domain::Boolean discrete;
				/**
				 * The flag tells if regulation is enabled.
				 */
				IEC61970::Base::Domain::Boolean enabled;
				/**
				 * The regulating control mode presently available.  This specification allows for
				 * determining the kind of regulation without need for obtaining the units from a
				 * schedule.
				 */
				IEC61970::Base::Wires::RegulatingControlModeKind mode;
				/**
				 * Phase voltage controlling this regulator, measured at regulator location.
				 */
				IEC61970::Base::Core::PhaseCode monitoredPhase;
				/**
				 * This is a deadband used with discrete control to avoid excessive update of
				 * controls like tap changers and shunt compensator banks while regulating.
				 * The units of those appropriate for the mode.
				 */
				IEC61970::Base::Domain::Float targetDeadband;
				/**
				 * The target value specified for case input.   This value can be used for the
				 * target value without the use of schedules. The value has the units appropriate
				 * to the mode attribute.
				 */
				IEC61970::Base::Domain::Float targetValue;
				/**
				 * Specify the multiplier for used for the targetValue.
				 */
				IEC61970::Base::Domain::UnitMultiplier targetValueUnitMultiplier;

			};

		}

	}

}
#endif // !defined(EA_D173BBE0_16A6_4965_9756_0049948AFAEA__INCLUDED_)
