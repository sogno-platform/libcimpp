///////////////////////////////////////////////////////////
//  SinergienACLineSegment.h
//  Implementation of the Class SinergienACLineSegment
//  Original author: mmi
///////////////////////////////////////////////////////////

#ifndef SINERGIENACLINESEGMENT_H
#define SINERGIENACLINESEGMENT_H

#include "IEC61970/Base/Domain/CurrentFlow.h"
#include "IEC61970/Base/Domain/ApparentPower.h"
#include "IEC61970/Base/Wires/ACLineSegment.h"

namespace Sinergien
{
	namespace EnergyGrid
	{
		namespace Wires
		{
			class SinergienACLineSegment : public IEC61970::Base::Wires::ACLineSegment
			{

			public:
				SinergienACLineSegment();
				virtual ~SinergienACLineSegment();
				IEC61970::Base::Domain::CurrentFlow maxCurrent;
				IEC61970::Base::Domain::ApparentPower ratedPower;

			};

		}

	}

}
#endif // SINERGIENACLINESEGMENT_H
