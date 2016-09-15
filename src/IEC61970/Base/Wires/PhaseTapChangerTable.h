///////////////////////////////////////////////////////////
//  PhaseTapChangerTable.h
//  Implementation of the Class PhaseTapChangerTable
//  Created on:      28-Jan-2016 12:46:05
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_54F1A0A9_FD33_4375_B651_FF20E7ECED04__INCLUDED_)
#define EA_54F1A0A9_FD33_4375_B651_FF20E7ECED04__INCLUDED_

#include <list>

#include "IEC61970/Base/Wires/PhaseTapChangerTabular.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Describes a tabular curve for how the phase angle difference and impedance
			 * varies with the tap step.
			 */
			class PhaseTapChangerTable : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				PhaseTapChangerTable();
				virtual ~PhaseTapChangerTable();
				/**
				 * The phase tap changers to which this phase tap table applies.
				 */
				std::list<IEC61970::Base::Wires::PhaseTapChangerTabular*> PhaseTapChangerTabular;

			};

		}

	}

}
#endif // !defined(EA_54F1A0A9_FD33_4375_B651_FF20E7ECED04__INCLUDED_)
