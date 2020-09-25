#ifndef VsQpccControlKind_H
#define VsQpccControlKind_H

namespace CIMPP {
	/*
	
	*/
	enum class VsQpccControlKind
	{
		/**
		 * 
		 */
		reactivePcc,
		/**
		 * 
		 */
		voltagePcc,
		/**
		 * 
		 */
		powerFactorPcc,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::VsQpccControlKind& rop);
}
#endif
