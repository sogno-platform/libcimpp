///////////////////////////////////////////////////////////
//  WorkIdentifiedObject.h
//  Implementation of the Class WorkIdentifiedObject
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef WORKIDENTIFIEDOBJECT_H
#define WORKIDENTIFIEDOBJECT_H

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Shadow class for IdentifiedObject, to isolate subclassing from this package. If
			 * any subclass gets normative and needs inheritance, it will inherit directly
			 * from IdentifiedObject.
			 */
			class WorkIdentifiedObject : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				WorkIdentifiedObject();
				virtual ~WorkIdentifiedObject();

			};

		}

	}

}
#endif // WORKIDENTIFIEDOBJECT_H
