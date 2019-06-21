///////////////////////////////////////////////////////////
//  SubscribePowerCurve.h
//  Implementation of the Class SubscribePowerCurve
///////////////////////////////////////////////////////////

#ifndef SUBSCRIBEPOWERCURVE_H
#define SUBSCRIBEPOWERCURVE_H

#include "IEC61970/Base/Core/Curve.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCustomers
		{
			/**
			 * Price curve for specifying the cost of energy (X) at points in time (y1)
			 * according to a prcing structure, which is based on a tariff.
			 */
			class SubscribePowerCurve : public IEC61970::Base::Core::Curve
			{

			public:
				SubscribePowerCurve();
				virtual ~SubscribePowerCurve();

			};

		}

	}

}
#endif // SUBSCRIBEPOWERCURVE_H
