#ifndef CurveStyle_H
#define CurveStyle_H

namespace CIMPP {
	/*
	Style or shape of curve.
	*/
	enum class CurveStyle
	{
		/**
		 * The Y-axis values are assumed constant until the next curve point and prior to the first curve point.
		 */
		constantYValue,
		/**
		 * The Y-axis values are assumed to be a straight line between values.  Also known as linear interpolation.
		 */
		straightLineYValues,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::CurveStyle& rop);
}
#endif
