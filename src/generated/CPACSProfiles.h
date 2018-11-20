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
#include <CCPACSFuselageProfiles.h>
#include <CCPACSGuideCurveProfiles.h>
#include <CCPACSRotorProfiles.h>
#include <CCPACSStructuralProfiles.h>
#include <CCPACSWingProfiles.h>
#include <string>
#include <tixi.h>
#include "CreateIfNotExists.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;

namespace generated
{
    // This class is used in:
    // CPACSVehicles

    // generated from /xsd:schema/xsd:complexType[736]
    /// @brief profilesType
    /// 
    /// Profiles type, containing profile geometries
    /// 
    class CPACSProfiles
    {
    public:
        TIGL_EXPORT CPACSProfiles(CTiglUIDManager* uidMgr);
        TIGL_EXPORT virtual ~CPACSProfiles();

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const boost::optional<CCPACSFuselageProfiles>& GetFuselageProfiles() const;
        TIGL_EXPORT virtual boost::optional<CCPACSFuselageProfiles>& GetFuselageProfiles();

        TIGL_EXPORT virtual const boost::optional<CCPACSWingProfiles>& GetWingAirfoils() const;
        TIGL_EXPORT virtual boost::optional<CCPACSWingProfiles>& GetWingAirfoils();

        TIGL_EXPORT virtual const boost::optional<CCPACSGuideCurveProfiles>& GetGuideCurves() const;
        TIGL_EXPORT virtual boost::optional<CCPACSGuideCurveProfiles>& GetGuideCurves();

        TIGL_EXPORT virtual const boost::optional<CCPACSRotorProfiles>& GetRotorAirfoils() const;
        TIGL_EXPORT virtual boost::optional<CCPACSRotorProfiles>& GetRotorAirfoils();

        TIGL_EXPORT virtual const boost::optional<CCPACSStructuralProfiles>& GetStructuralProfiles() const;
        TIGL_EXPORT virtual boost::optional<CCPACSStructuralProfiles>& GetStructuralProfiles();

        TIGL_EXPORT virtual CCPACSFuselageProfiles& GetFuselageProfiles(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveFuselageProfiles();

        TIGL_EXPORT virtual CCPACSWingProfiles& GetWingAirfoils(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveWingAirfoils();

        TIGL_EXPORT virtual CCPACSGuideCurveProfiles& GetGuideCurves(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveGuideCurves();

        TIGL_EXPORT virtual CCPACSRotorProfiles& GetRotorAirfoils(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveRotorAirfoils();

        TIGL_EXPORT virtual CCPACSStructuralProfiles& GetStructuralProfiles(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveStructuralProfiles();

    protected:
        CTiglUIDManager* m_uidMgr;

        boost::optional<CCPACSFuselageProfiles>   m_fuselageProfiles;
        boost::optional<CCPACSWingProfiles>       m_wingAirfoils;
        boost::optional<CCPACSGuideCurveProfiles> m_guideCurves;
        boost::optional<CCPACSRotorProfiles>      m_rotorAirfoils;
        boost::optional<CCPACSStructuralProfiles> m_structuralProfiles;

    private:
#ifdef HAVE_CPP11
        CPACSProfiles(const CPACSProfiles&) = delete;
        CPACSProfiles& operator=(const CPACSProfiles&) = delete;

        CPACSProfiles(CPACSProfiles&&) = delete;
        CPACSProfiles& operator=(CPACSProfiles&&) = delete;
#else
        CPACSProfiles(const CPACSProfiles&);
        CPACSProfiles& operator=(const CPACSProfiles&);
#endif
    };
} // namespace generated

// CPACSProfiles is customized, use type CCPACSProfiles directly
} // namespace tigl
