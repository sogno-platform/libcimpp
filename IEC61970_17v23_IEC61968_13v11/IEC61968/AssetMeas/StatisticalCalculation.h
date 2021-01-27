///////////////////////////////////////////////////////////
//  StatisticalCalculation.h
//  Implementation of the Class StatisticalCalculation
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef STATISTICALCALCULATION_H
#define STATISTICALCALCULATION_H

#include <list>

#include "IEC61968/AssetMeas/CalculationModeKind.h"
#include "IEC61968/AssetMeas/CalculationTechniqueKind.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61968/AssetMeas/CalculationMethodOrder.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		class StatisticalCalculation : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			StatisticalCalculation();
			virtual ~StatisticalCalculation();
			/**
			 * Calculation mode.
			 */
			IEC61968::AssetMeas::CalculationModeKind calculationMode = IEC61968::AssetMeas::CalculationModeKind::_undef;
			/**
			 * Kind of statistical calculation, specifying how the measurement value is
			 * calculated.
			 */
			IEC61968::AssetMeas::CalculationTechniqueKind calculationTechnique = IEC61968::AssetMeas::CalculationTechniqueKind::_undef;
			std::list<IEC61968::AssetMeas::CalculationMethodOrder*> CalculationMethodOrder;

		};

	}

}
#endif // STATISTICALCALCULATION_H
