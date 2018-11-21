///////////////////////////////////////////////////////////
//  Sectionaliser.h
//  Implementation of the Class Sectionaliser
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef SECTIONALISER_H
#define SECTIONALISER_H

#include "IEC61970/Base/Wires/Switch.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Automatic switch that will lock open to isolate a faulted section. It may, or
			 * may not, have load breaking capability. Its primary purpose is to provide fault
			 * sectionalising at locations where the fault current is either too high, or too
			 * low, for proper coordination of fuses.
			 */
			class Sectionaliser : public IEC61970::Base::Wires::Switch
			{

			public:
				Sectionaliser();
				virtual ~Sectionaliser();

			};

		}

	}

}
#endif // SECTIONALISER_H
