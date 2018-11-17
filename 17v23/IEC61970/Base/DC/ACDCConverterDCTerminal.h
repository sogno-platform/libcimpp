///////////////////////////////////////////////////////////
//  ACDCConverterDCTerminal.h
//  Implementation of the Class ACDCConverterDCTerminal
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef ACDCCONVERTERDCTERMINAL_H
#define ACDCCONVERTERDCTERMINAL_H

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
				IEC61970::Base::DC::DCPolarityKind polarity = IEC61970::Base::DC::DCPolarityKind::_undef;
				/**
				 * A DC converter terminal belong to an DC converter.
				 */
				IEC61970::Base::DC::ACDCConverter *DCConductingEquipment;

			};

		}

	}

}
#endif // ACDCCONVERTERDCTERMINAL_H
