///////////////////////////////////////////////////////////
//  RatioTapChangerTablePoint.h
//  Implementation of the Class RatioTapChangerTablePoint
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef RATIOTAPCHANGERTABLEPOINT_H
#define RATIOTAPCHANGERTABLEPOINT_H

#include "IEC61970/Base/Wires/RatioTapChangerTable.h"
#include "IEC61970/Base/Wires/TapChangerTablePoint.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Describes each tap step in the ratio tap changer tabular curve.
			 */
			class RatioTapChangerTablePoint : public IEC61970::Base::Wires::TapChangerTablePoint
			{

			public:
				RatioTapChangerTablePoint();
				virtual ~RatioTapChangerTablePoint();
				/**
				 * Table of this point.
				 */
				IEC61970::Base::Wires::RatioTapChangerTable *RatioTapChangerTable;

			};

		}

	}

}
#endif // RATIOTAPCHANGERTABLEPOINT_H
