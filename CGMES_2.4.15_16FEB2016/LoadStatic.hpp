#ifndef LoadStatic_H
#define LoadStatic_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"
#include "StaticLoadModelKind.hpp"

namespace CIMPP {


class LoadAggregate;
	/*
	General static load model representing the sensitivity of the real and reactive power consumed by the load to the amplitude and frequency of the bus voltage.
	*/
	class LoadStatic: public IdentifiedObject
	{

	public:
					CIMPP::LoadAggregate* LoadAggregate; 	/* Aggregate load to which this aggregate static load belongs. Default: 0 */
					CIMPP::Simple_Float ep1; 	/* First term voltage exponent for active power (Ep1).  Used only when .staticLoadModelType = exponential. Default: nullptr */
					CIMPP::Simple_Float ep2; 	/* Second term voltage exponent for active power (Ep2).  Used only when .staticLoadModelType = exponential. Default: nullptr */
					CIMPP::Simple_Float ep3; 	/* Third term voltage exponent for active power (Ep3).  Used only when .staticLoadModelType = exponential. Default: nullptr */
					CIMPP::Simple_Float eq1; 	/* First term voltage exponent for reactive power (Eq1).  Used only when .staticLoadModelType = exponential. Default: nullptr */
					CIMPP::Simple_Float eq2; 	/* Second term voltage exponent for reactive power (Eq2).  Used only when .staticLoadModelType = exponential. Default: nullptr */
					CIMPP::Simple_Float eq3; 	/* Third term voltage exponent for reactive power (Eq3).  Used only when .staticLoadModelType = exponential. Default: nullptr */
					CIMPP::Simple_Float kp1; 	/* First term voltage coefficient for active power (Kp1).  Not used when .staticLoadModelType = constantZ. Default: nullptr */
					CIMPP::Simple_Float kp2; 	/* Second term voltage coefficient for active power (Kp2).  Not used when .staticLoadModelType = constantZ. Default: nullptr */
					CIMPP::Simple_Float kp3; 	/* Third term voltage coefficient for active power (Kp3).  Not used when .staticLoadModelType = constantZ. Default: nullptr */
					CIMPP::Simple_Float kp4; 	/* Frequency coefficient for active power (Kp4).  Must be non-zero when .staticLoadModelType = ZIP2.  Not used for all other values of .staticLoadModelType. Default: nullptr */
					CIMPP::Simple_Float kpf; 	/* Frequency deviation coefficient for active power (Kpf).  Not used when .staticLoadModelType = constantZ. Default: nullptr */
					CIMPP::Simple_Float kq1; 	/* First term voltage coefficient for reactive power (Kq1).  Not used when .staticLoadModelType = constantZ. Default: nullptr */
					CIMPP::Simple_Float kq2; 	/* Second term voltage coefficient for reactive power (Kq2).  Not used when .staticLoadModelType = constantZ. Default: nullptr */
					CIMPP::Simple_Float kq3; 	/* Third term voltage coefficient for reactive power (Kq3).  Not used when .staticLoadModelType = constantZ. Default: nullptr */
					CIMPP::Simple_Float kq4; 	/* Frequency coefficient for reactive power (Kq4).  Must be non-zero when .staticLoadModelType = ZIP2.  Not used for all other values of .staticLoadModelType. Default: nullptr */
					CIMPP::Simple_Float kqf; 	/* Frequency deviation coefficient for reactive power (Kqf).  Not used when .staticLoadModelType = constantZ. Default: nullptr */
					CIMPP::StaticLoadModelKind staticLoadModelType; 	/* Type of static load model.  Typical Value = constantZ. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		LoadStatic();
		virtual ~LoadStatic();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* LoadStatic_factory();
}
#endif
