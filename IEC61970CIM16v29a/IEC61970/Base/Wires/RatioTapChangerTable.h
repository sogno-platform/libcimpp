///////////////////////////////////////////////////////////
//  RatioTapChangerTable.h
//  Implementation of the Class RatioTapChangerTable
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef RATIOTAPCHANGERTABLE_H
#define RATIOTAPCHANGERTABLE_H

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Describes a curve for how the voltage magnitude and impedance varies with the
			 * tap step. 
			 */
			class RatioTapChangerTable : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				RatioTapChangerTable();
				virtual ~RatioTapChangerTable();

			};

		}

	}

}
#endif // RATIOTAPCHANGERTABLE_H
