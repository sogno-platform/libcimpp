#ifndef DCPolarityKind_H
#define DCPolarityKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Polarity for DC circuits. */
	class DCPolarityKind
	{
	public:
		enum DCPolarityKind_ENUM
		{
			/** Positive pole. The converter terminal is intended to operate at a positive voltage relative the midpoint or negative terminal. */
			positive,
			/** Middle pole. The converter terminal is the midpoint in a bipolar or symmetric monopole configuration. The midpoint can be grounded and/or have a metallic return. */
			middle,
			/** Negative pole. The converter terminal is intended to operate at a negative voltage relative the midpoint or positive terminal. */
			negative,
		};

		DCPolarityKind() : value(), initialized(false) {}
		DCPolarityKind(DCPolarityKind_ENUM value) : value(value), initialized(true) {}

		DCPolarityKind& operator=(DCPolarityKind_ENUM rop);
		operator DCPolarityKind_ENUM() const;

		DCPolarityKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, DCPolarityKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const DCPolarityKind& obj);
	};
}
#endif
