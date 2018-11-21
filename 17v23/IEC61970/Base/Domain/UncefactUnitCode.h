///////////////////////////////////////////////////////////
//  UncefactUnitCode.h
//  Implementation of the Class UncefactUnitCode
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef UNCEFACTUNITCODE_H
#define UNCEFACTUNITCODE_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Domain
		{
			/**
			 * Contains a string value for units and multipliers from a list maintained by
			 * UN/CEFACT and described in recommendation No. 20, "Codes for Units of Measure
			 * Used in International Trade". Refer to the UN/CEFACT recommendation for details.
			 */
			class UncefactUnitCode : public BaseClass
			{

			public:
				UncefactUnitCode();
				virtual ~UncefactUnitCode();
				IEC61970::Base::Domain::String value;

			};

		}

	}

}
#endif // UNCEFACTUNITCODE_H
