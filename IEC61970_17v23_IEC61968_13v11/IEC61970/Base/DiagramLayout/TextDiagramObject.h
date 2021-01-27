///////////////////////////////////////////////////////////
//  TextDiagramObject.h
//  Implementation of the Class TextDiagramObject
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#ifndef TEXTDIAGRAMOBJECT_H
#define TEXTDIAGRAMOBJECT_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/DiagramLayout/DiagramObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DiagramLayout
		{
			/**
			 * A diagram object for placing free-text or text derived from an associated
			 * domain object.
			 */
			class TextDiagramObject : public IEC61970::Base::DiagramLayout::DiagramObject
			{

			public:
				TextDiagramObject();
				virtual ~TextDiagramObject();
				/**
				 * The text that is displayed by this text diagram object.
				 */
				IEC61970::Base::Domain::String text;

			};

		}

	}

}
#endif // TEXTDIAGRAMOBJECT_H
