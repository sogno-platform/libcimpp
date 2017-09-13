///////////////////////////////////////////////////////////
//  DCLine.h
//  Implementation of the Class DCLine
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef DCLINE_H
#define DCLINE_H

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
#endif // DCLINE_H
