#ifndef PssWECC_H
#define PssWECC_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "InputSignalKind.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Dual input Power System Stabilizer, based on IEEE type 2, with modified output limiter defined by WECC (Western Electricity Coordinating Council, USA).
	*/
	class PssWECC : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssWECC();
		~PssWECC() override;

		CIMPP::InputSignalKind inputSignal1Type;  /* Type of input signal #1. Default: 0 */
		CIMPP::InputSignalKind inputSignal2Type;  /* Type of input signal #2. Default: 0 */
		CIMPP::PU k1;  /* Input signal 1 gain  (K). Default: nullptr */
		CIMPP::PU k2;  /* Input signal 2 gain (K). Default: nullptr */
		CIMPP::Seconds t1;  /* Input signal 1 transducer time constant (T). Default: nullptr */
		CIMPP::Seconds t10;  /* Lag time constant (T). Default: nullptr */
		CIMPP::Seconds t2;  /* Input signal 2 transducer time constant (T). Default: nullptr */
		CIMPP::Seconds t3;  /* Stabilizer washout time constant (T). Default: nullptr */
		CIMPP::Seconds t4;  /* Stabilizer washout time lag constant (T) (&gt;0). Default: nullptr */
		CIMPP::Seconds t5;  /* Lead time constant (T). Default: nullptr */
		CIMPP::Seconds t6;  /* Lag time constant (T). Default: nullptr */
		CIMPP::Seconds t7;  /* Lead time constant (T). Default: nullptr */
		CIMPP::Seconds t8;  /* Lag time constant (T). Default: nullptr */
		CIMPP::Seconds t9;  /* Lead time constant (T). Default: nullptr */
		CIMPP::PU vcl;  /* Minimum value for voltage compensator output (V). Default: nullptr */
		CIMPP::PU vcu;  /* Maximum value for voltage compensator output (V). Default: nullptr */
		CIMPP::PU vsmax;  /* Maximum output signal (Vsmax). Default: nullptr */
		CIMPP::PU vsmin;  /* Minimum output signal (Vsmin). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PssWECC_factory();
}
#endif
