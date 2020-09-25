#ifndef FuelType_H
#define FuelType_H

namespace CIMPP {
	/*
	Type of fuel.
	*/
	enum class FuelType
	{
		/**
		 * Generic coal, not including lignite type.
		 */
		coal,
		/**
		 * Oil.
		 */
		oil,
		/**
		 * Natural gas.
		 */
		gas,
		/**
		 * The fuel is lignite coal.  Note that this is a special type of coal, so the other enum of coal is reserved for hard coal types or if the exact type of coal is not known.
		 */
		lignite,
		/**
		 * Hard coal
		 */
		hardCoal,
		/**
		 * Oil Shale
		 */
		oilShale,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::FuelType& rop);
}
#endif
