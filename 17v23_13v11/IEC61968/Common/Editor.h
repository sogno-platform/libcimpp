///////////////////////////////////////////////////////////
//  Editor.h
//  Implementation of the Class Editor
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef EDITOR_H
#define EDITOR_H

#include <list>

#include "IEC61968/Common/Document.h"
#include "IEC61968/Common/DocumentPersonRole.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * Person who modified the document.
		 */
		class Editor : public IEC61968::Common::DocumentPersonRole
		{

		public:
			Editor();
			virtual ~Editor();
			/**
			 * All documents for this editor.
			 */
			std::list<IEC61968::Common::Document*> Documents;

		};

	}

}
#endif // EDITOR_H
