///////////////////////////////////////////////////////////
//  TapChangerControl.h
//  Implementation of the Class TapChangerControl
//  Original author: Tom
///////////////////////////////////////////////////////////

#ifndef TAPCHANGERCONTROL_H
#define TAPCHANGERCONTROL_H

#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/Resistance.h"
#include "IEC61970/Base/Domain/Reactance.h"
#include "IEC61970/Base/Wires/RegulatingControl.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Describes behavior specific to tap changers, e.g. how the voltage at the end of
			 * a line varies with the load level and compensation of the voltage drop by tap
			 * adjustment.
			 */
			class TapChangerControl : public IEC61970::Base::Wires::RegulatingControl
			{

			public:
				TapChangerControl();
				virtual ~TapChangerControl();
				/**
				 * Maximum allowed regulated voltage on the PT secondary, regardless of line drop
				 * compensation. Sometimes referred to as first-house protection.
				 */
				IEC61970::Base::Domain::Voltage limitVoltage;
				/**
				 * If true, the line drop compensation is to be applied.
				 */
				IEC61970::Base::Domain::Boolean lineDropCompensation;
				/**
				 * Line drop compensator resistance setting for normal (forward) power flow.
				 */
				IEC61970::Base::Domain::Resistance lineDropR;
				/**
				 * Line drop compensator reactance setting for normal (forward) power flow.
				 */
				IEC61970::Base::Domain::Reactance lineDropX;
				/**
				 * Line drop compensator resistance setting for reverse power flow.
				 */
				IEC61970::Base::Domain::Resistance reverseLineDropR;
				/**
				 * Line drop compensator reactance setting for reverse power flow.
				 */
				IEC61970::Base::Domain::Reactance reverseLineDropX;

			};

		}

	}

}
#endif // TAPCHANGERCONTROL_H
