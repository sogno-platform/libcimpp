///////////////////////////////////////////////////////////
//  Control.h
//  Implementation of the Class Control
///////////////////////////////////////////////////////////

#ifndef CONTROL_H
#define CONTROL_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Meas/IOPoint.h"

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
			class Control : public IEC61970::Base::Meas::IOPoint
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
				IEC61970::Base::Domain::UnitMultiplier unitMultiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				/**
				 * The unit of measure of the controlled quantity.
				 */
				IEC61970::Base::Domain::UnitSymbol unitSymbol = IEC61970::Base::Domain::UnitSymbol::_undef;

			};

		}

	}

}
#endif // CONTROL_H
