#ifndef BoundaryPoint_H
#define BoundaryPoint_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemResource.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Boolean.hpp"
#include "String.hpp"

namespace CIMPP
{
	class ConnectivityNode;

	/** \brief Designates a connection point at which one or more model authority sets shall connect to. The location of the connection point as well as other properties are agreed between organisations responsible for the interconnection, hence all attributes of the class represent this agreement.  It is primarily used in a boundary model authority set which can contain one or many BoundaryPoint-s among other Equipment-s and their connections. */
	class BoundaryPoint : public PowerSystemResource
	{
	public:
		/* constructor initialising all attributes to null */
		BoundaryPoint();
		~BoundaryPoint() override;

		/** \brief The connectivity node that is designated as a boundary point. Default: 0 */
		CIMPP::ConnectivityNode* ConnectivityNode;

		/** \brief The ISO code of the region which the `From` side of the Boundary point belongs to or it is connected to. The ISO code is a two-character country code as defined by ISO 3166 (http://www.iso.org/iso/country_codes). The length of the string is 2 characters maximum. Default: '' */
		CIMPP::String fromEndIsoCode;

		/** \brief A human readable name with length of the string 64 characters maximum. It covers the following two cases: -if the Boundary point is placed on a tie-line, it is the name (IdentifiedObject.name) of the substation at which the `From` side of the tie-line is connected to. -if the Boundary point is placed in a substation, it is the name (IdentifiedObject.name) of the element (e.g. PowerTransformer, ACLineSegment, Switch, etc.) at which the `From` side of the Boundary point is connected to. Default: '' */
		CIMPP::String fromEndName;

		/** \brief Identifies the name of the transmission system operator, distribution system operator or other entity at which the `From` side of the interconnection is connected to. The length of the string is 64 characters maximum. Default: '' */
		CIMPP::String fromEndNameTso;

		/** \brief If true, this boundary point is a point of common coupling (PCC) of a direct current (DC) interconnection, otherwise the interconnection is AC (default). Default: false */
		CIMPP::Boolean isDirectCurrent;

		/** \brief If true, this boundary point is on the interconnection that is excluded from control area interchange calculation and consequently has no related tie flows. Otherwise, the interconnection is included in control area interchange and a TieFlow is required at all sides of the boundary point (default). Default: false */
		CIMPP::Boolean isExcludedFromAreaInterchange;

		/** \brief The ISO code of the region which the `To` side of the Boundary point belongs to or is connected to. The ISO code is a two-character country code as defined by ISO 3166 (http://www.iso.org/iso/country_codes). The length of the string is 2 characters maximum. Default: '' */
		CIMPP::String toEndIsoCode;

		/** \brief A human readable name with length of the string 64 characters maximum. It covers the following two cases: -if the Boundary point is placed on a tie-line, it is the name (IdentifiedObject.name) of the substation at which the `To` side of the tie-line is connected to. -if the Boundary point is placed in a substation, it is the name (IdentifiedObject.name) of the element (e.g. PowerTransformer, ACLineSegment, Switch, etc.) at which the `To` side of the Boundary point is connected to. Default: '' */
		CIMPP::String toEndName;

		/** \brief Identifies the name of the transmission system operator, distribution system operator or other entity at which the `To` side of the interconnection is connected to. The length of the string is 64 characters maximum. Default: '' */
		CIMPP::String toEndNameTso;

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

	BaseClass* BoundaryPoint_factory();
}
#endif
