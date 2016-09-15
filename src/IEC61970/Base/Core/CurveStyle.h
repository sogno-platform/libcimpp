///////////////////////////////////////////////////////////
//  CurveStyle.h
//  Implementation of the Class CurveStyle
//  Created on:      28-Jan-2016 12:43:51
///////////////////////////////////////////////////////////

#if !defined(EA_AC594992_3B86_4bbb_8D7D_E810F49FC7CE__INCLUDED_)
#define EA_AC594992_3B86_4bbb_8D7D_E810F49FC7CE__INCLUDED_

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
#endif // !defined(EA_AC594992_3B86_4bbb_8D7D_E810F49FC7CE__INCLUDED_)
