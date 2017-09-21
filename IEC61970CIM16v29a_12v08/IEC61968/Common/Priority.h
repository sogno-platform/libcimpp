///////////////////////////////////////////////////////////
//  Priority.h
//  Implementation of the Class Priority
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef PRIORITY_H
#define PRIORITY_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Integer.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Priority definition.
		 */
		class Priority : public BaseClass
		{

		public:
			Priority();
			virtual ~Priority();
			/**
			 * Justification for 'rank'.
			 */
			IEC61970::Base::Domain::String justification;
			/**
			 * Priority level; usually, lower number means high priority, but the details are
			 * provided in 'type'.
			 */
			IEC61970::Base::Domain::Integer rank;
			/**
			 * Type describing 'rank'; e.g., high, emergency, etc.
			 */
			IEC61970::Base::Domain::String type;

		};

	}

}
#endif // PRIORITY_H
