#ifndef FuelType_H
#define FuelType_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Type of fuel. */
	class FuelType
	{
	public:
		enum FuelType_ENUM
		{
			/** Generic coal, not including lignite type. */
			coal,
			/** Oil. */
			oil,
			/** Natural gas. */
			gas,
			/** The fuel is lignite coal.  Note that this is a special type of coal, so the other enum of coal is reserved for hard coal types or if the exact type of coal is not known. */
			lignite,
			/** Hard coal */
			hardCoal,
			/** Oil Shale */
			oilShale,
		};

		FuelType() : value(), initialized(false) {}
		FuelType(FuelType_ENUM value) : value(value), initialized(true) {}

		FuelType& operator=(FuelType_ENUM rop);
		operator FuelType_ENUM() const;

		FuelType_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, FuelType& rop);
		friend std::ostream& operator<<(std::ostream& os, const FuelType& obj);
	};
}
#endif
