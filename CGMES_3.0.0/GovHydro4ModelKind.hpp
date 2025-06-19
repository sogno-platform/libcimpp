#ifndef GovHydro4ModelKind_H
#define GovHydro4ModelKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Possible types of GovHydro4 models. */
	class GovHydro4ModelKind
	{
	public:
		enum GovHydro4ModelKind_ENUM
		{
			/** Simple model. */
			simple,
			/** Francis or Pelton model. */
			francisPelton,
			/** Kaplan model. */
			kaplan,
		};

		GovHydro4ModelKind() : value(), initialized(false) {}
		GovHydro4ModelKind(GovHydro4ModelKind_ENUM value) : value(value), initialized(true) {}

		GovHydro4ModelKind& operator=(GovHydro4ModelKind_ENUM rop);
		operator GovHydro4ModelKind_ENUM() const;

		GovHydro4ModelKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, GovHydro4ModelKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const GovHydro4ModelKind& obj);
	};
}
#endif
