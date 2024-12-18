#ifndef Pss1_H
#define Pss1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	Italian PSS - three input PSS (speed, frequency, power).
	*/
	class Pss1 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		Pss1();
		~Pss1() override;

		CIMPP::Simple_Float kf;  /* Frequency power input gain (K).  Typical Value = 5. Default: nullptr */
		CIMPP::Simple_Float kpe;  /* Electric power input gain (K).  Typical Value = 0.3. Default: nullptr */
		CIMPP::Simple_Float ks;  /* PSS gain (K).  Typical Value = 1. Default: nullptr */
		CIMPP::Simple_Float kw;  /* Shaft speed power input gain (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU pmin;  /* Minimum power PSS enabling (P).  Typical Value = 0.25. Default: nullptr */
		CIMPP::Seconds t10;  /* Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t5;  /* Washout (T).  Typical Value = 3.5. Default: nullptr */
		CIMPP::Seconds t6;  /* Filter time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t7;  /* Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t8;  /* Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds t9;  /* Lead/lag time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tpe;  /* Electric power filter time constant (T).  Typical Value = 0.05. Default: nullptr */
		CIMPP::Boolean vadat;  /*  Default: false */
		CIMPP::PU vsmn;  /* Stabilizer output max limit (V).  Typical Value = -0.06. Default: nullptr */
		CIMPP::PU vsmx;  /* Stabilizer output min limit (V).  Typical Value = 0.06. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* Pss1_factory();
}
#endif
