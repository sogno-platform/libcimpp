///////////////////////////////////////////////////////////
//  ErpIdentifiedObject.h
//  Implementation of the Class ErpIdentifiedObject
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ERPIDENTIFIEDOBJECT_H
#define ERPIDENTIFIEDOBJECT_H

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Shadow class for IdentifiedObject, to isolate subclassing from this package. If
			 * any subclass gets normative and needs inheritance, it will inherit directly
			 * from IdentifiedObject.
			 */
			class ErpIdentifiedObject : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				ErpIdentifiedObject();
				virtual ~ErpIdentifiedObject();

			};

		}

	}

}
#endif // ERPIDENTIFIEDOBJECT_H
