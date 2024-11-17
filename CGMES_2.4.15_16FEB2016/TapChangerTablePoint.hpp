#ifndef TapChangerTablePoint_H
#define TapChangerTablePoint_H

#include "BaseClass.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "PerCent.hpp"
#include "Simple_Float.hpp"
#include "Integer.hpp"

namespace CIMPP {


	/*
	
	*/
	class TapChangerTablePoint: public BaseClass
	{

	public:
					CIMPP::PerCent b; 	/* The magnetizing branch susceptance deviation in percent of nominal value. The actual susceptance is calculated as follows: calculated magnetizing susceptance = b(nominal) * (1 + b(from this class)/100).   The b(nominal) is defined as the static magnetizing susceptance on the associated power transformer end or ends.  This model assumes the star impedance (pi model) form. Default: nullptr */
					CIMPP::PerCent g; 	/* The magnetizing branch conductance deviation in percent of nominal value. The actual conductance is calculated as follows: calculated magnetizing conductance = g(nominal) * (1 + g(from this class)/100).   The g(nominal) is defined as the static magnetizing conductance on the associated power transformer end or ends.  This model assumes the star impedance (pi model) form. Default: nullptr */
					CIMPP::PerCent r; 	/* The resistance deviation in percent of nominal value. The actual reactance is calculated as follows: calculated resistance = r(nominal) * (1 + r(from this class)/100).   The r(nominal) is defined as the static resistance on the associated power transformer end or ends.  This model assumes the star impedance (pi model) form. Default: nullptr */
					CIMPP::Simple_Float ratio; 	/* The voltage ratio in per unit. Hence this is a value close to one. Default: nullptr */
					CIMPP::Integer step; 	/* The tap step. Default: 0 */
					CIMPP::PerCent x; 	/* The series reactance deviation in percent of nominal value. The actual reactance is calculated as follows: calculated reactance = x(nominal) * (1 + x(from this class)/100).   The x(nominal) is defined as the static series reactance on the associated power transformer end or ends.  This model assumes the star impedance (pi model) form. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		TapChangerTablePoint();
		virtual ~TapChangerTablePoint();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* TapChangerTablePoint_factory();
}
#endif
