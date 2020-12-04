///////////////////////////////////////////////////////////
//  CurveData.h
//  Implementation of the Class CurveData
///////////////////////////////////////////////////////////

#ifndef CURVEDATA_H
#define CURVEDATA_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Float.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * Multi-purpose data points for defining a curve.  The use of this generic class
			 * is discouraged if a more specific class  can be used to specify the x and y
			 * axis values along with their specific data types.
			 */
			class CurveData : public BaseClass
			{

			public:
				CurveData();
				virtual ~CurveData();
				/**
				 * The data value of the X-axis variable,  depending on the X-axis units.
				 */
				IEC61970::Base::Domain::Float xvalue;
				/**
				 * The data value of the  first Y-axis variable, depending on the Y-axis units.
				 */
				IEC61970::Base::Domain::Float y1value;
				/**
				 * The data value of the second Y-axis variable (if present), depending on the Y-
				 * axis units.
				 */
				IEC61970::Base::Domain::Float y2value;
				/**
				 * The data value of the third Y-axis variable (if present), depending on the Y-
				 * axis units.
				 */
				IEC61970::Base::Domain::Float y3value;

			};

		}

	}

}
#endif // CURVEDATA_H
