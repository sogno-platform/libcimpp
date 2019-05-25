///////////////////////////////////////////////////////////
//  Route.h
//  Implementation of the Class Route
///////////////////////////////////////////////////////////

#ifndef ROUTE_H
#define ROUTE_H

#include <list>

#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/Common/Location.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfLocations
		{
			/**
			 * Route that is followed, for example by service crews.
			 */
			class Route : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				Route();
				virtual ~Route();
				IEC61968::Common::Status status;
				/**
				 * Classification by utility's work management standards and practices.
				 */
				IEC61970::Base::Domain::String type;
				std::list<IEC61968::Common::Location*> Locations;

			};

		}

	}

}
#endif // ROUTE_H
