///////////////////////////////////////////////////////////
//  Hazard.h
//  Implementation of the Class Hazard
///////////////////////////////////////////////////////////

#ifndef HAZARD_H
#define HAZARD_H

#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * An object or a condition that is a danger for causing loss or perils to an
		 * asset and/or people.
		 */
		class Hazard : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			Hazard();
			virtual ~Hazard();
			/**
			 * Status of this hazard.
			 */
			IEC61968::Common::Status status;
			/**
			 * Type of this hazard.
			 */
			IEC61970::Base::Domain::String type;

		};

	}

}
#endif // HAZARD_H
