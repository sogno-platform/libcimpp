///////////////////////////////////////////////////////////
//  DCConverterUnit.h
//  Implementation of the Class DCConverterUnit
//  Created on:      28-Jan-2016 12:43:57
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_DD6846EC_4161_4f2a_ACE1_E5C5AC532761__INCLUDED_)
#define EA_DD6846EC_4161_4f2a_ACE1_E5C5AC532761__INCLUDED_

#include "IEC61970/Base/DC/DCConverterOperatingModeKind.h"
#include "IEC61970/Base/DC/DCEquipmentContainer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * Indivisible operative unit comprising all equipment between the point of common
			 * coupling on the AC side and the point of common coupling – DC side, essentially
			 * one or more converters, together with one or more converter transformers,
			 * converter control equipment, essential protective and switching devices and
			 * auxiliaries, if any, used for conversion.
			 */
			class DCConverterUnit : public IEC61970::Base::DC::DCEquipmentContainer
			{

			public:
				DCConverterUnit();
				virtual ~DCConverterUnit();
				IEC61970::Base::DC::DCConverterOperatingModeKind operationMode;

			};

		}

	}

}
#endif // !defined(EA_DD6846EC_4161_4f2a_ACE1_E5C5AC532761__INCLUDED_)
