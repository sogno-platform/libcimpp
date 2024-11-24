#ifndef VsQpccControlKind_H
#define VsQpccControlKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	class VsQpccControlKind
	{
	public:
		enum VsQpccControlKind_ENUM
		{
			reactivePcc,
			voltagePcc,
			powerFactorPcc,
		};

		VsQpccControlKind() : value(), initialized(false) {}
		VsQpccControlKind(VsQpccControlKind_ENUM value) : value(value), initialized(true) {}

		VsQpccControlKind& operator=(VsQpccControlKind_ENUM rop);
		operator VsQpccControlKind_ENUM() const;

		VsQpccControlKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, VsQpccControlKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const VsQpccControlKind& obj);
	};
}
#endif
