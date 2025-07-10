#ifndef TurbLCFB1_H
#define TurbLCFB1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "TurbineLoadControllerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "ActivePower.hpp"
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Turbine Load Controller model developed in the WECC.  This model represents a supervisory turbine load controller that acts to maintain turbine power at a set value by continuous adjustment of the turbine governor speed-load reference. This model is intended to represent slow reset 'outer loop' controllers managing the action of the turbine governor. */
	class TurbLCFB1 : public TurbineLoadControllerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		TurbLCFB1();
		~TurbLCFB1() override;

		/** \brief Controller dead band (db).  Typical Value = 0. Default: nullptr */
		CIMPP::PU db;

		/** \brief Maximum control error (Emax) (note 4).  Typical Value = 0.02. Default: nullptr */
		CIMPP::PU emax;

		/** \brief Frequency bias gain (Fb).  Typical Value = 0. Default: nullptr */
		CIMPP::PU fb;

		/** \brief Frequency bias flag (Fbf). true = enable frequency bias false = disable frequency bias. Typical Value = false. Default: false */
		CIMPP::Boolean fbf;

		/** \brief Maximum turbine speed/load reference bias (Irmax) (note 3).  Typical Value = 0. Default: nullptr */
		CIMPP::PU irmax;

		/** \brief Integral gain (Ki).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Proportional gain (Kp).  Typical Value = 0. Default: nullptr */
		CIMPP::PU kp;

		/** \brief Base for power values (MWbase) (&gt;0).  Unit = MW. Default: nullptr */
		CIMPP::ActivePower mwbase;

		/** \brief Power controller flag (Pbf). true = enable load controller false = disable load controller. Typical Value = false. Default: false */
		CIMPP::Boolean pbf;

		/** \brief Power controller setpoint (Pmwset) (note 1).  Unit = MW. Typical Value = 0. Default: nullptr */
		CIMPP::ActivePower pmwset;

		/** \brief Type of turbine governor reference (Type). true = speed reference governor false = load reference governor. Typical Value = true. Default: false */
		CIMPP::Boolean speedReferenceGovernor;

		/** \brief Power transducer time constant (Tpelec).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds tpelec;

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

	BaseClass* TurbLCFB1_factory();
}
#endif
