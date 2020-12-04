///////////////////////////////////////////////////////////
//  CalculationMethodHierarchy.h
//  Implementation of the Class CalculationMethodHierarchy
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef CALCULATIONMETHODHIERARCHY_H
#define CALCULATIONMETHODHIERARCHY_H

#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Base/Meas/MeasurementValue.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * The hierarchy of calculation methods used to derive this measurement.
		 */
		class CalculationMethodHierarchy : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			CalculationMethodHierarchy();
			virtual ~CalculationMethodHierarchy();
			IEC61970::Base::Meas::MeasurementValue *MeasurementValue;

		};

	}

}
#endif // CALCULATIONMETHODHIERARCHY_H
