///////////////////////////////////////////////////////////
//  Usage.h
//  Implementation of the Class Usage
///////////////////////////////////////////////////////////

#ifndef USAGE_H
#define USAGE_H

#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfWork/WorkIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * The way material and assets are used to perform a certain type of work task.
			 * The way is described in text in the inheritied description attribute.
			 */
			class Usage : public IEC61968::InfIEC61968::InfWork::WorkIdentifiedObject
			{

			public:
				Usage();
				virtual ~Usage();
				IEC61968::Common::Status status;

			};

		}

	}

}
#endif // USAGE_H
