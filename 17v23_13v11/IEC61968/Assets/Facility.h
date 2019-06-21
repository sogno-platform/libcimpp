///////////////////////////////////////////////////////////
//  Facility.h
//  Implementation of the Class Facility
///////////////////////////////////////////////////////////

#ifndef FACILITY_H
#define FACILITY_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Assets/AssetContainer.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * A facility may contain buildings, storage facilities, switching facilities,
		 * power generation, manufacturing facilities, maintenance facilities, etc.
		 */
		class Facility : public IEC61968::Assets::AssetContainer
		{

		public:
			Facility();
			virtual ~Facility();
			/**
			 * Kind of this facility.
			 */
			IEC61970::Base::Domain::String kind;

		};

	}

}
#endif // FACILITY_H
