#ifndef WindContPType3IEC_H
#define WindContPType3IEC_H
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
#include "Boolean.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{
	class WindDynamicsLookupTable;
	class WindTurbineType3IEC;

	/** \brief P control model type 3. Reference: IEC 61400-27-1:2015, 5.6.5.4. */
	class WindContPType3IEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindContPType3IEC();
		~WindContPType3IEC() override;

		/** \brief The wind dynamics lookup table associated with this P control type 3 model. Default: 0 */
		std::list<CIMPP::WindDynamicsLookupTable*> WindDynamicsLookupTable;

		/** \brief Wind turbine type 3 model with which this wind control P type 3 model is associated. Default: 0 */
		CIMPP::WindTurbineType3IEC* WindTurbineType3IEC;

		/** \brief Maximum wind turbine power ramp rate (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;max&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU dpmax;

		/** \brief Maximum ramp rate of wind turbine reference power (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;refmax&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU dprefmax;

		/** \brief Minimum ramp rate of wind turbine reference power (&lt;i&gt;dp&lt;/i&gt;&lt;i&gt;&lt;sub&gt;refmin&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU dprefmin;

		/** \brief Ramp limitation of torque, required in some grid codes (&lt;i&gt;dt&lt;/i&gt;&lt;i&gt;&lt;sub&gt;max&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU dthetamax;

		/** \brief Limitation of torque rise rate during UVRT (&lt;i&gt;dtheta&lt;/i&gt;&lt;i&gt;&lt;sub&gt;maxUVRT&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU dthetamaxuvrt;

		/** \brief Gain for active drive train damping (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;DTD&lt;/sub&gt;&lt;/i&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kdtd;

		/** \brief PI controller integration parameter (&lt;i&gt;K&lt;/i&gt;&lt;sub&gt;Ip&lt;/sub&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kip;

		/** \brief PI controller proportional gain (&lt;i&gt;K&lt;/i&gt;&lt;sub&gt;Pp&lt;/sub&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU kpp;

		/** \brief Enable UVRT power control mode (&lt;i&gt;M&lt;/i&gt;&lt;i&gt;&lt;sub&gt;pUVRT&lt;/sub&gt;&lt;/i&gt;&lt;sub&gt;)&lt;/sub&gt;.  It is a project-dependent parameter. true = voltage control (1 in the IEC model) false = reactive power control (0 in the IEC model). Default: false */
		CIMPP::Boolean mpuvrt;

		/** \brief Active drive train damping frequency (&lt;i&gt;omega&lt;/i&gt;&lt;i&gt;&lt;sub&gt;DTD&lt;/sub&gt;&lt;/i&gt;). It can be calculated from two mass model parameters. It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU omegadtd;

		/** \brief Offset to reference value that limits controller action during rotor speed changes (&lt;i&gt;omega&lt;/i&gt;&lt;i&gt;&lt;sub&gt;offset&lt;/sub&gt;&lt;/i&gt;). It is a case-dependent parameter. Default: nullptr */
		CIMPP::PU omegaoffset;

		/** \brief Maximum active drive train damping power (&lt;i&gt;p&lt;/i&gt;&lt;sub&gt;DTDmax&lt;/sub&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU pdtdmax;

		/** \brief Time&lt;sub&gt; &lt;/sub&gt;delay after deep voltage sags (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;DVS&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). It is a project-dependent parameter. Default: nullptr */
		CIMPP::Seconds tdvs;

		/** \brief Minimum electrical generator torque (&lt;i&gt;t&lt;/i&gt;&lt;sub&gt;emin&lt;/sub&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU thetaemin;

		/** \brief Voltage scaling factor of reset-torque (&lt;i&gt;t&lt;/i&gt;&lt;sub&gt;uscale&lt;/sub&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU thetauscale;

		/** \brief Filter time constant for generator speed measurement (&lt;i&gt;T&lt;/i&gt;&lt;sub&gt;omegafiltp3&lt;/sub&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tomegafiltp3;

		/** \brief Time constant in speed reference filter (&lt;i&gt;T&lt;/i&gt;&lt;sub&gt;omega,ref&lt;/sub&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tomegaref;

		/** \brief Filter time constant for power measurement (&lt;i&gt;T&lt;/i&gt;&lt;sub&gt;pfiltp3&lt;/sub&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tpfiltp3;

		/** \brief Time constant in power order lag (&lt;i&gt;T&lt;/i&gt;&lt;sub&gt;pord&lt;/sub&gt;). It is a type-dependent parameter. Default: nullptr */
		CIMPP::PU tpord;

		/** \brief Filter time constant for voltage measurement (&lt;i&gt;T&lt;/i&gt;&lt;sub&gt;ufiltp3&lt;/sub&gt;) (&amp;gt;= 0). It is a type-dependent parameter. Default: nullptr */
		CIMPP::Seconds tufiltp3;

		/** \brief Voltage limit for hold UVRT status after deep voltage sags (&lt;i&gt;u&lt;/i&gt;&lt;i&gt;&lt;sub&gt;DVS&lt;/sub&gt;&lt;/i&gt;). It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU udvs;

		/** \brief Voltage dip threshold for P-control (&lt;i&gt;u&lt;/i&gt;&lt;sub&gt;Pdip&lt;/sub&gt;).  Part of turbine control, often different (e.g 0.8) from converter thresholds. It is a project-dependent parameter. Default: nullptr */
		CIMPP::PU updip;

		/** \brief Coefficient for active drive train damping (&lt;i&gt;zeta&lt;/i&gt;). It is a type-dependent parameter. Default: 0.0 */
		CIMPP::Float zeta;

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

	BaseClass* WindContPType3IEC_factory();
}
#endif
