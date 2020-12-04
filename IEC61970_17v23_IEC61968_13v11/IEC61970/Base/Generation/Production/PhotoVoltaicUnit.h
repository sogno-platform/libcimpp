///////////////////////////////////////////////////////////
//  PhotoVoltaicUnit.h
//  Implementation of the Class PhotoVoltaicUnit
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef PHOTOVOLTAICUNIT_H
#define PHOTOVOLTAICUNIT_H

#include "IEC61970/Base/Generation/Production/PowerElectronicsUnit.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * A photovoltaic device or an aggregation of such devices
				 */
				class PhotoVoltaicUnit : public IEC61970::Base::Generation::Production::PowerElectronicsUnit
				{

				public:
					PhotoVoltaicUnit();
					virtual ~PhotoVoltaicUnit();

				};

			}

		}

	}

}
#endif // PHOTOVOLTAICUNIT_H
