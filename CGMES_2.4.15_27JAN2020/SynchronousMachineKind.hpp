#ifndef SynchronousMachineKind_H
#define SynchronousMachineKind_H

namespace CIMPP {
	/*
	Synchronous machine type.
	*/
	enum class SynchronousMachineKind
	{
		/**
		 * 
		 */
		generator,
		/**
		 * 
		 */
		condenser,
		/**
		 * 
		 */
		generatorOrCondenser,
		/**
		 * 
		 */
		motor,
		/**
		 * 
		 */
		generatorOrMotor,
		/**
		 * 
		 */
		motorOrCondenser,
		/**
		 * 
		 */
		generatorOrCondenserOrMotor,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::SynchronousMachineKind& rop);
}
#endif
