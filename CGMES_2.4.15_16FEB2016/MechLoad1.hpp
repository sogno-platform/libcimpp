#ifndef MechLoad1_H
#define MechLoad1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "MechanicalLoadDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/*
	Mechanical load model type 1.
	*/
	class MechLoad1 : public MechanicalLoadDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		MechLoad1();
		~MechLoad1() override;

		CIMPP::Simple_Float a;  /* Speed squared coefficient (a). Default: nullptr */
		CIMPP::Simple_Float b;  /* Speed coefficient (b). Default: nullptr */
		CIMPP::Simple_Float d;  /* Speed to the exponent coefficient (d). Default: nullptr */
		CIMPP::Simple_Float e;  /* Exponent (e). Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* MechLoad1_factory();
}
#endif
