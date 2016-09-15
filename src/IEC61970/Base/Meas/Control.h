///////////////////////////////////////////////////////////
//  Control.h
//  Implementation of the Class Control
//  Created on:      28-Jan-2016 12:43:42
///////////////////////////////////////////////////////////

#if !defined(EA_C135CA04_FF7C_411a_BAA2_B3C30B49FD80__INCLUDED_)
#define EA_C135CA04_FF7C_411a_BAA2_B3C30B49FD80__INCLUDED_

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * Control is used for supervisory/device control. It represents control outputs
			 * that are used to change the state in a process, e.g. close or open breaker, a
			 * set point value or a raise lower command.
			 */
			class Control : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				Control();
				virtual ~Control();
				/**
				 * Specifies the type of Control, e.g. BreakerOn/Off, GeneratorVoltageSetPoint,
				 * TieLineFlow etc. The ControlType.name shall be unique among all specified types
				 * and describe the type.
				 */
				IEC61970::Base::Domain::String controlType;
				/**
				 * Indicates that a client is currently sending control commands that has not
				 * completed.
				 */
				IEC61970::Base::Domain::Boolean operationInProgress;
				/**
				 * The last time a control output was sent.
				 */
				IEC61970::Base::Domain::DateTime timeStamp;
				/**
				 * The unit multiplier of the controlled quantity.
				 */
				IEC61970::Base::Domain::UnitMultiplier unitMultiplier;
				/**
				 * The unit of measure of the controlled quantity.
				 */
				IEC61970::Base::Domain::UnitSymbol unitSymbol;

			};

		}

	}

}
#endif // !defined(EA_C135CA04_FF7C_411a_BAA2_B3C30B49FD80__INCLUDED_)
