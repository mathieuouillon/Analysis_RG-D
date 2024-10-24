#pragma once

namespace Core {

class Particle_v2 {
   private:
    // ****** private members
    const bool m_valide;

    const int m_pdg_code;
    const int m_status;
    const int m_index;
    const int m_charge;

    const double m_mass;
    const double m_px;
    const double m_py;
    const double m_pz;
    const double m_e;

    const double m_vx;
    const double m_vy;
    const double m_vz;
    const double m_vt;

    const double m_beta;
    const double m_chi2pid;

    // ****** private methods

   public:
    // ****** constructors and destructor
    Particle_v2() = default;
    Particle_v2(int valide, int pdg_code, int status, int index, double px, double py, double pz, double e, double vx, double vy, double vz, double time, double beta, double chi2pid, int charge, double mass) ~Particle_v2();

    // ****** public methods

    // ****** public getters
};

Particle_v2::Particle_v2(int valide, int pdg_code, int status, int index, double px, double py, double pz, double e, double vx, double vy, double vz, double time, double beta, double chi2pid, int charge, double mass)
    : m_valide(valide), m_pdg_code(pdg_code), m_status(status), m_index(index), m_charge(charge), m_mass(mass), m_px(px), m_py(py), m_pz(pz), m_e(e), m_vx(vx), m_vy(vy), m_vz(vz), m_vt(time), m_beta(beta), m_chi2pid(chi2pid){};

Particle_v2::~Particle_v2() {
}

}  // namespace Core