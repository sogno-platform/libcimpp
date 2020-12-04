///////////////////////////////////////////////////////////
//  Substation.h
//  Implementation of the Class Substation
///////////////////////////////////////////////////////////

#ifndef SUBSTATION_H
#define SUBSTATION_H

#include <list>

#include "IEC61970/Base/Core/EquipmentContainer.h"
#include "IEC61970/Base/Core/VoltageLevel.h"
#include "IEC61970/Base/Core/Bay.h"
#include "IEC61970/Base/DC/DCConverterUnit.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * A collection of equipment for purposes other than generation or utilization,
			 * through which electric energy in bulk is passed for the purposes of switching
			 * or modifying its characteristics. 
			 */
			class Substation : public IEC61970::Base::Core::EquipmentContainer
			{

			public:
				Substation();
				virtual ~Substation();
				/**
				 * The voltage levels within this substation.
				 */
				std::list<IEC61970::Base::Core::VoltageLevel*> VoltageLevels;
				/**
				 * Bays contained in the substation.
				 */
				std::list<IEC61970::Base::Core::Bay*> Bays;
				/**
				 * The DC converter unit belonging ot the substation.
				 */
				std::list<IEC61970::Base::DC::DCConverterUnit*> DCConverterUnit;

			};

		}

	}

}
#endif // SUBSTATION_H
