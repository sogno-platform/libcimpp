///////////////////////////////////////////////////////////
//  MeasurementAction.h
//  Implementation of the Class MeasurementAction
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef MEASUREMENTACTION_H
#define MEASUREMENTACTION_H

#include "IEC61970/Base/Meas/Measurement.h"
#include "IEC61968/Operations/SwitchingAction.h"

namespace IEC61968
{
	namespace Operations
	{
		/**
		 * Measurement taken as a switching step.
		 */
		class MeasurementAction : public IEC61968::Operations::SwitchingAction
		{

		public:
			MeasurementAction();
			virtual ~MeasurementAction();
			IEC61970::Base::Meas::Measurement *Measurement;

		};

	}

}
#endif // MEASUREMENTACTION_H
