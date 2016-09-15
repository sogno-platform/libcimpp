///////////////////////////////////////////////////////////
//  DCLine.h
//  Implementation of the Class DCLine
//  Created on:      28-Jan-2016 12:43:58
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_D4BC9DBC_1A22_4444_82DD_446F964F256E__INCLUDED_)
#define EA_D4BC9DBC_1A22_4444_82DD_446F964F256E__INCLUDED_

#include "IEC61970/Base/DC/DCEquipmentContainer.h"
#include "IEC61970/Base/Core/SubGeographicalRegion.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * Overhead lines and/or cables connecting two or more HVDC substations.
			 */
			class DCLine : public IEC61970::Base::DC::DCEquipmentContainer
			{

			public:
				DCLine();
				virtual ~DCLine();
				IEC61970::Base::Core::SubGeographicalRegion *Region;

			};

		}

	}

}
#endif // !defined(EA_D4BC9DBC_1A22_4444_82DD_446F964F256E__INCLUDED_)
