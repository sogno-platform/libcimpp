///////////////////////////////////////////////////////////
//  RegulatingCondEq.h
//  Implementation of the Class RegulatingCondEq
///////////////////////////////////////////////////////////

#ifndef REGULATINGCONDEQ_H
#define REGULATINGCONDEQ_H

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
#endif // REGULATINGCONDEQ_H
