///////////////////////////////////////////////////////////
//  Line.h
//  Implementation of the Class Line
//  Created on:      28-Jan-2016 12:45:33
///////////////////////////////////////////////////////////

#if !defined(EA_33CB5677_4309_48f9_A095_5EE24B23E757__INCLUDED_)
#define EA_33CB5677_4309_48f9_A095_5EE24B23E757__INCLUDED_

#include "IEC61970/Base/Core/EquipmentContainer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Contains equipment beyond a substation belonging to a power transmission line. 
			 */
			class Line : public IEC61970::Base::Core::EquipmentContainer
			{

			public:
				Line();
				virtual ~Line();

			};

		}

	}

}
#endif // !defined(EA_33CB5677_4309_48f9_A095_5EE24B23E757__INCLUDED_)
