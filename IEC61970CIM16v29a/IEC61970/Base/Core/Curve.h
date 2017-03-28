///////////////////////////////////////////////////////////
//  Curve.h
//  Implementation of the Class Curve
///////////////////////////////////////////////////////////

#ifndef CURVE_H
#define CURVE_H

#include <list>

#include "IEC61970/Base/Core/CurveStyle.h"
#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Core/CurveData.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * A multi-purpose curve or functional relationship between an independent
			 * variable (X-axis) and dependent (Y-axis) variables. 
			 */
			class Curve : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				Curve();
				virtual ~Curve();
				/**
				 * The style or shape of the curve.
				 */
				IEC61970::Base::Core::CurveStyle curveStyle;
				/**
				 * Multiplier for X-axis.
				 */
				IEC61970::Base::Domain::UnitMultiplier xMultiplier;
				/**
				 * The X-axis units of measure.
				 */
				IEC61970::Base::Domain::UnitSymbol xUnit;
				/**
				 * Multiplier for Y1-axis.
				 */
				IEC61970::Base::Domain::UnitMultiplier y1Multiplier;
				/**
				 * The Y1-axis units of measure.
				 */
				IEC61970::Base::Domain::UnitSymbol y1Unit;
				/**
				 * Multiplier for Y2-axis.
				 */
				IEC61970::Base::Domain::UnitMultiplier y2Multiplier;
				/**
				 * The Y2-axis units of measure.
				 */
				IEC61970::Base::Domain::UnitSymbol y2Unit;
				/**
				 * Multiplier for Y3-axis.
				 */
				IEC61970::Base::Domain::UnitMultiplier y3Multiplier;
				/**
				 * The Y3-axis units of measure.
				 */
				IEC61970::Base::Domain::UnitSymbol y3Unit;
				/**
				 * The point data values that define this curve.
				 */
				std::list<IEC61970::Base::Core::CurveData*> CurveDatas;

			};

		}

	}

}
#endif // CURVE_H
