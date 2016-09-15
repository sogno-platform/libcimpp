///////////////////////////////////////////////////////////
//  Command.h
//  Implementation of the Class Command
//  Created on:      28-Jan-2016 12:43:35
///////////////////////////////////////////////////////////

#if !defined(EA_05A19D3D_BA24_4946_8DAD_BAF35118F0D7__INCLUDED_)
#define EA_05A19D3D_BA24_4946_8DAD_BAF35118F0D7__INCLUDED_

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
#endif // !defined(EA_05A19D3D_BA24_4946_8DAD_BAF35118F0D7__INCLUDED_)
