#ifndef GenericNonLinearLoadModelKind_H
#define GenericNonLinearLoadModelKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Type of generic non-linear load model. */
	class GenericNonLinearLoadModelKind
	{
	public:
		enum GenericNonLinearLoadModelKind_ENUM
		{
			/** Exponential recovery model. */
			exponentialRecovery,
			/** Load adaptive model. */
			loadAdaptive,
		};

		GenericNonLinearLoadModelKind() : value(), initialized(false) {}
		GenericNonLinearLoadModelKind(GenericNonLinearLoadModelKind_ENUM value) : value(value), initialized(true) {}

		GenericNonLinearLoadModelKind& operator=(GenericNonLinearLoadModelKind_ENUM rop);
		operator GenericNonLinearLoadModelKind_ENUM() const;

		GenericNonLinearLoadModelKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, GenericNonLinearLoadModelKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const GenericNonLinearLoadModelKind& obj);
	};
}
#endif
