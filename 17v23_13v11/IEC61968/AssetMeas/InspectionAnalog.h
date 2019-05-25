///////////////////////////////////////////////////////////
//  InspectionAnalog.h
//  Implementation of the Class InspectionAnalog
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef INSPECTIONANALOG_H
#define INSPECTIONANALOG_H

#include "IEC61968/AssetMeas/InspectionAnalogKind.h"
#include "IEC61968/AssetMeas/AssetAnalog.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Asset inspection type of analog.
		 */
		class InspectionAnalog : public IEC61968::AssetMeas::AssetAnalog
		{

		public:
			InspectionAnalog();
			virtual ~InspectionAnalog();
			/**
			 * Kind of analog representing inspection result.
			 */
			IEC61968::AssetMeas::InspectionAnalogKind kind = IEC61968::AssetMeas::InspectionAnalogKind::_undef;

		};

	}

}
#endif // INSPECTIONANALOG_H
