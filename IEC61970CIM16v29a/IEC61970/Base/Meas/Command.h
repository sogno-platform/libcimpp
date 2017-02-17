///////////////////////////////////////////////////////////
//  Command.h
//  Implementation of the Class Command
///////////////////////////////////////////////////////////

#ifndef COMMAND_H
#define COMMAND_H

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Meas/ValueAliasSet.h"
#include "IEC61970/Base/Meas/Control.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Meas
		{
			/**
			 * A Command is a discrete control used for supervisory control.
			 */
			class Command : public IEC61970::Base::Meas::Control
			{

			public:
				Command();
				virtual ~Command();
				/**
				 * Normal value for Control.value e.g. used for percentage scaling.
				 */
				IEC61970::Base::Domain::Integer normalValue;
				/**
				 * The value representing the actuator output.
				 */
				IEC61970::Base::Domain::Integer value;
				/**
				 * The ValueAliasSet used for translation of a Control value to a name.
				 */
				IEC61970::Base::Meas::ValueAliasSet *ValueAliasSet;

			};

		}

	}

}
#endif // COMMAND_H
