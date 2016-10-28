///////////////////////////////////////////////////////////
//  BaseVoltage.h
//  Implementation of the Class BaseVoltage
///////////////////////////////////////////////////////////

#ifndef BASEVOLTAGE_H
#define BASEVOLTAGE_H

#include <list>

#include "IEC61970/Base/Domain/Voltage.h"
#include "IEC61970/Base/Core/ConductingEquipment.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * Defines a system base voltage which is referenced. 
			 */
			class BaseVoltage : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				BaseVoltage();
				virtual ~BaseVoltage();
				/**
				 * The power system resource's base voltage.
				 */
				IEC61970::Base::Domain::Voltage nominalVoltage;
				/**
				 * All conducting equipment with this base voltage.  Use only when there is no
				 * voltage level container used and only one base voltage applies.  For example,
				 * not used for transformers.
				 */
				std::list<IEC61970::Base::Core::ConductingEquipment*> ConductingEquipment;

			};

		}

	}

}
#endif // BASEVOLTAGE_H
