///////////////////////////////////////////////////////////
//  OutageOrder.h
//  Implementation of the Class OutageOrder
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef OUTAGEORDER_H
#define OUTAGEORDER_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/Document.h"
#include "IEC61968/Common/Location.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Transmits an outage plan to a crew in order for the planned outage to be
		 * executed.
		 */
		class OutageOrder : public IEC61968::Common::Document
		{

		public:
			OutageOrder();
			virtual ~OutageOrder();
			/**
			 * Free-form comment associated with the outage order
			 */
			IEC61970::Base::Domain::String comment;
			std::list<IEC61968::Common::Location*> Location;

		};

	}

}
#endif // OUTAGEORDER_H
