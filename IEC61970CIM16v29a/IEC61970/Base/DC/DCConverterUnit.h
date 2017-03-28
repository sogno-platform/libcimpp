///////////////////////////////////////////////////////////
//  DCConverterUnit.h
//  Implementation of the Class DCConverterUnit
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef DCCONVERTERUNIT_H
#define DCCONVERTERUNIT_H

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
#endif // DCCONVERTERUNIT_H
