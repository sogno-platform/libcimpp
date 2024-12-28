#ifndef LoadStatic_H
#define LoadStatic_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Float.hpp"
#include "StaticLoadModelKind.hpp"

namespace CIMPP
{
	class LoadAggregate;

	/*
	General static load. This model represents the sensitivity of the real and reactive power consumed by the load to the amplitude and frequency of the bus voltage.
	*/
	class LoadStatic : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		LoadStatic();
		~LoadStatic() override;

		CIMPP::LoadAggregate* LoadAggregate;  /* Aggregate load to which this aggregate static load belongs. Default: 0 */
		CIMPP::Float ep1;  /* First term voltage exponent for active power (&lt;i&gt;Ep1&lt;/i&gt;).  Used only when .staticLoadModelType = exponential. Default: 0.0 */
		CIMPP::Float ep2;  /* Second term voltage exponent for active power (&lt;i&gt;Ep2&lt;/i&gt;).  Used only when .staticLoadModelType = exponential. Default: 0.0 */
		CIMPP::Float ep3;  /* Third term voltage exponent for active power (&lt;i&gt;Ep3&lt;/i&gt;).  Used only when .staticLoadModelType = exponential. Default: 0.0 */
		CIMPP::Float eq1;  /* First term voltage exponent for reactive power (&lt;i&gt;Eq1&lt;/i&gt;).  Used only when .staticLoadModelType = exponential. Default: 0.0 */
		CIMPP::Float eq2;  /* Second term voltage exponent for reactive power (&lt;i&gt;Eq2&lt;/i&gt;).  Used only when .staticLoadModelType = exponential. Default: 0.0 */
		CIMPP::Float eq3;  /* Third term voltage exponent for reactive power (&lt;i&gt;Eq3&lt;/i&gt;).  Used only when .staticLoadModelType = exponential. Default: 0.0 */
		CIMPP::Float kp1;  /* First term voltage coefficient for active power (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;p1&lt;/sub&gt;&lt;/i&gt;).  Not used when .staticLoadModelType = constantZ. Default: 0.0 */
		CIMPP::Float kp2;  /* Second term voltage coefficient for active power (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;p2&lt;/sub&gt;&lt;/i&gt;).  Not used when .staticLoadModelType = constantZ. Default: 0.0 */
		CIMPP::Float kp3;  /* Third term voltage coefficient for active power (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;p3&lt;/sub&gt;&lt;/i&gt;).  Not used when .staticLoadModelType = constantZ. Default: 0.0 */
		CIMPP::Float kp4;  /* Frequency coefficient for active power (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;p4&lt;/sub&gt;&lt;/i&gt;)  (not = 0 if .staticLoadModelType = zIP2).  Used only when .staticLoadModelType = zIP2. Default: 0.0 */
		CIMPP::Float kpf;  /* Frequency deviation coefficient for active power (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;pf&lt;/sub&gt;&lt;/i&gt;).  Not used when .staticLoadModelType = constantZ. Default: 0.0 */
		CIMPP::Float kq1;  /* First term voltage coefficient for reactive power (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;q1&lt;/sub&gt;&lt;/i&gt;).  Not used when .staticLoadModelType = constantZ. Default: 0.0 */
		CIMPP::Float kq2;  /* Second term voltage coefficient for reactive power (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;q2&lt;/sub&gt;&lt;/i&gt;).  Not used when .staticLoadModelType = constantZ. Default: 0.0 */
		CIMPP::Float kq3;  /* Third term voltage coefficient for reactive power (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;q3&lt;/sub&gt;&lt;/i&gt;).  Not used when .staticLoadModelType = constantZ. Default: 0.0 */
		CIMPP::Float kq4;  /* Frequency coefficient for reactive power (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;q4&lt;/sub&gt;&lt;/i&gt;)  (not = 0 when .staticLoadModelType = zIP2).  Used only when .staticLoadModelType - zIP2. Default: 0.0 */
		CIMPP::Float kqf;  /* Frequency deviation coefficient for reactive power (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;qf&lt;/sub&gt;&lt;/i&gt;).  Not used when .staticLoadModelType = constantZ. Default: 0.0 */
		CIMPP::StaticLoadModelKind staticLoadModelType;  /* Type of static load model.  Typical value = constantZ. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* LoadStatic_factory();
}
#endif
