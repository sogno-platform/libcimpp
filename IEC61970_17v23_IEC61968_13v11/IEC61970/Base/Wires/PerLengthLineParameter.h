///////////////////////////////////////////////////////////
//  PerLengthLineParameter.h
//  Implementation of the Class PerLengthLineParameter
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef PERLENGTHLINEPARAMETER_H
#define PERLENGTHLINEPARAMETER_H

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Common type for per-length electrical catalogues describing line parameters.
			 */
			class PerLengthLineParameter : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				PerLengthLineParameter();
				virtual ~PerLengthLineParameter();

			};

		}

	}

}
#endif // PERLENGTHLINEPARAMETER_H
