#ifndef ExcAVR7_H
#define ExcAVR7_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	IVO excitation system.
	*/
	class ExcAVR7 : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcAVR7();
		~ExcAVR7() override;

		CIMPP::PU a1;  /* Lead coefficient (A1).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU a2;  /* Lag coefficient (A2).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU a3;  /* Lead coefficient (A3).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU a4;  /* Lag coefficient (A4).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU a5;  /* Lead coefficient (A5).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU a6;  /* Lag coefficient (A6).  Typical Value = 0.5. Default: nullptr */
		CIMPP::PU k1;  /* Gain (K1).  Typical Value = 1. Default: nullptr */
		CIMPP::PU k3;  /* Gain (K3).  Typical Value = 3. Default: nullptr */
		CIMPP::PU k5;  /* Gain (K5).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds t1;  /* Lead time constant (T1).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Seconds t2;  /* Lag time constant (T2).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds t3;  /* Lead time constant (T3).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds t4;  /* Lag time constant (T4).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds t5;  /* Lead time constant (T5).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds t6;  /* Lag time constant (T6).  Typical Value = 0.1. Default: nullptr */
		CIMPP::PU vmax1;  /* Lead-lag max. limit (Vmax1).  Typical Value = 5. Default: nullptr */
		CIMPP::PU vmax3;  /* Lead-lag max. limit (Vmax3).  Typical Value = 5. Default: nullptr */
		CIMPP::PU vmax5;  /* Lead-lag max. limit (Vmax5).  Typical Value = 5. Default: nullptr */
		CIMPP::PU vmin1;  /* Lead-lag min. limit (Vmin1).  Typical Value = -5. Default: nullptr */
		CIMPP::PU vmin3;  /* Lead-lag min. limit (Vmin3).  Typical Value = -5. Default: nullptr */
		CIMPP::PU vmin5;  /* Lead-lag min. limit (Vmin5).  Typical Value = -2. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcAVR7_factory();
}
#endif
