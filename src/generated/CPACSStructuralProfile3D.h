// Copyright (c) 2018 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <boost/optional.hpp>
#include <boost/utility/in_place_factory.hpp>
#include <string>
#include <tixi.h>
#include "CPACSPointList.h"
#include "CPACSSheetList3D.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;

namespace generated
{
    // This class is used in:
    // CPACSStructuralProfiles

    // generated from /xsd:schema/xsd:complexType[857]
    /// @brief structuralProfile3DType
    /// 
    /// 
    /// 
    class CPACSStructuralProfile3D
    {
    public:
        TIGL_EXPORT CPACSStructuralProfile3D(CTiglUIDManager* uidMgr);
        TIGL_EXPORT virtual ~CPACSStructuralProfile3D();

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetName() const;
        TIGL_EXPORT virtual void SetName(const std::string& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetDescription() const;
        TIGL_EXPORT virtual void SetDescription(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const CPACSPointList& GetPointList() const;
        TIGL_EXPORT virtual CPACSPointList& GetPointList();

        TIGL_EXPORT virtual const CPACSSheetList3D& GetSheetList3D() const;
        TIGL_EXPORT virtual CPACSSheetList3D& GetSheetList3D();

    protected:
        CTiglUIDManager* m_uidMgr;

        std::string                  m_uID;
        std::string                  m_name;
        boost::optional<std::string> m_description;
        CPACSPointList               m_pointList;
        CPACSSheetList3D             m_sheetList3D;

    private:
#ifdef HAVE_CPP11
        CPACSStructuralProfile3D(const CPACSStructuralProfile3D&) = delete;
        CPACSStructuralProfile3D& operator=(const CPACSStructuralProfile3D&) = delete;

        CPACSStructuralProfile3D(CPACSStructuralProfile3D&&) = delete;
        CPACSStructuralProfile3D& operator=(CPACSStructuralProfile3D&&) = delete;
#else
        CPACSStructuralProfile3D(const CPACSStructuralProfile3D&);
        CPACSStructuralProfile3D& operator=(const CPACSStructuralProfile3D&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSStructuralProfile3D = generated::CPACSStructuralProfile3D;
#else
typedef generated::CPACSStructuralProfile3D CCPACSStructuralProfile3D;
#endif
} // namespace tigl