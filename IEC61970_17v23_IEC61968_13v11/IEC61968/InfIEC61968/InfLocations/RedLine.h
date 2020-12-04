///////////////////////////////////////////////////////////
//  RedLine.h
//  Implementation of the Class RedLine
///////////////////////////////////////////////////////////

#ifndef REDLINE_H
#define REDLINE_H

#include "IEC61968/Common/Status.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfLocations
		{
			/**
			 * This class is used for handling the accompanying annotations, time stamp,
			 * author, etc. of designs, drawings and maps. A red line can be associated with
			 * any Location object.
			 */
			class RedLine : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				RedLine();
				virtual ~RedLine();
				IEC61968::Common::Status status;

			};

		}

	}

}
#endif // REDLINE_H
