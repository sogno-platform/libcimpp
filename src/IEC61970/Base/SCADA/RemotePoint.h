///////////////////////////////////////////////////////////
//  RemotePoint.h
//  Implementation of the Class RemotePoint
//  Created on:      28-Jan-2016 12:46:31
///////////////////////////////////////////////////////////

#if !defined(EA_BCBBB760_42CD_48cb_8612_0E4DE1979F50__INCLUDED_)
#define EA_BCBBB760_42CD_48cb_8612_0E4DE1979F50__INCLUDED_

#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace SCADA
		{
			/**
			 * For a RTU remote points correspond to telemetered values or control outputs.
			 * Other units (e.g. control centers) usually also contain calculated values.
			 */
			class RemotePoint : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				RemotePoint();
				virtual ~RemotePoint();

			};

		}

	}

}
#endif // !defined(EA_BCBBB760_42CD_48cb_8612_0E4DE1979F50__INCLUDED_)
