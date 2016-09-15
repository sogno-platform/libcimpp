///////////////////////////////////////////////////////////
//  CurveData.h
//  Implementation of the Class CurveData
//  Created on:      28-Jan-2016 12:43:51
///////////////////////////////////////////////////////////

#if !defined(EA_DB5C1C99_23B0_4a66_A1B9_84DAD8F0825D__INCLUDED_)
#define EA_DB5C1C99_23B0_4a66_A1B9_84DAD8F0825D__INCLUDED_

#include "IEC61970/Base/Domain/Float.h"
#include "BaseClass.h"

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
#endif // !defined(EA_DB5C1C99_23B0_4a66_A1B9_84DAD8F0825D__INCLUDED_)
