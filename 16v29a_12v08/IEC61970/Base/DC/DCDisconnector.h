///////////////////////////////////////////////////////////
//  DCDisconnector.h
//  Implementation of the Class DCDisconnector
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef DCDISCONNECTOR_H
#define DCDISCONNECTOR_H

#include "IEC61970/Base/DC/DCSwitch.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * A disconnector within a DC system.
			 */
			class DCDisconnector : public IEC61970::Base::DC::DCSwitch
			{

			public:
				DCDisconnector();
				virtual ~DCDisconnector();

			};

		}

	}

}
#endif // DCDISCONNECTOR_H
