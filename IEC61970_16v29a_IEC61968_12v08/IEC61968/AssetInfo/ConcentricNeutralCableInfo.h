///////////////////////////////////////////////////////////
//  ConcentricNeutralCableInfo.h
//  Implementation of the Class ConcentricNeutralCableInfo
//  Original author: Tom
///////////////////////////////////////////////////////////

#ifndef CONCENTRICNEUTRALCABLEINFO_H
#define CONCENTRICNEUTRALCABLEINFO_H

#include "IEC61970/Base/Domain/Length.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61970/Base/Domain/ResistancePerLength.h"
#include "IEC61968/AssetInfo/CableInfo.h"

namespace IEC61968
{
	namespace AssetInfo
	{
		/**
		 * Concentric neutral cable data.
		 */
		class ConcentricNeutralCableInfo : public IEC61968::AssetInfo::CableInfo
		{

		public:
			ConcentricNeutralCableInfo();
			virtual ~ConcentricNeutralCableInfo();
			/**
			 * Diameter over the concentric neutral strands.
			 */
			IEC61970::Base::Domain::Length diameterOverNeutral;
			/**
			 * Number of concentric neutral strands.
			 */
			IEC61970::Base::Domain::Integer neutralStrandCount;
			/**
			 * Geometric mean radius of the neutral strand.
			 */
			IEC61970::Base::Domain::Length neutralStrandGmr;
			/**
			 * Outside radius of the neutral strand.
			 */
			IEC61970::Base::Domain::Length neutralStrandRadius;
			/**
			 * DC resistance per unit length of the neutral strand at 20 °C.
			 */
			IEC61970::Base::Domain::ResistancePerLength neutralStrandRDC20;

		};

	}

}
#endif // CONCENTRICNEUTRALCABLEINFO_H
