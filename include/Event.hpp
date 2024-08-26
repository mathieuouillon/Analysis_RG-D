#pragma once

#include <Math/Vector4D.h>

#include "Particle.hpp"


class Event {
    public:
        // ****** constructors and destructor
        Event(const Core::Particle &electron, const Core::Particle &pionPlus,
        const Core::Particle &pionMinus, double beamEnergy);

        // ****** public getters
        [[nodiscard]] auto Q2() const -> double { return fQ2; }
        [[nodiscard]] auto nu() const -> double { return fNu; }
        [[nodiscard]] auto W2() const -> double { return fW2; }
        [[nodiscard]] auto W() const -> double { return std::sqrt(fW2); }
        [[nodiscard]] auto T() const -> double { return fT; }
        [[nodiscard]] auto Zh() const -> double { return fZh; }
        [[nodiscard]] auto Lc() const -> double { return fLc; }


    private:
        Core::Particle fElectron;
        Core::Particle fPionPlus;
        Core::Particle fPionMinus;
        
        ROOT::Math::PxPyPzEVector k1;

        double fQ2 = std::numeric_limits<double>::quiet_NaN();
        double fW2 = std::numeric_limits<double>::quiet_NaN();
        double fNu = std::numeric_limits<double>::quiet_NaN();
        double fT = std::numeric_limits<double>::quiet_NaN();
        double fZh = std::numeric_limits<double>::quiet_NaN();
        double fLc = std::numeric_limits<double>::quiet_NaN();

};

Event::Event(const Core::Particle &electron, const  Core::Particle &pionPlus,
        const Core::Particle &pionMinus, double beamEnergy)
        : fElectron(electron), fPionPlus(pionPlus), fPionMinus(pionMinus), k1(0, 0, beamEnergy, beamEnergy)
        {
            ROOT::Math::PxPyPzEVector k2 = fElectron.PxPyPzEVector();
            ROOT::Math::PxPyPzEVector q1 = k1 - k2;
            ROOT::Math::PxPyPzEVector p1 = {0, 0, 0, Core::Constantes::ProtonMass};

            ROOT::Math::PxPyPzEVector p_rho = fPionPlus.PxPyPzEVector() + fPionMinus.PxPyPzEVector();

            fQ2 = -q1.M2();
            fW2 = (p1 + q1).M2();
            fNu = k1.E() - k2.E();
            fT = (q1 - p_rho).M2();
            fZh = p_rho.E()/fNu;
            fLc = 0.1973 * (2.0 * fNu / (Core::Constantes::ProtonMassSquare + fQ2));


        }
