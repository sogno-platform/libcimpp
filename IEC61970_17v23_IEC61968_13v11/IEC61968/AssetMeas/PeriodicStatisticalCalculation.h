///////////////////////////////////////////////////////////
//  PeriodicStatisticalCalculation.h
//  Implementation of the Class PeriodicStatisticalCalculation
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef PERIODICSTATISTICALCALCULATION_H
#define PERIODICSTATISTICALCALCULATION_H

#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/AssetMeas/CalculationIntervalUnitKind.h"
#include "IEC61968/AssetMeas/StatisticalCalculation.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * Description of period for which calculation is performed.
		 */
		class PeriodicStatisticalCalculation : public IEC61968::AssetMeas::StatisticalCalculation
		{

		public:
			PeriodicStatisticalCalculation();
			virtual ~PeriodicStatisticalCalculation();
			/**
			 * Number of units (of calculationIntervalUnit) in the calculation interval.
			 */
			IEC61970::Base::Domain::Integer calculationIntervalMagnitude;
			/**
			 * Unit in which calculation interval is defined.
			 */
			IEC61968::AssetMeas::CalculationIntervalUnitKind calculationIntervalUnit = IEC61968::AssetMeas::CalculationIntervalUnitKind::_undef;

		};

	}

}
#endif // PERIODICSTATISTICALCALCULATION_H
