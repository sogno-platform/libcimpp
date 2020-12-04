///////////////////////////////////////////////////////////
//  WorkLocation.h
//  Implementation of the Class WorkLocation
///////////////////////////////////////////////////////////

#ifndef WORKLOCATION_H
#define WORKLOCATION_H

#include "IEC61968/InfIEC61968/InfWork/OneCallRequest.h"
#include "IEC61968/Common/Location.h"

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Information about a particular location for various forms of work.
		 */
		class WorkLocation : public IEC61968::Common::Location
		{

		public:
			WorkLocation();
			virtual ~WorkLocation();
			IEC61968::InfIEC61968::InfWork::OneCallRequest *OneCallRequest;

		};

	}

}
#endif // WORKLOCATION_H
