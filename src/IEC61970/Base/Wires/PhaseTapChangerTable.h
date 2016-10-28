///////////////////////////////////////////////////////////
//  PhaseTapChangerTable.h
//  Implementation of the Class PhaseTapChangerTable
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#ifndef PHASETAPCHANGERTABLE_H
#define PHASETAPCHANGERTABLE_H

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
#endif // PHASETAPCHANGERTABLE_H
