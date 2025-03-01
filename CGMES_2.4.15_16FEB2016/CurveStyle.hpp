#ifndef CurveStyle_H
#define CurveStyle_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Style or shape of curve. */
	class CurveStyle
	{
	public:
		enum CurveStyle_ENUM
		{
			/** The Y-axis values are assumed constant until the next curve point and prior to the first curve point. */
			constantYValue,
			/** The Y-axis values are assumed to be a straight line between values.  Also known as linear interpolation. */
			straightLineYValues,
		};

		CurveStyle() : value(), initialized(false) {}
		CurveStyle(CurveStyle_ENUM value) : value(value), initialized(true) {}

		CurveStyle& operator=(CurveStyle_ENUM rop);
		operator CurveStyle_ENUM() const;

		CurveStyle_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, CurveStyle& rop);
		friend std::ostream& operator<<(std::ostream& os, const CurveStyle& obj);
	};
}
#endif
