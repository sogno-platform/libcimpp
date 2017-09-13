///////////////////////////////////////////////////////////
//  SafetyDocument.h
//  Implementation of the Class SafetyDocument
///////////////////////////////////////////////////////////

#ifndef SAFETYDOCUMENT_H
#define SAFETYDOCUMENT_H

#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Document restricting or authorising works on electrical equipment (for example
		 * a permit to work, sanction for test, limitation of access, or certificate of
		 * isolation), defined based upon organisational practices.
		 */
		class SafetyDocument : public IEC61968::Common::Document
		{

		public:
			SafetyDocument();
			virtual ~SafetyDocument();

		};

	}

}
#endif // SAFETYDOCUMENT_H
