///////////////////////////////////////////////////////////
//  TextDiagramObject.h
//  Implementation of the Class TextDiagramObject
//  Created on:      28-Jan-2016 12:47:15
//  Original author: mcmorran
///////////////////////////////////////////////////////////

#if !defined(EA_414CE0A0_5A1E_4e7e_BAB9_2C8359C6031B__INCLUDED_)
#define EA_414CE0A0_5A1E_4e7e_BAB9_2C8359C6031B__INCLUDED_

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
#endif // !defined(EA_414CE0A0_5A1E_4e7e_BAB9_2C8359C6031B__INCLUDED_)
