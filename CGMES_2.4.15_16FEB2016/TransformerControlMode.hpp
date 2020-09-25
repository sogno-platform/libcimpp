#ifndef TransformerControlMode_H
#define TransformerControlMode_H

namespace CIMPP {
	/*
	Control modes for a transformer.
	*/
	enum class TransformerControlMode
	{
		/**
		 * Voltage control
		 */
		volt,
		/**
		 * Reactive power flow control
		 */
		reactive,
	};
	std::istream& operator>>(std::istream& lop, CIMPP::TransformerControlMode& rop);
}
#endif
