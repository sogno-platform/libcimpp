///////////////////////////////////////////////////////////
//  InternalLocation.h
//  Implementation of the Class InternalLocation
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef INTERNALLOCATION_H
#define INTERNALLOCATION_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/Work/WorkLocation.h"

namespace IEC61968
{
	namespace Work
	{
		class InternalLocation : public IEC61968::Work::WorkLocation
		{

		public:
			InternalLocation();
			virtual ~InternalLocation();
			IEC61970::Base::Domain::String buildingName;
			IEC61970::Base::Domain::String buildingNumber;
			IEC61970::Base::Domain::Integer floor;
			IEC61970::Base::Domain::String roomNumber;

		};

	}

}
#endif // INTERNALLOCATION_H
