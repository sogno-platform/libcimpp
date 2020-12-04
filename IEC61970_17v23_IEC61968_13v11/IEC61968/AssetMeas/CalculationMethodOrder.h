///////////////////////////////////////////////////////////
//  CalculationMethodOrder.h
//  Implementation of the Class CalculationMethodOrder
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef CALCULATIONMETHODORDER_H
#define CALCULATIONMETHODORDER_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Integer.h"
#include "IEC61968/AssetMeas/CalculationMethodHierarchy.h"

namespace IEC61968
{
	namespace AssetMeas
	{
		/**
		 * The order of this calculation method in a hierarchy of calculation methods.
		 */
		class CalculationMethodOrder : public BaseClass
		{

		public:
			CalculationMethodOrder();
			virtual ~CalculationMethodOrder();
			IEC61970::Base::Domain::Integer order;
			IEC61968::AssetMeas::CalculationMethodHierarchy *CalculationMethodHierarchy;

		};

	}

}
#endif // CALCULATIONMETHODORDER_H
