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
#include "CimClassDetails.hpp"
#include "Simple_Float.hpp"
#include "StaticLoadModelKind.hpp"

namespace CIMPP
{
	class LoadAggregate;

	/** \brief General static load model representing the sensitivity of the real and reactive power consumed by the load to the amplitude and frequency of the bus voltage. */
	class LoadStatic : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		LoadStatic();
		~LoadStatic() override;

		/** \brief Aggregate load to which this aggregate static load belongs. Default: 0 */
		CIMPP::LoadAggregate* LoadAggregate;

		/** \brief First term voltage exponent for active power (Ep1).  Used only when .staticLoadModelType = exponential. Default: nullptr */
		CIMPP::Simple_Float ep1;

		/** \brief Second term voltage exponent for active power (Ep2).  Used only when .staticLoadModelType = exponential. Default: nullptr */
		CIMPP::Simple_Float ep2;

		/** \brief Third term voltage exponent for active power (Ep3).  Used only when .staticLoadModelType = exponential. Default: nullptr */
		CIMPP::Simple_Float ep3;

		/** \brief First term voltage exponent for reactive power (Eq1).  Used only when .staticLoadModelType = exponential. Default: nullptr */
		CIMPP::Simple_Float eq1;

		/** \brief Second term voltage exponent for reactive power (Eq2).  Used only when .staticLoadModelType = exponential. Default: nullptr */
		CIMPP::Simple_Float eq2;

		/** \brief Third term voltage exponent for reactive power (Eq3).  Used only when .staticLoadModelType = exponential. Default: nullptr */
		CIMPP::Simple_Float eq3;

		/** \brief First term voltage coefficient for active power (Kp1).  Not used when .staticLoadModelType = constantZ. Default: nullptr */
		CIMPP::Simple_Float kp1;

		/** \brief Second term voltage coefficient for active power (Kp2).  Not used when .staticLoadModelType = constantZ. Default: nullptr */
		CIMPP::Simple_Float kp2;

		/** \brief Third term voltage coefficient for active power (Kp3).  Not used when .staticLoadModelType = constantZ. Default: nullptr */
		CIMPP::Simple_Float kp3;

		/** \brief Frequency coefficient for active power (Kp4).  Must be non-zero when .staticLoadModelType = ZIP2.  Not used for all other values of .staticLoadModelType. Default: nullptr */
		CIMPP::Simple_Float kp4;

		/** \brief Frequency deviation coefficient for active power (Kpf).  Not used when .staticLoadModelType = constantZ. Default: nullptr */
		CIMPP::Simple_Float kpf;

		/** \brief First term voltage coefficient for reactive power (Kq1).  Not used when .staticLoadModelType = constantZ. Default: nullptr */
		CIMPP::Simple_Float kq1;

		/** \brief Second term voltage coefficient for reactive power (Kq2).  Not used when .staticLoadModelType = constantZ. Default: nullptr */
		CIMPP::Simple_Float kq2;

		/** \brief Third term voltage coefficient for reactive power (Kq3).  Not used when .staticLoadModelType = constantZ. Default: nullptr */
		CIMPP::Simple_Float kq3;

		/** \brief Frequency coefficient for reactive power (Kq4).  Must be non-zero when .staticLoadModelType = ZIP2.  Not used for all other values of .staticLoadModelType. Default: nullptr */
		CIMPP::Simple_Float kq4;

		/** \brief Frequency deviation coefficient for reactive power (Kqf).  Not used when .staticLoadModelType = constantZ. Default: nullptr */
		CIMPP::Simple_Float kqf;

		/** \brief Type of static load model.  Typical Value = constantZ. Default: 0 */
		CIMPP::StaticLoadModelKind staticLoadModelType;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* LoadStatic_factory();
}
#endif
