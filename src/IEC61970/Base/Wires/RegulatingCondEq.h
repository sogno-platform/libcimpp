///////////////////////////////////////////////////////////
//  RegulatingCondEq.h
//  Implementation of the Class RegulatingCondEq
//  Created on:      28-Jan-2016 12:46:28
///////////////////////////////////////////////////////////

#if !defined(EA_31FA34E0_018E_4aec_8A5C_5C716DAA0D3E__INCLUDED_)
#define EA_31FA34E0_018E_4aec_8A5C_5C716DAA0D3E__INCLUDED_

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Wires/RegulatingControl.h"
#include "IEC61970/Base/Core/ConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A type of conducting equipment that can regulate a quantity (i.e. voltage or
			 * flow) at a specific point in the network. 
			 */
			class RegulatingCondEq : public IEC61970::Base::Core::ConductingEquipment
			{

			public:
				RegulatingCondEq();
				virtual ~RegulatingCondEq();
				/**
				 * Specifies the regulation status of the equipment.  True is regulating, false is
				 * not regulating.
				 */
				IEC61970::Base::Domain::Boolean controlEnabled;
				/**
				 * The regulating control scheme in which this equipment participates.
				 */
				IEC61970::Base::Wires::RegulatingControl *RegulatingControl;

			};

		}

	}

}
#endif // !defined(EA_31FA34E0_018E_4aec_8A5C_5C716DAA0D3E__INCLUDED_)
