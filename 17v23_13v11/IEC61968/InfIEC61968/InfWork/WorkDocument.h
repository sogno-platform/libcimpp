///////////////////////////////////////////////////////////
//  WorkDocument.h
//  Implementation of the Class WorkDocument
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef WORKDOCUMENT_H
#define WORKDOCUMENT_H

#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfWork
		{
			/**
			 * Shadow class for Document, to isolate subclassing from this package. If any
			 * subclass gets normative and needs inheritance, it will inherit directly from
			 * Document.
			 */
			class WorkDocument : public IEC61968::Common::Document
			{

			public:
				WorkDocument();
				virtual ~WorkDocument();

			};

		}

	}

}
#endif // WORKDOCUMENT_H
