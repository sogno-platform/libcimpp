#ifndef AsynchronousMachineKind_H
#define AsynchronousMachineKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Kind of Asynchronous Machine. */
	class AsynchronousMachineKind
	{
	public:
		enum AsynchronousMachineKind_ENUM
		{
			/** The Asynchronous Machine is a generator. */
			generator,
			/** The Asynchronous Machine is a motor. */
			motor,
		};

		AsynchronousMachineKind() : value(), initialized(false) {}
		AsynchronousMachineKind(AsynchronousMachineKind_ENUM value) : value(value), initialized(true) {}

		AsynchronousMachineKind& operator=(AsynchronousMachineKind_ENUM rop);
		operator AsynchronousMachineKind_ENUM() const;

		AsynchronousMachineKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, AsynchronousMachineKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const AsynchronousMachineKind& obj);
	};
}
#endif
