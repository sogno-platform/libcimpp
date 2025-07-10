#ifndef DiagramObjectPoint_H
#define DiagramObjectPoint_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Float.hpp"
#include "Integer.hpp"

namespace CIMPP
{
	class DiagramObject;
	class DiagramObjectGluePoint;

	/** \brief A point in a given space defined by 3 coordinates and associated to a diagram object.  The coordinates may be positive or negative as the origin does not have to be in the corner of a diagram. */
	class DiagramObjectPoint : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		DiagramObjectPoint();
		~DiagramObjectPoint() override;

		/** \brief The diagram object with which the points are associated. Default: 0 */
		CIMPP::DiagramObject* DiagramObject;

		/** \brief The `glue` point to which this point is associated. Default: 0 */
		CIMPP::DiagramObjectGluePoint* DiagramObjectGluePoint;

		/** \brief The sequence position of the point, used for defining the order of points for diagram objects acting as a polyline or polygon with more than one point. The attribute shall be a positive value. Default: 0 */
		CIMPP::Integer sequenceNumber;

		/** \brief The X coordinate of this point. Default: 0.0 */
		CIMPP::Float xPosition;

		/** \brief The Y coordinate of this point. Default: 0.0 */
		CIMPP::Float yPosition;

		/** \brief The Z coordinate of this point. Default: 0.0 */
		CIMPP::Float zPosition;

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

	BaseClass* DiagramObjectPoint_factory();
}
#endif
