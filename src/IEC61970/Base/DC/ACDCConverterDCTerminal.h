///////////////////////////////////////////////////////////
//  ACDCConverterDCTerminal.h
//  Implementation of the Class ACDCConverterDCTerminal
//  Created on:      28-Jan-2016 12:43:11
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_E2A58F76_9034_4073_A4CA_A92E9B6BA101__INCLUDED_)
#define EA_E2A58F76_9034_4073_A4CA_A92E9B6BA101__INCLUDED_

#include "IEC61970/Base/DC/DCPolarityKind.h"
#include "IEC61970/Base/DC/DCBaseTerminal.h"
#include "IEC61970/Base/DC/ACDCConverter.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * A DC electrical connection point at the AC/DC converter. The AC/DC converter is
			 * electrically connected also to the AC side. The AC connection is inherited from
			 * the AC conducting equipment in the same way as any other AC equipment. The
			 * AC/DC converter DC terminal is separate from generic DC terminal to restrict
			 * the connection with the AC side to AC/DC converter and so that no other DC
			 * conducting equipment can be connected to the AC side.
			 */
			class ACDCConverterDCTerminal : public IEC61970::Base::DC::DCBaseTerminal
			{

			public:
				ACDCConverterDCTerminal();
				virtual ~ACDCConverterDCTerminal();
				/**
				 * Represents the normal network polarity condition.
				 */
				IEC61970::Base::DC::DCPolarityKind polarity;
				IEC61970::Base::DC::ACDCConverter *DCConductingEquipment;

			};

		}

	}

}
#endif // !defined(EA_E2A58F76_9034_4073_A4CA_A92E9B6BA101__INCLUDED_)
