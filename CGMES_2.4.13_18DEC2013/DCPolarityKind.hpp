#ifndef DCPolarityKind_H
#define DCPolarityKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Polarity for DC circuits.
	*/
	class DCPolarityKind
	{
	public:
		enum DCPolarityKind_ENUM
		{
			/**
			 * Positive pole.
			 */
			positive,
			/**
			 * Middle pole, potentially grounded.
			 */
			middle,
			/**
			 * Negative pole.
			 */
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
