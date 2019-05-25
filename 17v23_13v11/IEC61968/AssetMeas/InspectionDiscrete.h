///////////////////////////////////////////////////////////
//  InspectionDiscrete.h
//  Implementation of the Class InspectionDiscrete
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef INSPECTIONDISCRETE_H
#define INSPECTIONDISCRETE_H

#include "IEC61968/AssetMeas/InspectionDiscreteKind.h"
#include "IEC61968/AssetMeas/AssetDiscrete.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Asset inspection type of discrete.
		 */
		class InspectionDiscrete : public IEC61968::AssetMeas::AssetDiscrete
		{

		public:
			InspectionDiscrete();
			virtual ~InspectionDiscrete();
			/**
			 * Kind of discrete representing inspection result.
			 */
			IEC61968::AssetMeas::InspectionDiscreteKind kind = IEC61968::AssetMeas::InspectionDiscreteKind::_undef;

		};

	}

}
#endif // INSPECTIONDISCRETE_H
