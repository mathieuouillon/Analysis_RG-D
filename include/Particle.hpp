#pragma once

#include <Math/Vector3D.h>
#include <Math/Vector4D.h>
#include <TMath.h>
#include <hipo4/bank.h>
#include <numbers>
#include "Constantes.hpp"

namespace Core {

    class Particle {
    public:
        // ****** constructors and destructor
        Particle();
        Particle(int pdg, int status, int index, double px, double py, double pz, double E_tot,
                 double vx, double vy, double vz, double time, double beta, double chiSquare);

        virtual ~Particle() = default;

        // ****** public methods
        [[nodiscard]] auto Phi() const -> double { return (TMath::ATan2(-fPy, -fPx)) * 180. / std::numbers::pi; }
        [[nodiscard]] auto Theta() const -> double { return (fPz == 0) ? TMath::PiOver2() * 180. / std::numbers::pi : TMath::ACos(fPz / P()) * 180. / std::numbers::pi; }
        /**
         * @brief Calculates the theta value for a particle compared to another particle.
         *
         * This function calculates the theta value, representing the angle between two particles,
         * using the provided Particle object as a reference. The theta value is returned as a double.
         *
         * @param other The Particle object to compare against.
         * @return The calculated theta value as a double.
         *
         * @see Particle
         */
        [[nodiscard]] auto Theta(const Particle &other) const -> double {
            double product = P() * other.P();
            product        = product == 0 ? 1 : (fPx * other.Px() + fPy * other.Py() + fPz * other.Pz()) / product;
            product        = std::max(std::min(product, 1.0), -1.0);
            return TMath::ACos(product);
        }

        // ****** public getters
        [[nodiscard]] auto PxPyPzEVector() const -> ROOT::Math::PxPyPzEVector { return {fPx, fPy, fPz, fE}; }
        [[nodiscard]] auto VxVyVzVtVector() const -> ROOT::Math::XYZTVector { return {fVx, fVy, fVz, fVt}; }
        [[nodiscard]] auto PxPyPzVector() const -> ROOT::Math::XYZVector { return {fPx, fPy, fPz}; }
        [[nodiscard]] auto VxVyVzVector() const -> ROOT::Math::XYZVector { return {fVx, fVy, fVz}; }

        [[nodiscard]] auto Index() const -> int { return fIndex; }
        [[nodiscard]] auto Charge() const -> int { return fCharge; }
        [[nodiscard]] auto PdgCode() const -> int { return fPdgCode; }
        [[nodiscard]] auto StatusCode() const -> int { return fStatusCode; }

        [[nodiscard]] auto Beta() const -> double { return fBeta; }
        [[nodiscard]] auto ChiSquare() const -> double { return fChiSquare; }
        [[nodiscard]] auto E() const -> double { return fE; }

        [[nodiscard]] auto Vx() const -> double { return fVx; }
        [[nodiscard]] auto Vy() const -> double { return fVy; }
        [[nodiscard]] auto Vz() const -> double { return fVz; }
        [[nodiscard]] auto T() const -> double { return fVt; }
        [[nodiscard]] auto R() const -> double { return TMath::Sqrt(fVx * fVx + fVy * fVy); }                //Radius of production vertex in cylindrical system
        [[nodiscard]] auto Rho() const -> double { return TMath::Sqrt(fVx * fVx + fVy * fVy + fVz * fVz); }  //Radius of production vertex in spherical system
        [[nodiscard]] auto Px() const -> double { return fPx; }
        [[nodiscard]] auto Py() const -> double { return fPy; }
        [[nodiscard]] auto Pz() const -> double { return fPz; }
        [[nodiscard]] auto P() const -> double { return TMath::Sqrt(fPx * fPx + fPy * fPy + fPz * fPz); }
        [[nodiscard]] auto Pt() const -> double { return TMath::Sqrt(fPx * fPx + fPy * fPy); }
        [[nodiscard]] auto Energy() const -> double { return fE; }
        [[nodiscard]] auto Mass() const -> double { return fMass; }

        friend std::ostream &operator<<(std::ostream &, const Particle &);

    private:
        int fPdgCode;     // PDG code of the particle
        int fStatusCode;  // generation status code
        int fIndex;       // position in the bank
        int fCharge;      // charge

        double fMass;  // particle mass in GeV

        double fPx;  // x component of momentum
        double fPy;  // y component of momentum
        double fPz;  // z component of momentum
        double fE;   // Energy

        double fVx;  // x of production vertex
        double fVy;  // y of production vertex
        double fVz;  // z of production vertex
        double fVt;  // t of production vertex

        double fBeta;       // beta store in the bank
        double fChiSquare;  // chi^2 of the particle
    };

    Particle::Particle() : fPdgCode(0), fStatusCode(0), fIndex(0), fCharge(0), fMass(0), fPx(0), fPy(0), fPz(0), fE(0), fVx(0),
                           fVy(0), fVz(0), fVt(0), fBeta(0), fChiSquare(0) {}

    Particle::Particle(int pdg, int status, int index, double px, double py, double pz, double E_tot, double vx, double vy, double vz, double time, double beta, double chiSquare)
        : fPdgCode(pdg), fStatusCode(status), fIndex(index), fCharge(0), fMass(0), fPx(px), fPy(py), fPz(pz), fE(E_tot), fVx(vx),
          fVy(vy), fVz(vz), fVt(time), fBeta(beta), fChiSquare(chiSquare) {
        switch (fPdgCode) {
            case 11:
                fCharge = -1;
                fMass   = Constantes::ElectronMass;
                break;
            case 111: case 211: case -211:
                fCharge = 0;
                fMass   = Constantes::PionMass;
                break;
            case 2212:
                fCharge = 1;
                fMass   = Constantes::ProtonMass;
                break;
            case 2112:
                fCharge = 0;
                fMass   = Constantes::NeutronMass;
                break;
            case 22:
                fCharge = 0;
                fMass   = 0;
                break;
            default:
                fCharge = 0;
                fMass   = 0;
                std::cerr << "Do not have this particle." << std::endl;
                break;
        }
    }
    
    std::ostream &operator<<(std::ostream &os, const Particle &p) {
        return os << "Index = " << p.fIndex << " pid = " << p.fPdgCode << " status = " << p.fStatusCode << "\n"
                  << "px = " << p.fPx << " py = " << p.fPy << " pz = " << p.fPz << "\n"
                  << "vx = " << p.fVx << " vy = " << p.fVy << " vz = " << p.fVz << "\n"
                  << "beta = " << p.fBeta << " chiSquare = " << p.fChiSquare;
    }

}  // namespace Core
