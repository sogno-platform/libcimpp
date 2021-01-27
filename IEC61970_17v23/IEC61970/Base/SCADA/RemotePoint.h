///////////////////////////////////////////////////////////
//  RemotePoint.h
//  Implementation of the Class RemotePoint
///////////////////////////////////////////////////////////

#ifndef REMOTEPOINT_H
#define REMOTEPOINT_H

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
#endif // REMOTEPOINT_H
