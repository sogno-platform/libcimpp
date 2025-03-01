#ifndef IfdBaseKind_H
#define IfdBaseKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Excitation base system mode. */
	class IfdBaseKind
	{
	public:
		enum IfdBaseKind_ENUM
		{
			/** Air gap line mode. */
			ifag,
			/** No load system with saturation mode. */
			ifnl,
			/** Full load system mode. */
			iffl,
		};

		IfdBaseKind() : value(), initialized(false) {}
		IfdBaseKind(IfdBaseKind_ENUM value) : value(value), initialized(true) {}

		IfdBaseKind& operator=(IfdBaseKind_ENUM rop);
		operator IfdBaseKind_ENUM() const;

		IfdBaseKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, IfdBaseKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const IfdBaseKind& obj);
	};
}
#endif
