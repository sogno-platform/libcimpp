///////////////////////////////////////////////////////////
//  ErpDocument.h
//  Implementation of the Class ErpDocument
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ERPDOCUMENT_H
#define ERPDOCUMENT_H

#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Shadow class for Document, to isolate subclassing from this package. If any
			 * subclass gets normative and needs inheritance, it will inherit directly from
			 * Document.
			 */
			class ErpDocument : public IEC61968::Common::Document
			{

			public:
				ErpDocument();
				virtual ~ErpDocument();

			};

		}

	}

}
#endif // ERPDOCUMENT_H
