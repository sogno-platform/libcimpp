#ifndef ExcPIC_H
#define ExcPIC_H
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
	Proportional/Integral Regulator Excitation System Model.  This model can be used to represent excitation systems with a proportional-integral (PI) voltage regulator controller.
	*/
	class ExcPIC : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcPIC();
		~ExcPIC() override;

		CIMPP::PU e1;  /* Field voltage value 1 (E1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU e2;  /* Field voltage value 2 (E2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU efdmax;  /* Exciter maximum limit (Efdmax).  Typical Value = 8. Default: nullptr */
		CIMPP::PU efdmin;  /* Exciter minimum limit (Efdmin).  Typical Value = -0.87. Default: nullptr */
		CIMPP::PU ka;  /* PI controller gain (Ka).  Typical Value = 3.15. Default: nullptr */
		CIMPP::PU kc;  /* Exciter regulation factor (Kc).  Typical Value = 0.08. Default: nullptr */
		CIMPP::PU ke;  /* Exciter constant (Ke).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kf;  /* Rate feedback gain (Kf).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ki;  /* Current source gain (Ki).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kp;  /* Potential source gain (Kp).  Typical Value = 6.5. Default: nullptr */
		CIMPP::PU se1;  /* Saturation factor at E1 (Se1).  Typical Value = 0. Default: nullptr */
		CIMPP::PU se2;  /* Saturation factor at E2 (Se2).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ta1;  /* PI controller time constant (Ta1).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds ta2;  /* Voltage regulator time constant (Ta2).  Typical Value = 0.01. Default: nullptr */
		CIMPP::Seconds ta3;  /* Lead time constant (Ta3).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ta4;  /* Lag time constant (Ta4).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds te;  /* Exciter time constant (Te).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tf1;  /* Rate feedback time constant (Tf1).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tf2;  /* Rate feedback lag time constant (Tf2).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vr1;  /* PI maximum limit (Vr1).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vr2;  /* PI minimum limit (Vr2).  Typical Value = -0.87. Default: nullptr */
		CIMPP::PU vrmax;  /* Voltage regulator maximum limit (Vrmax).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vrmin;  /* Voltage regulator minimum limit (Vrmin).  Typical Value = -0.87. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ExcPIC_factory();
}
#endif
