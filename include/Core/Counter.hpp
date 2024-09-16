#pragma once

struct Counter {
    std::atomic_int nb_e{0}; // Number of electron that pass the electron cuts
    std::atomic_int nb_pion_plus{0};

    std::atomic_int nb_good_pion_plus{0};
    std::atomic_int nb_pion_plus_pass_chi2{0};
    std::atomic_int nb_pion_plus_not_pass_chi2{0};

    std::atomic_int nb_pion_minus{0};
    std::atomic_int nb_good_minus_plus{0};
    std::atomic_int nb_pion_minus_pass_chi2{0};
    std::atomic_int nb_pion_minus_not_pass_chi2{0};

    std::atomic_int nb_total_event{0};
    std::atomic_int nb_event_with_e_pp_pm{0}; // Number of event with a electron and at least a pion+ and a pion-

    std::atomic_int nb_good_electron_event{0};
    std::atomic_int nb_electron_pass_chi2{0};
    std::atomic_int nb_not_electron_pass_chi2{0};

    std::atomic_int nb_good_rho0{0};
    

    std::atomic_int nb_good_rho0_W{0};
    std::atomic_int nb_good_rho0_W_zh{0};
    std::atomic_int nb_good_rho0_W_zh_t{0};
    std::atomic_int nb_good_rho0_W_zh_t_lc{0};
    std::atomic_int nb_good_rho0_W_zh_t_Q2{0};

    std::atomic_int nb_e_neg_status{0};
    std::atomic_int nb_e_status_2000{0};

    std::atomic_int nb_pion_plus_forward{0};
    std::atomic_int nb_pion_plus_central{0};

    std::atomic_int nb_pion_minus_forward{0};
    std::atomic_int nb_pion_minus_central{0};
};
