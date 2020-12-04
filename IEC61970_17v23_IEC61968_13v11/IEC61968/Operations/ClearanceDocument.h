///////////////////////////////////////////////////////////
//  ClearanceDocument.h
//  Implementation of the Class ClearanceDocument
///////////////////////////////////////////////////////////

#ifndef CLEARANCEDOCUMENT_H
#define CLEARANCEDOCUMENT_H

#include <list>

#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61968/Operations/SafetyDocument.h"
#include "IEC61970/Base/Core/PowerSystemResource.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Safety document used to authorise work on conducting equipment in the field.
		 * Tagged equipment is not allowed to be operated.
		 */
		class ClearanceDocument : public IEC61968::Operations::SafetyDocument
		{

		public:
			ClearanceDocument();
			virtual ~ClearanceDocument();
			/**
			 * If true, the equipment must be deenergised.
			 */
			IEC61970::Base::Domain::Boolean mustBeDeenergised;
			/**
			 * If true, the equipment must be grounded.
			 */
			IEC61970::Base::Domain::Boolean mustBeGrounded;
			/**
			 * All power system resources tagged through this clearance.
			 */
			std::list<IEC61970::Base::Core::PowerSystemResource*> TaggedPSRs;

		};

	}

}
#endif // CLEARANCEDOCUMENT_H
