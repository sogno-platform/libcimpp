#ifndef AsynchronousMachineKind_H
#define AsynchronousMachineKind_H

namespace CIMPP {
	/*
	Kind of Asynchronous Machine.
	*/
	enum class AsynchronousMachineKind
	{
		/**
		 * The Asynchronous Machine is a generator.
		 */
		generator,
		/**
		 * The Asynchronous Machine is a motor.
		 */
		motor,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::AsynchronousMachineKind& rop);
}
#endif
