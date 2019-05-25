///////////////////////////////////////////////////////////
//  Tool.h
//  Implementation of the Class Tool
///////////////////////////////////////////////////////////

#ifndef TOOL_H
#define TOOL_H

#include "IEC61970/Base/Domain/Date.h"
#include "IEC61968/Work/WorkAsset.h"

namespace IEC61968
{
	namespace Work
	{
		/**
		 * Tool asset.
		 */
		class Tool : public IEC61968::Work::WorkAsset
		{

		public:
			Tool();
			virtual ~Tool();
			/**
			 * (if applicable) Date the tool was last calibrated.
			 */
			IEC61970::Base::Domain::Date lastCalibrationDate;

		};

	}

}
#endif // TOOL_H
