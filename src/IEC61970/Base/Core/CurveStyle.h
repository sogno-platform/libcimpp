///////////////////////////////////////////////////////////
//  CurveStyle.h
//  Implementation of the Class CurveStyle
///////////////////////////////////////////////////////////

#ifndef CURVESTYLE_H
#define CURVESTYLE_H

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * Style or shape of curve.
			 */
			enum class CurveStyle
			{
				/**
				 * The Y-axis values are assumed constant until the next curve point and prior to
				 * the first curve point.
				 */
				constantYValue,
				/**
				 * The Y-axis values are assumed to be a straight line between values.  Also known
				 * as linear interpolation.
				 */
				straightLineYValues
			};

		}

	}

}
#endif // CURVESTYLE_H
