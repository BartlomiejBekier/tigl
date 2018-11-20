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

#include <string>
#include <tixi.h>
#include <vector>
#include "tigl_internal.h"
#include "UniquePtr.h"

namespace tigl
{
class CTiglUIDManager;

namespace generated
{
    class CPACSStructuralProfile;
    class CPACSStructuralProfile3D;

    // This class is used in:
    // CPACSProfiles

    // generated from /xsd:schema/xsd:complexType[845]
    /// @brief Definition cross sections of structural profiles.
    /// 
    /// Structuralprofiles type, containing cross section
    /// information of structural profiles.
    /// 
    class CPACSStructuralProfiles
    {
    public:
        TIGL_EXPORT CPACSStructuralProfiles(CTiglUIDManager* uidMgr);
        TIGL_EXPORT virtual ~CPACSStructuralProfiles();

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::vector<unique_ptr<CPACSStructuralProfile> >& GetStructuralProfile2Ds() const;
        TIGL_EXPORT virtual std::vector<unique_ptr<CPACSStructuralProfile> >& GetStructuralProfile2Ds();

        TIGL_EXPORT virtual const std::vector<unique_ptr<CPACSStructuralProfile3D> >& GetStructuralProfile3Ds() const;
        TIGL_EXPORT virtual std::vector<unique_ptr<CPACSStructuralProfile3D> >& GetStructuralProfile3Ds();

        TIGL_EXPORT virtual CPACSStructuralProfile& AddStructuralProfile2D();
        TIGL_EXPORT virtual void RemoveStructuralProfile2D(CPACSStructuralProfile& ref);

        TIGL_EXPORT virtual CPACSStructuralProfile3D& AddStructuralProfile3D();
        TIGL_EXPORT virtual void RemoveStructuralProfile3D(CPACSStructuralProfile3D& ref);

    protected:
        CTiglUIDManager* m_uidMgr;

        std::vector<unique_ptr<CPACSStructuralProfile> >   m_structuralProfile2Ds;
        std::vector<unique_ptr<CPACSStructuralProfile3D> > m_structuralProfile3Ds;

    private:
#ifdef HAVE_CPP11
        CPACSStructuralProfiles(const CPACSStructuralProfiles&) = delete;
        CPACSStructuralProfiles& operator=(const CPACSStructuralProfiles&) = delete;

        CPACSStructuralProfiles(CPACSStructuralProfiles&&) = delete;
        CPACSStructuralProfiles& operator=(CPACSStructuralProfiles&&) = delete;
#else
        CPACSStructuralProfiles(const CPACSStructuralProfiles&);
        CPACSStructuralProfiles& operator=(const CPACSStructuralProfiles&);
#endif
    };
} // namespace generated

// CPACSStructuralProfiles is customized, use type CCPACSStructuralProfiles directly

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSStructuralProfile = generated::CPACSStructuralProfile;
using CCPACSStructuralProfile3D = generated::CPACSStructuralProfile3D;
#else
typedef generated::CPACSStructuralProfile CCPACSStructuralProfile;
typedef generated::CPACSStructuralProfile3D CCPACSStructuralProfile3D;
#endif
} // namespace tigl
